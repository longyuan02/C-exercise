#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int length;
    printf("请输入数组长度\n");
    scanf("%d", &length);//引用地址
    printf("请输入数组长度为%d\n", length);
    int intArray[length];//初始化数组
    for (int i = 0; i < length; i++)
    {
        printf("请输入array[%d]\n", i);
        // scanf("%d", &intArray[i]); //向数组索引内输入值
        scanf("%d", intArray+i); //效果同上
    }
    for (int j = 0; j < length; j++)
    {
        // printf("输出数组arr[%d]======%d\n",j,intArray[j]);
        printf("输出数组arr[%d]======%d\n",j,*(intArray+j));
        }
    /* code */
    return 0;
}
