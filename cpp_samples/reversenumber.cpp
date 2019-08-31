#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
class Number
{
private:
    /* data */
    int n1;
    int n2;
    int result;

public:
    Number(int a, int b)
    {
        this->n1 = a;
        this->n2 = b;
    }
    void reverse(int);
    void reverse(char *);
    void swap(char *ch1, char *ch2)
    {
        char ch = *ch1;
        *ch1 = *ch2;
        *ch2 = ch;
    }
    void display()
    {
        printf("Result: %d\n", result);
    }
};

void Number::reverse(int a)
{
    int res = 0;
    while (a > 0)
    {
        res = res * 10 + a % 10;
        a /= 10;
    }
    result = res;
}
void Number::reverse(char *a)
{
    int len = strlen(a);
    printf("Input: %s\n", a);
    for (int i = 0; i <= len / 2; i++)
    {
        swap(&a[i], &a[len - i - 1]);
    }
}

int main()
{
    string name;
    Number num(657, 40);
    num.reverse(6528);
    num.display();
    num.reverse(4386);
    num.display();
    char s[] = "hello";
    char *st = s;
    num.reverse(st);
    printf("reverse: %s\n", st);
    return 0;
}
