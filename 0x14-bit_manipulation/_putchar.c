#include <unistd.h>

/**
 * _putchar is a function that writes the character c to stdout
 * @c: The character to print
 *
 * it returns 1 On success
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}
