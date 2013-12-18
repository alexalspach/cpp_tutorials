#include <iostream>
using namespace std;

#define NEWLINE '\n'
#define NEWLINE_W_SEMICOLON '\n';
/* Note that the #define lines are preprocessor directives,
   and as such are single-line instructions that -unlike C++ statements-
   do not require semicolons (;) at the end; the directive extends
   automatically until the end of the line. If a semicolon is
   included in the line, it is part of the replacement sequence
   and is also included in all replaced occurrences. */

const double pi = 3.14159;


int main ()
{
    double r = 50.0;   // radius
    double circle;

    circle = 2 * pi * r;
    cout << circle;
    cout << NEWLINE;

    string x = "string expressed in \
two lines";

    cout << R"(string with \backslash\n)" << NEWLINE; // Raw string

    cout << x << NEWLINE_W_SEMICOLON

}
