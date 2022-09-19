#include "main.h"

/**
*swap_int ->  a function that swaps the values of two integers.
*@a: paramenter 1
*@b: paramenter 2
*/
void swap_int(int *a, int *b)
{
	int awor;

	awor = *a;
	*a = *b;
	*b = awor;
}
