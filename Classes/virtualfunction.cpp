#include <iostream>
using namespace std;
class Base
{
    int value, img = 0;

public:
    Base() {}
    Base(int a, int b)
    {
        value = a;
        img = b;
    }
    virtual void display()
    {
        cout << "Base display():" << value << " " << img << endl;
    }
    void display(int a)
    {
        cout << "Base display(int a):" << a << endl;
    }
};

class Tester : public Base
{
    int value, img = 0;

public:
    Tester() {}
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
};

int main()
{
    Tester t(40, 70);
    Base *base = &t;
    t.display();
    t.display(20);
    cout << "pointer calling" << endl;
    base->display();
    base->display(20);
    return 0;
}