    /*
     * 第十一章：字符串和字符串函数————
     * 函数：gets(),puts(),strcat(),strncat(),
     * strcmp(),strncmp(),strcpy(),strncpy(),
     * sprintf(),strchr()
     * 创建和使用字符串
     * 利用C库里的字符串和字符函数创建自己的字符串函数
     */
#include <stdio.h>
#include <stdlib.h>
#include "capture11.h"

int main()
{
//    strings(); // 包含了几种建立、读入和输出字符串的方式（包括gets(),puts()函数）
//    quote(); // 将字符串看做指针的验证和实验
//    gets1(); // gets函数使用
//    gets2();
//    fgets1(); // fgets函数使用
//    scan_str(); // scanf函数使用
//    put_out(); // 利用puts函数证明一种错误的字符串定义方式
//    nono(); // puts函数
//    fputs1(); // fputs函数
    const char *sr = "Song jun hao ";
    put1(sr); // 不输出换行符
    put2(sr);
    put2("Song junhao"); // 可以直接将字符串常量传送给函数，也是地址
    return 0;
}