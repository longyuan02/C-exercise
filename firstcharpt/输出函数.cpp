#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    /* code */
    char c = 'A';
    int i = 12345678;
    double d = 1234567.123456;
    long l = 1234567890;
    float f = 3.1415926;

    printf("c==%c\n", c);
    printf("f==%.4f\n", f);
    printf("i==%d\n", i);
    printf("double==%.6lf\n", d);
    printf("long==%ld\n", l);

    char charArray[] = {'A', 'B'};
    string text ="输入文本"; //指针形式
    return 0;
}
