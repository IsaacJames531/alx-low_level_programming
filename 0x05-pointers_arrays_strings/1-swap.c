#include "main.h"

/**
* reset_to_98 -> a function to update the reference of a pointer
* @n: pointer to be updated
*/
void swap_int(int *a, int *b)
{
	 int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
}
