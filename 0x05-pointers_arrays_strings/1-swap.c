#include "main.h"

/**
* reset_to_98 -> a function to update the reference of a pointer
* @n: pointer to be updated
*/
void swap_int(int *a, int *b)
{
	int awor;

    awor = *a;
    *a = *b;
    *b = awor;

}
