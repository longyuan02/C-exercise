#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i = 100;
    //定义一个一级指针
    int *adddress1 = &i;
    //定义一个二级指针
    int **adddress2 = &adddress1;
    //定义一个三级指针
    int ***adddress3 = &adddress2;
    //定义一个四级指针
    int ****adddress4 = &adddress3;

    printf("****addadress4%d\n",****adddress4);

    return 0;
}
