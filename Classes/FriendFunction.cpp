#include <iostream>
using namespace std;
class BB;
class CC;
class AA
{
    int a = 10;

public:
    friend int sum(AA, BB);
    friend class CC;
};

class BB
{
    int b = 20;

public:
    friend int sum(AA, BB);
};

class CC
{
    int c = 20;

public:
    void display(AA aa)
    {
        cout << aa.a << endl;
    }
    void display()
    {
        AA aa;
        aa.a = 50;
        cout << aa.a << endl;
    }
};

int sum(AA aa, BB bb)
{
    return (aa.a + bb.b);
}

int main()
{
    AA aa;
    BB bb;
    CC cc;
    cout << sum(aa, bb) << endl;
    cc.display(aa);
    cc.display();
    return 0;
}