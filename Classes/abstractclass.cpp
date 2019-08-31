#include <iostream>
using namespace std;
class Base
{
    int value1, value2;

public:
    Base() {}
    Base(int a, int b)
    {
        value1 = a;
        value2 = b;
    }
    void display(int result)
    {
        cout << "Base Result:" << result << endl;
    }
    virtual int manip() = 0;
};

class Multiply : public Base
{
    int value1, value2;

public:
    Multiply(int a, int b)
    {
        value1 = a;
        value2 = b;
    }
    int manip()
    {
        return (value1 * value2);
    }
};
class Subtract : public Base
{
    int value1, value2;

public:
    Subtract(int a, int b)
    {
        value1 = a;
        value2 = b;
    }
    int manip()
    {
        return (value1 - value2);
    }
};

int main()
{
    // Base bs(30, 20);
    // cout << "Addition" << endl;
    // bs.display(bs.manip());
    Base *base;
    cout << "Multiply" << endl;
    Multiply M(40, 70);
    base = &M;
    base->display(base->manip());
    cout << "Subtract" << endl;
    // Subtract S(40, 70);
    base = new Subtract(40, 70);
    base->display(base->manip());
    return 0;
}