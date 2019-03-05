#include <iostream>
using namespace std;
void functions(int **address)
{
    int i = 101;
    int *temp = new int(i); //c++使用new开辟内存
    // temp = (int *)malloc(sizeof(int));c
    printf("输出temp的值前====%d\n", *temp);
    *address = temp;
    // delete []temp;
    delete temp;
    printf("输出temp的值后====%d\n", *temp);
}
int main(int argc, char const *argv[])
{
    int *p;
    functions(&p); //函数执行后被回收
    printf("输出p的值====%d\n", *p);
    printf("输出p的值====%d\n", *p);
    printf("输出p的值====%d\n", *p);
    printf("输出p的值====%d\n", *p);
    return 0;
}

//   int i=100;
//     int* temp;
//     // temp=malloc(sizeof(int));
