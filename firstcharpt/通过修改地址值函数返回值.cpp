#include <iostream>
using namespace std;
void close(int *a, int *b)
{
    *a=1001;
    *b=1011;

}
int main(int argc, char const *argv[])
{
    int a = 100;
    int b = 101;
    close(&a, &b);
    printf("a的值======%d\n", a);
    printf("b的值======%d\n", b);
    return 0;
}
