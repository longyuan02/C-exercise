#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int i = 10;
    int *p = &i;

    // //part1 如果修改i值 p有变化吗  地址不变
    // printf("修改i值前: %#x\n", p);
    // i = 100;
    // printf("修改i值后: %#x\n", p);

    // //part2 如果修改p值 i有变化吗 无变化
    // printf("修改p值前: %d\n", i);
    // int j = 110;
    // p = &j;
    // printf("修改p值后: %d\n", i);

    // //part3 如果修改i值 *p有变化吗 有
    // printf("修改i值前: %d\n", *p);
    // i = 1110;
    // printf("修改i值后: %d\n", *p);

    //part4 如果修改*p值 i有变化吗  有
    printf("修改i值前: %d\n", i);
    *p = 1110;
    printf("修改i值后: %d\n", i);

    /* code */
    return 0;
}
