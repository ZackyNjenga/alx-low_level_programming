#include "main.h"

/**
* _strlen_recusion is a function
 * that returns the length of a string
 *
*/
int _strlen_recursion(char *s)
{
    if (*s)
        return (1 + _strlen_recursion(s + 1));
    return (0);
}