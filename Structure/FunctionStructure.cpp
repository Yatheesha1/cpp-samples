#include <iostream>
using namespace std;
struct Base
{
private:
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

struct Multiply : public Base
{
private:
    int value3, value4;

public:
    Multiply(int a, int b)
    {
        value3 = a;
        value4 = b;
    }
    int manip()
    {
        return (value3 * value4);
    }
};
struct Subtract : public Base
{
private:
    int value5, value6;

public:
    Subtract(int a, int b)
    {
        value5 = a;
        value6 = b;
    }
    int manip()
    {
        return (value5 - value6);
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
    Subtract S(40, 70);
    base = &S;
    base->display(base->manip());
    return 0;
}