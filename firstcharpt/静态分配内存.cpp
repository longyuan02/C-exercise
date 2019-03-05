#include <iostream>
using namespace std;

void functions(int** addres){//二级指针接收一级指针
    int i=100;
    *addres=&i;//给一级指针地址赋值
}
int main(int argc, char const *argv[])
{
    int *p;
    functions(&p);//函数执行后被回收
    printf("输出p的值====%d\n",*p);
    printf("输出p的值====%d\n",*p);
    /**
     * p的地址1000H   functions()->addres地址2000H 存放1000H地址   i地址3000H
     * addres存放地址1000H修改为i地址3000H的值 
     * p对应i    函数执行后被回收i地址被回收,为什么没报空指针
     * **/



    return 0;
}
