#include <iostream>
#include <string>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

int main()
{

    // Compound Statement   if (condition) statement
    // { statement1; statement2; statement3; }


    // Selection statements: if and else

    int x = 100;

    if (x == 100)
        cout << "x is 100\n";

    if (x == 100)
    {
        cout << "x is ";
        cout << x << '\n';
    }

    if (x == 100)
    {
        cout << "x is ";
        cout << x << '\n';
    }

    if (x > 0)
        cout << "x is positive\n";
    else if (x < 0)
        cout << "x is negative\n";
    else
        cout << "x is 0\n";


    // Iteration statements (loops)   while (expression) statement

    int n = 10;
    while (n>0)
    {
        cout << n << ", ";
        //--n;
        n--;
    }
    cout << "liftoff!\n";

    n = 10;
    do
    {
        cout << n << ", ";
        //--n;
        n--;
    }
    while (n>0);
    cout << "liftoff!\n";

    /*
    string str;
    do {
      cout << "Enter text: ";
      getline (cin,str);
      cout << "You entered: " << str << '\n';
    } while (str != "goodbye");

     str = "0";
    while (str != "goodbye") {
      cout << "Enter text: ";
      getline (cin,str);
      cout << "You entered: " << str << '\n';
    }
    */

    /* The do-while loop is usually preferred over a while-loop
     when the statement needs to be executed at least once,
     such as when the condition that is checked to end of the
     loop is determined within the loop statement itself. */

    for (int n=10; n>0; n--)
    {
        cout << n << ", ";
    }
    cout << "liftoff!\n";

    // Multiple iterators can be used
    int i;
    for ( n=0, i=20 ; n!=i ; ++n, --i )
    {
        // whatever here...
        cout << n << ' ' << i << '\n';
    }


    // Range-based for loop
    /* Ranges are sequences of elements, including arrays,
    containers, and any other type supporting the functions
    begin and end */

    string str {"Alex Rox!"};
    for (char c : str)
    {
        cout << "[ " << c << " ]";
    }
    cout << '\n';

    for (auto c : str)
        cout << "[" << c << "]";
    cout << '\n';

    int array[9] = {0, 3, 4, 5, 3, 5, 3, 34, 29};
    for (auto c : array)
        cout << "[" << c << "]";
    cout << '\n';


    // Jump statements
    // The break statement
    for (int n=10; n>0; n--)
    {
        cout << n << ", ";
        if (n==3)
        {
            cout << "countdown aborted!";
            break;
        }
    }
    cout << '\n';

    // The continue statement
    for (int n=10; n>0; n--)
    {
        if (n==5)
        {
            cout << "five" << ", ";
            continue;
        }
        if (n==2) continue;

        cout << n << ", ";
    }
    cout << "liftoff!\n";

    // The goto statement
    n=13;
mylabel:
    cout << n << ", ";
    n--;
    if (n>0) goto mylabel;
    cout << "liftoff!\n";


    // Another selection statement: switch.
    srand (time(NULL));
    for (i = 0; i<20; i++)
    {
        x = rand() % 2 + 1;
        cout << x << ' ' ;
    }
    cout << '\n';

    x = rand() % 5 + 1; // generate random number between 1 and 2
    cout << "x=" << x << ", " ;
    switch (x)
    {
    case 1:
    case 2:
    case 3:
        cout << "x is 1, 2 or 3";
        break;
    default:
        cout << "x is not 1, 2 nor 3";
    }

}
