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


## 输出函数
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
>不同类型要使用不同占位符输出,否则会精度丢失
    保留小数%.位数 占位符   //四舍五入
###### C语言中数组注意事项
        char charArray[]={'A','B'};
        char* text="输入文本";//指针形式

