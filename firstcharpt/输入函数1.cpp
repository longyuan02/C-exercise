#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    int i;
    string s;
    scanf("%d", &i);
    printf("输入内容输出数字 %d \n", i);
    // 输入数组
    char charArray[] = {'H', 'E', 'L', 'L', 'O'};
    int j;
    for (i = 0; i < 5; i++)
    {
        printf("charArray[%d]==%c \n", i, charArray[i]);
    }
    // c语言中没有String类型使用char数组表示 使用%s输出
    printf("输出数组====%s \n", charArray);
    printf("分隔符========================================================");
    // 自定义数组
    char addArray[5];
    printf("请输入5个字符\n");
    scanf("%s", &addArray);
    for (i = 0; i < 5; i++)
    {
        printf("addArray[%d]==%c \n", i, addArray[i]);
    }

    //  数组是一块连续的内存空间 内部使用/0代表结束
    char finishArray[] = {
        'L',
        'O',
        'V',
        'E',
        '\0',
        'Y',
    };
    printf("数组内部结束符%s\n", finishArray);
    // int custom = 10;
    // int *p = &custom;
    // printf("打印指针: %d\n", *p);
    // scanf("%d", &custom);
    // printf("打印指针1: %d\n", *p);
    // *p = 101;
    // printf("打印指针2: %d\n", *p);
    return 0;
}
