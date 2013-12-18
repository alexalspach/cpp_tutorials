/*
 Global:
   Go to Settings -> Compiler -> Compiler flags -> Select "Have g++ follow the C++11 ISO C++ language standard [-std=c++11]"
 Single project:
   Go to Project -> Build options -> Compiler flags -> Select "Have g++ follow the C++11 ISO C++ language standard [-std=c++11]"
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>

using namespace std;

int main()
{

// FUNDAMENTAL TYPES
    // declaring variables:
    int a = 5;
    int b(2);
    int c{1};
    int result;

    // process:
    a = a + c;
    result = a - b;

    // print out the result:
    cout << result << endl;

    // Type deduction
    // Requires newer (2011+) compiler
    int foo = 22;
    auto bar = foo;  // the same as: int bar = foo;
    int foo2 = 45;
    decltype(foo2) bar2 = foo2;  // the same as: int bar2;

    cout << foo << " " << bar << " " << foo2 << " " << bar2 << endl;


// COMPOUND TYPES
    string mystring;
    string mystring2 ("Hello Korea!");
    string mystring3 {"Hello Alex!"};
    mystring =        "Hello World!";
    cout << mystring << endl << mystring2 << endl << mystring3 << endl;

    // terminate the program:
    getch();

    return 0;

}
