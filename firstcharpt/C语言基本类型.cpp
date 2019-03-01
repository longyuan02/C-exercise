#include<stdio.h>
#include<stdlib.h>
/** 
 * C语言基本类型
 * char int float double long short signed unsigned void
 * 计算类型的长度 sizeof("类型")返回类型的长度
 * 占位符:%d
 * print("内容");
 * **/
int main(int argc, char const *argv[])
{
    /* code */
        int size=sizeof(int);
    printf("int类型的长度: %zu \n", sizeof(int));//换行符在%d后边
    printf("char类型的长度: %zu\n", sizeof(char));//换行符在%d后边
    printf("float类型的长度: %zu\n", sizeof(float));//换行符在%d后边
    printf("long类型的长度: %zu\n", sizeof(long));//换行符在%d后边
    printf("double类型的长度: %zu\n", sizeof(double));//换行符在%d后边
    printf("short类型的长度: %zu\n", sizeof(short));//换行符在%d后边
    return 0;
}
/** 
 * printf("double类型的长度: %d\n", sizeof(double));//换行符在%d后边报错
 *  format specifies type 'int' but the argument has type 'unsigned long' [-Wformat]
    printf("double类型的长度: %d\n", sizeof(double));//换行符在%d后边
 * 
 * **/
