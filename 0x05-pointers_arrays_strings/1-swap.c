#include "main.h"

/**
* 1-swap.c->  a function that swaps the values of two integers.
* @n: pointer to be swapped
*/
void swap_int(int *a, int *b)
{
	int awor;

	awor = *a;
	*a = *b;
	*b = awor;
}
