#include <iostream>

#include <string>
#include <sstream> // for stringstream

using namespace std;

int main()
{
    // Streams
    /*string something;
    cout << "Type Something... " << endl;
    cin >> something;
    cout << something << endl << endl;*/

    char somethingelse[100];
    cout << "Type Something... ";
    cin.getline(somethingelse,100);
    cout << somethingelse << endl << endl;

    // or

    string name;
    cout << "What's your name? ";
    getline (cin, name);
    cout << "Hello " << name << ".\n\n";



    cerr << "ERROR" << endl;
    clog << "LOG" << endl << endl;

    string myString = "hello world";
    cout << myString.c_str() << endl; // null terminated string
    cout << myString << endl << endl;

    int age = 24;
    int zipcode = 18016;
    cout << "I am " << age << " years old and my zipcode is " << zipcode << '\n' << endl;
    // '\n' is newline, endl flushes the stream and new line
    // advised to use '\n' unless you specifically want to flush the stream

    int i;
    cout << "Please enter an integer value: ";
    cin >> i;
    cout << "The value you entered is " << i;
    cout << " and its double is " << i*2 << ".\n\n";

    int a, b, c;
    cout << "Please enter 3 integer values separated by spaces: ";
    cin >> c >> a >> b;
    cout << a << ' ' << b << ' ' << c << '\n' << endl;


    // stringstream
    /* string mystr2 ("1204");
    int myint;
    stringstream(mystr2) >> myint;*/


    return 0;
}
