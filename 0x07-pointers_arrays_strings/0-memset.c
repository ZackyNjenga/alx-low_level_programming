#include "main.h"

/**
 * _memset is a function that fills memory with constant bytes 
 * @s: this is the location to fill
 * @b: The characte to fill the location with 
 * @n: Number of bytes to fill
 * Return: This returns pointer to locatio filled
*/
char *_memset( char *s, char b, unsigned int n)
{
    char *start = s;

    while(n--)
    {
        *s = b;
        s++;
    }
    return (start);
}