#include "main.h"

/**
* if n is lower than 0
 * factorial() returns -1 and indicates an error
 *  the factorial of 0 is 1
 *
 *   the function retuns the facoria of any given number
 *
*/
int factorial( int n)
{
    if(n < 0 )
        return (-1);
    if(n <= 1)
        return(1);
    return (n * factorial(n -1));
}