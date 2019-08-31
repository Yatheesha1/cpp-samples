#include <istream>
#include <stdio.h>
#include <string.h>
using namespace std;
struct person
{
    int a;
    int b;
    void display()
    {
        printf("%d+%d=%d\n", a, b, a + b);
    }
} per;

class passbysample
{
private:
    int a, b;

public:
    passbysample() {}
    void display(int p, int q)
    {
        printf("%d %d \n", p, q);
    }
    void swap(int p, int q) //pass by value
    {
        int r = p;
        p = q;
        q = r;
    }
    void swapad(int &p, int &q) //pass by refference
    {
        int r = p;
        p = q;
        q = r;
    }
    void swap(int *p, int *q) //pass by pointers
    {
        int r = *p;
        *p = *q;
        *q = r;
    }

    void swap(person &pe) //pass by pointers
    {
        int r = pe.a;
        pe.a = pe.b;
        pe.b = r;
    }
};

int main()
{

    per.a = 10;
    per.b = 20;
    per.display();
    passbysample pbs;
    pbs.display(per.a, per.b);
    printf("Before\n");
    pbs.swap(per.a, per.b);
    pbs.display(per.a, per.b);
    printf("pass by value\n");
    pbs.swapad(per.a, per.b);
    pbs.display(per.a, per.b);
    printf("pass by refference\n");
    pbs.swap(&per.a, &per.b);
    pbs.display(per.a, per.b);
    printf("pass by pointer\n");

    pbs.swap(per);
    per.display();
    printf("Struct\n");

    char ch[6] = "hello";
    printf("len %d,string %s\n", (int)strlen(ch), ch);
    return 0;
}
