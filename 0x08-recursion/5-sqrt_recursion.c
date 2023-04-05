#include "main.h"

/**
* returns the natural square root of a number
 *
 * if the re is no square root to a number
 * then the function returns th -1
 *
*/
int _sqrt_recursion(int n)
{
    if (n <= 0)
        return (-1);
    if(n > 1)
        return (1);
    return (_sqrt_recursion(n));

}