#include <iostream>

using namespace std;

int main()
{
    int x, y;


    x = 3;
    y = ++x;    // x contains 4, y contains 4
    cout << "x = " << x << ", " << "y = " << y << endl;

    x = 3;
    y = x++;    // x contains 4, y contains 3
    cout << "x = " << x << ", " << "y = " << y << endl;

    cout << (7 == 5) << " " ;       // evaluates to false
    cout << (5 > 4) << " " ;        // evaluates to true
    cout << (3 != 2) << " " ;       // evaluates to true
    cout << (6 >= 6) << " " ;       // evaluates to true
    cout << (5 < 5) << endl ;        // evaluates to false

    int a=2, b=3, c=6;
    cout << (a == 5) << " " ;       // evaluates to false, since a is not equal to 5
    cout << (a*b >= c) << " " ;     // evaluates to true, since (2*3 >= 6) is true
    cout << (b+4 > a*c) << " " ;    // evaluates to false, since (3+4 > 2*6) is false
    cout << ((b=2) == a) << endl;   // evaluates to true

    cout << !(5 == 5) << " " ;      // evaluates to false because the expression at its right (5 == 5) is true
    cout << !(6 <= 4) << " " ;      // evaluates to true because (6 <= 4) would be false
    cout << !true << " " ;          // evaluates to false
    cout << !false << endl ;        // evaluates to true

    cout << ( (5 == 5) && (3 > 6) ) << " " ;  // evaluates to false ( true && false )
    cout << ( (5 == 5) || (3 > 6) ) << endl ; // evaluates to true ( true || false )
    cout << endl;
    // operator	    // short-circuit
    //  &&	        if the left-hand side expression is false, the combined result is false (the right-hand side expression is never evaluated).
    //  ||	        if the left-hand side expression is true, the combined result is true (the right-hand side expression is never evaluated).

    int n = 10;
    int i = 6;
    cout << "i= " << i << " ->" << ' ' ;
    if ( (i<10) && (++i<n) ) { cout << i << endl; }  // note that the condition increments i
    else { cout << "Conditions not met!" << endl; }

    i = 9;
    cout << "i= " << i << " ->" << ' ' ;
    if ( (i<10) && (++i<n) ) { cout << i << endl; }  // note that the condition increments i
    else { cout << "Conditions not met!" << endl; }
    cout << endl;
    /* Here, the combined conditional expression would increase i by one,
       but only if the condition on the left of && is true, because otherwise,
       the condition on the right-hand side (++i<n) is never evaluated. */



    // Conditional ternary operator ( ? )
    // condition ? result1 (if true) : result2 (if false)
    // true = result1
    // false = result2
    // If condition is true, the entire expression evaluates to result1, and otherwise to result2.

    cout << ( 7==5 ? 4 : 3 ) << " " ;      // evaluates to 3, since 7 is not equal to 5.
    cout << ( 7==5+2 ? 4 : 3 ) << " " ;    // evaluates to 4, since 7 is equal to 5+2.
    cout << ( 5>3 ? a : b ) << " " ;       // evaluates to the value of a, since 5 is greater than 3.
    cout << ( a>b ? a : b ) << endl ;      // evaluates to whichever is greater, a or b.
    cout << endl;

    // Comma operator ( , )
    a = (b=3, b+2); // 5, b=3 then b+2=5
    cout << a << endl;
    cout << endl;



    // Bitwise operators ( &, |, ^, ~, <<, >> )
    /*[Operator]    [asm equivalent]  [Description]
       &	         AND	           Bitwise AND
       |	         OR	               Bitwise inclusive OR
       ^	         XOR	           Bitwise exclusive OR
       ~	         NOT	           Unary complement (bit inversion)
       <<	         SHL	           Shift bits left
       >>	         SHR	           Shift bits right*/



    // Explicit type casting operator
    int j;
    float f = 3.84;
    j = (int) f;
    // i = int (f); //same
    cout << f << " -> " << j << endl << endl;

    // sizeof
    j = sizeof (double); // bytes
    cout << j << endl << endl;

    float g;
    g = 5 + 7 % 2; // same as  5 + (7 % 2);
    cout << g << endl << endl;

    // Operator Priority
    // From greatest to smallest priority, C++ operators are evaluated in the following order:
    /*  Level   Precedence group    Operator	        Description	Grouping
        1	    Scope	            ::	                scope qualifier	Left-to-right
        2	    Postfix (unary)	    ++ --	            postfix increment / decrement	Left-to-right
                                    ()	                functional forms
                                    []	                subscript
                                    . ->	            member access
        3	Prefix (unary)	        ++ --	            prefix increment / decrement	Right-to-left
                                    ~ !	                bitwise NOT / logical NOT
                                    + -	                unary prefix
                                    & *	                reference / dereference
                                    new delete	        allocation / deallocation
                                    sizeof	            parameter pack
                                    (type)	            C-style type-casting
        4	Pointer-to-member       .* ->*	            access pointer	Left-to-right
        5	Arithmetic: scaling	    * / %	            multiply, divide, modulo	Left-to-right
        6	Arithmetic: addition    + -	                addition, subtraction	Left-to-right
        7	Bitwise shift	        << >>	            shift left, shift right	Left-to-right
        8	Relational	            < > <= >=	        comparison operators	Left-to-right
        9	Equality	            == !=	            equality / inequality	Left-to-right
        10	And	                    &	                bitwise AND	Left-to-right
        11	Exclusive or	        ^	                bitwise XOR	Left-to-right
        12	Inclusive or	        |	                bitwise OR	Left-to-right
        13	Conjunction	            &&	                logical AND	Left-to-right
        14	Disjunction	            ||	                logical OR	Left-to-right
        15	Assignment-level 	    = *= /= %= += -=
            expressions             >>= <<= &= ^= |=	assignment / compound assignment	Right-to-left
                                    ?:	                conditional operator
        16	Sequencing	            ,	                comma separator	Left-to-right */

}
