#include <stdio.h>
#include <stdlib.h>
void sitch(int a,int b){//地址属于新开辟出来的,
    int temp = a;
    a = b;
    b = temp;
    printf("a的值fuction======%d\n", a);
    printf("b的值fuction======%d\n", b);
}
int main(int argc, char const *argv[])
{
    /* code */
    int a = 100;
    int b = 1200;
    printf("a的值======%d\n", a);
    printf("b的值======%d\n", b);
    int temp = a;
    a = b;
    b = temp;
    sitch(a,b);
    printf("a的值======%d\n", a);
    printf("b的值======%d\n", b);

    return 0;
}