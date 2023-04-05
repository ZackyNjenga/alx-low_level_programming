#include "main.h"
int is_divisible(int number, int divider);
/**
* this functions returns -1 of the integer is prime
 * number otherwise it returns 0
*/
int is_prime_number(int n )
{
    int divider = 2;
    if(n <= 1 )
        return(0);
    if(n <=3)
        return(1);
    return (is_divisible(n, divider));
}
/**
* is divisible checks if the number is divisible
 * number is what we're checking
 * divider is the result of the division
*/
int is_divisible(int number, int div)
{
    if(number % div == 0 )
        return (0);
    if (div == number)
        return (1);
    return (is_divisible(number, div +1));

}