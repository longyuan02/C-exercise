
## 基本类型
###### 切换输入文件在 task.json文件中修改
<pre><code>
"args": [
                "firstcharpt/C语言基本类型.cpp"//修改文件完整路径包含后缀
            ],
</code></pre>

###### Java
    类型          字节 
    byte          1
    short         2
    int           4
    char          2
    float         4
    double        8
    boolean       1
    long          8
###### C++
    char int float double long short signed unsigned void 
    C语言没有 byte 和boolean 

###总结
1. Java 中char类型的长度为2个字节,C语言中的长度为1个字节
2. Java中long类型的长度为8个字节,C语言中的场地为4个字节
>C99标注规定:long类型的规定,不小于整型
3. C语言中没有byte
4. C语言中Boolean类型,0表示false,非零表示true
    signed:有符号:-128~127=-2^7~2^7-1
    unsigned:无符号 0~255=0~2^8-1
    void:无类型,代表任意类型
>printf("double类型的长度: %d\n", sizeof(double));//换行符在%d后边报错
>format specifies type 'int' but the argument has type 'unsigned long' [-Wformat]
>使用printf("double类型的长度: %zu\n", sizeof(double));//替换方案

*****
## 输出函数  输出函数.cpp
    符号            类型
    %d              int
    %ld             long/int
    %f              float
    %c              char
    %u              无符号
    %hd             短整型
    %lf             double
    %x              十六进制
    %o              八进制
    %s              字符串
    增加地址可以使用%#x显示完整
>不同类型要使用不同占位符输出,否则会精度丢失
    保留小数%.位数 占位符   //四舍五入
###### C语言中数组注意事项
        char charArray[]={'A','B'};
        char* text="输入文本";//指针形式

## 输入函数   输入函数1.cpp
    scanf("占位符","内存地址")
    c语言中没有String类型使用char数组表示 使用%s输出
    数组是一块连续的内存空间 内部使用/0代表结束
*****
## 指针 
    指针是内存地址
    定义一个int类型的以及指针p
    int* p;
    int sun=10;
    把i对应的地址赋值给p
    p=&i;
    指针取值*p 把p对应地址的值取出来
    printf("%d \n",*p);
>int i=100;
>指针地址:*p指针赋值 即:*p=&i 变换的是指针*p的地址
>注意
<pre><code>
//改变i地址值 或者指针的值都可以
    int custom = 10;
    int *p = &custom;//&赋值
    printf("打印指针: %d\n", *p);
    scanf("%d", &custom);
    printf("打印指针1: %d\n", *p);
    *p = 101;
    printf("打印指针2: %d\n", *p);
</code></pre>
###### 指针和指针变量的关系
	指针就是地址,地址就是指针
	地址是内存单元的编号
	指针变量是存放地址的变量
	指针和指针变量是两个不同的概念,但是要注意:通常我们叙述时会把指针变量称为指针,实际他们含义并不一样.

	指针里存的是100,指针:地址--具体
	指针里存的是地址,指针:指针变量--可变

####### 为什么使用指针
	指针的重要性
	直接访问硬件(opengl 显卡绘图)
	快速传递数据(指针标识地址)
	返回一个以上的值(返回一个数组或者结构体的指针)
	表示复杂的数据结构(结构体)
	方便处理字符串
	指针有助于理解面向对象

###### *号的含义
	数学运算符:3*5
	定义指针变量 int* p;
	指针运算符(取值):*p(取p的内容(地址)在内存中的值)







[项目仓储](https://github.com/longyuan02/C-exercise.git)