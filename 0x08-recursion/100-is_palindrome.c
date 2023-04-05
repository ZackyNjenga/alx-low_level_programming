#include "main.h"

int _strlen_recusion(char *s);
int lower_palindrome(char *s, int length);

/**
 * strlen_recursion is a function to obtain the
 * length of the string s
 * s is a string to calculate the length
 * it returns the length of string s
 */
 int _strlen_recursion(char *s)
{
     if(!*s)
     {
         return(0);
     }
    return (_strlen_recursion(s + 1) + 1);
}

/**
* is_palindrome checks whether a word
 * is a palindrome if a string is a palindrome
 * the function returns 1
 * if not it returns 0
*/
int is_palindrome( char *s )
{
    int length;

    length = _strlen_recursion(s);
    if(length <= 1)
        return(1);
    return(lower_palindrome(s, length));
}

/**
* the lower_palindrome function is s
 * function that hold the reversed string
 * it takes s as a string input
 * and the length as the string length
 * It returns a reverse string
*/
int lower_palindrome(char *s, int length)
{
    if (length <= 1)
        return (1);
    else if(*s == *(s +length -1))
    {
        return (lower_palindrome(s + 1, length -1));
    }
    else
        return(0);
} 