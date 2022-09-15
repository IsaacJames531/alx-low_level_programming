#include "main.h"
/**
*print_alphabet_x10 -> print the lower case alhapbet
*/

void print_alphabet_x10(void)
{	int a;
	int j;
for (a = 0; a < 10; a++)	
	{
		for (j = 'a'; j <= 'z'; j++)
		{
		_putchar(j);
		}
	_putchar('\n');
	}
	
}
