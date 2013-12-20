// function example
#include <iostream>

using namespace std;


int addition (int a, int b)
{
    int r;
    r=a+b;
    return r;
}

int subtraction (int a, int b)
{
    int r;
    r=a-b;
    return r;
}

// Functions with no type. The use of void


int main()
{
    // Functions
    // type name ( parameter1, parameter2, ...) { statements }
    int z;
    z = addition (5,3);
    cout << "The result is " << z << '\n';

    int x=5, y=3;
    z = subtraction (7,2);
    cout << "The first result is " << z << '\n';
    cout << "The second result is " << subtraction (7,2) << '\n';
    cout << "The third result is " << subtraction (x,y) << '\n';
    z = 4 + subtraction (x,y);
    cout << "The fourth result is " << z << '\n';

}

