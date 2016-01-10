/*
 * File:   main.cpp
 * Author: djiao
 *
 * Created on July 17, 2011, 9:11 AM
 */
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <dirent.h>
#include <iostream>
#include <list>
using namespace std;

int main(int argc, char** argv) {

    struct a {
        int x;
        void *can;
    };
    a student;
    student.x = 9;
    string str = "Congratulations.";
//    ((string *)student.can) = &str;      //这三种赋值形式都不对。
                                           //void被赋值的时候，不能转换成为其他的类型；

    student.can = (void*) & str;           //这个赋值语句也对。
//    student.can = &str;                  //这个赋值语句也对。
    struct a *pArch;
    pArch = &student;                      //这个复制语句可以

    //以下三个输出语句都是输出string的地址。
    cout << &str<<endl;
    cout << (void*) student.can << endl;
    cout << student.can << endl;
    //此句输出student.can的地址；
    cout << &student.can << endl;
    //要输出void指针指向的对象，需先将void指针转换成为该对象的类型，在使用“*”；
    cout << *(string*) pArch->can << endl;
    cout<<"new experiment"<<endl;
    cout<<*(pArch->can)<<endl;
    return (EXIT_SUCCESS);
}

