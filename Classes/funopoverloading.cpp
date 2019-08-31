#include <iostream>
using namespace std;

class Tester
{
    int value, img = 0;

public:
    Tester() {}
    Tester(int a)
    {
        value = a;
    }

    Tester(int a, int b)
    {
        value = a;
        img = b;
    }
    void display()
    {
        cout << "Tester display():" << value << " " << img << endl;
    }
    void display(int a)
    {
        cout << "Tester display(int a):" << a << endl;
    }
    void display(char b)
    {
        cout << "Tester display(char b):" << b << endl;
    }
    void display(int a, char b)
    {
        cout << "Tester display(int a, char b):" << a << " " << b << endl;
    }
    Tester operator+(Tester &d)
    {
        Tester t;
        t.value = value + d.value;
        t.img = img + d.img;
        return t;
    }
};

int main()
{
    Tester t(10);
    t.display();
    t.display(20);
    t.display('b');
    t.display(30, 'c');
    Tester t2(40, 70);
    Tester t3(60, 80);
    Tester ts = t2 + t3;
    ts.display();
    return 0;
}