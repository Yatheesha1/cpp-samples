#include <iostream>
#include "header.h"
using namespace std;
extern int b;
int main()
{
    Tester t(10);
    register int d = 50;
    t.display();
    cout << b << endl;
    cout << d << endl;
    return 0;
}