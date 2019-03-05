#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char charArray[] = {'H', 'E', 'L', 'L', 'O'};
    int iArray[] = {11, 12, 13, 14, 15};
    //取数组里的值
    printf("char数组值======:%c\n", charArray[0]);
    printf("int数组值======:%d\n", iArray[0]);
    //从内存地址取   打印内存地址
    printf("char数组内存地址[0]======:%#x\n", &charArray[0]);
    printf("char数组内存地址[1]======:%#x\n", &charArray[1]);
    printf("char数组内存地址[2]======:%#x\n", &charArray[2]);
    printf("char数组内存地址[3]======:%#x\n", &charArray[3]);
    printf("char数组内存地址[4]======:%#x\n\n", &charArray[4]);

    printf("int数组内存地址[0]======:%#x\n", &iArray[0]);
    printf("int数组内存地址[1]======:%#x\n", &iArray[1]);
    printf("int数组内存地址[2]======:%#x\n", &iArray[2]);
    printf("int数组内存地址[3]======:%#x\n", &iArray[3]);
    printf("int数组内存地址[4]======:%#x\n\n", &iArray[4]);

    //直接取数组内存地址   数组地址与array[0]地址相同
    printf("charArray数组地址======:%#x \n", &charArray);
    printf("iArray======:%#x \n\n", &iArray);

    //通过指针取值方式一 数组是连续的 通过取到的地址再加下标取值
    printf("charArray数组值======%c\n", *charArray); //取值从0位开始
    printf("charArray[0]数组值======%c\n", *charArray + 0);
    printf("charArray[1]数组值======%c\n", *charArray + 1);
    printf("charArray[2]数组值======%c\n", *charArray + 2);
    printf("charArray[3]数组值======%c\n", *charArray + 3);
    printf("charArray[4]数组值======%c\n\n", *charArray + 4);
    printf("iArray数组值======%d\n", *iArray); //取值从0位开始
    printf("iArray[0]数组值======%d\n", *iArray + 0);
    printf("iArray[1]数组值======%d\n", *iArray + 1);
    printf("iArray[2]数组值======%d\n", *iArray + 2);
    printf("iArray[3]数组值======%d\n", *iArray + 3);
    printf("iArray[4]数组值======%d\n", *iArray + 4);

//通过指针取值方式二(推荐) 通过下标去取值
    printf("charArray数组值方式二======%c\n", *charArray); //取值从0位开始
    printf("charArray[0]数组值方式二======%c\n", *(charArray + 0));
    printf("charArray[1]数组值方式二======%c\n", *(charArray + 1));
    printf("charArray[2]数组值方式二======%c\n", *(charArray + 2));
    printf("charArray[3]数组值方式二======%c\n", *(charArray + 3));
    printf("charArray[4]数组值方式二======%c\n\n", *(charArray + 4));
    printf("iArray数组值方式二======%d\n", *(iArray)); //取值从0位开始
    printf("iArray[0]数组值方式二======%d\n", *(iArray + 0));
    printf("iArray[1]数组值方式二======%d\n", *(iArray + 1));
    printf("iArray[2]数组值方式二======%d\n", *(iArray + 2));
    printf("iArray[3]数组值方式二======%d\n", *(iArray + 3));
    printf("iArray[4]数组值方式二======%d\n", *(iArray + 4));




    return 0;
}
