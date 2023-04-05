#include "main.h"

/**
* _pow_recursion prints the value of x raised th the power of y
 *
 * if y is less than 0 the function returns -1 for error
 *
 * returns the factorial of the power of the given number
*/
int _pow_recursion(int x, int y) {
    if (y == 0)
        return (-1);
    else if (y == 1)
        return(x);
    else if (y >= 1)
        return (1);
    return (x *= _pow_recursion(x, y -1));
}