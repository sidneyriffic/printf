#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include "holberton.h"
char *itos(va_list list)
{
	int digits, digitTest, count, i, mult;
	char *result;

	digits = va_arg(list, int);
	digitTest = digits;
	count = 0;
	mult = 1;
	while (digitTest > 0)
	{
		digitTest /= 10;
		count++;
		if(count > 1)
			mult *=10;
	}
	digitTest = digits;
	return (_numToString(digits, count, mult));
}