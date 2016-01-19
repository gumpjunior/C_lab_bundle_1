//============================================================================
// Name        : string_basics.cpp
// Author      : gumpjunior
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {

    cout << "Program starts!" << endl;
    string::iterator it;
    string::iterator tempIt;


    //
    //Basic point 1
    //What is *(str1.begin()) when the string is empty.
    //
    string str1 = "";
    it          = str1.begin();
    cout << "Test point 1:" << endl;
    cout << "str1.size() = " << str1.size() << endl;    //string size is 0.
    cout << "*(str1.begin()) = " << *it << endl;        //This is legal.
                                                        //The output is: "str1.begin() = ".
    if (*it == '\0') {
        cout << "str1.begin() is '\\0' when string is \"\".";
    }
    else {
        cout << "str1.begin() is NOT '\\0' when string is \"\".";
    }
    cout << "\n\n";


    //
    //Basic point 2
    //The last char of a string object is still '\0'. Same as C.
    //That's why the string object recursion will be written as:
    //for (it=s.begin(); it!=s.end(); ++it)
    //
    string str2 = "world";
    it          = str2.end();
    cout << "Test point 2:" << endl;
    cout << "str2.size() = " << str2.size() << endl;    //The string size does NOT count the last '\0'.
    cout << "*(str2.end()) = " << *it << endl;          //The output is: "str2.begin() = ".
    if (*it == '\0') {
        cout << "str2.begin() is '\\0' when string is \"world\".";
    }
    else {
        cout << "str2.begin() is NOT '\\0' when string is \"world\".";
    }
    cout << "\n\n";


    //
    //Basic point 3
    //Remove a char by iterator
    //
    cout << "Test point 3:" << endl;
    it = str2.end();
    str2.erase(--it);
    str2.erase(--it);
    for (it=str2.begin(); it!=str2.end(); ++it) {
        cout << *it;
    }
    cout << "\n\n";


    //
    //Basic point 4
    //Remove ahead empty spaces.
    //
    cout << "Test point 4:" << endl;
    string str3 = "   good luck";
    it=str3.begin();
    while (*it==' ') {
        //str3.erase(it);               //Typical ERROR, GOOD.
        //++it;

        //++it;                         //Right
        //str3.erase(--it);

        tempIt = it;
        ++it;
        str3.erase(tempIt);
    }
    for (it=str3.begin(); it!=str3.end(); ++it) {
        cout << *it;
    }
    cout << "\n\n";

    //
    //Basic point 5
    //Remove appending empty spaces.
    //
    cout << "Test point 5:" << endl;
    string str4 = "good luck   ";
    it=str4.end()-1;
    while (*it==' ') {
        //--it;                         //Typical ERROR, GOOD.
        //str4.erase(++it);             //Understanding what is ++/--.

        tempIt = it;                  //This code is right.
        --it;                         //But another iterator is used.
        str4.erase(tempIt);

        //str4.erase(it);               //This is right.
        //--it;
        //
    }
    for (it=str4.begin(); it!=str4.end(); ++it) {
        cout << *it;
    }
    cout << "x";
    cout << "\n\n";

    //
    //Basic point 6
    //
    //
    cout << "\nProgram ends!" << endl;

    return 0;

}
