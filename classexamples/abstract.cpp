#include <stdio.h>
#include <iostream>

using namespace std;

class Base
{
public:
    Base(int i, float f, double d) : i(i), f(f), d(d)
    {
    }
    virtual void Show()
    {
        cout << "I am base class" << endl;
    }
    void display()
    {
        cout << "I am base class display" << endl;
    }
    virtual void ShowData() = 0;

protected:
    int i;
    float f;
    double d;
};

class Derived : public Base
{
public:
    Derived(int i, float f, double d) : Base(i, f, d)
    {
    }
    void Show()
    {
        cout << "int i = " << i << endl
             << "float f = " << f << endl
             << "double d = " << d << endl;
    }
    void display()
    {
        cout << "I am derived class display" << endl;
    }
    void ShowData()
    {
        cout << "I am derived class ShowData" << endl;
    }
};

int main()
{
    Derived derived(10, 1.2, 3.89);
    derived.Show();
    //Base b(101, 11.2, 31.89);
    //b.Show();
    Base *base = &derived; //=new Derived(10, 1.2, 3.89)
    base->Show();
    //b.display();
    base->display(); //suppose to call derived class
    base->ShowData();
    return 0;
}