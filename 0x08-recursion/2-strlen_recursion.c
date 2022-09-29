/**
 * File: int _strlen_recursion(char *s);
 * Auth: sam
 */

#include "main.h"

/**
 * strlen_recursion(char *s) - Prints length of a strings
 * @s: The string to be printed.
 */
int _strlen_recursion(char *s);
{
if (*s)
{
_strlen_recursion(s + 1);
_putchar(*s);
}
}
