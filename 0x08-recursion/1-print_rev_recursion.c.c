/*
 * File: 0-puts_recursion.c
 * Auth: sam
 */
#include<stdio.h>
/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: The string to be printed.
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
string(*s);
_puts_recursion(s - 1);
}

else
_putchar('\n');
}
