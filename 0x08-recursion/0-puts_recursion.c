// Created by Zacharia  on 05/04/2023.
#include "main.h"
/**
 * the _puts_recursion prints a string which is
 * followed by a new line
 * @s: an input string to printing
 * It also returns nothing
 * */
 void _puts_recursion(char *s)
{
     if (*s)
     {
         _putchar(*s);
         _puts_recursion(s + 1);
     } else
         _putchar('\n');
}