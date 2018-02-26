#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
#include <limits.h>

/*#define HIDECANON*/

int _printf(char *, ...);

int main(void)
{
/*	char numericspecs[7] = "duxXob";
	char formatbuf[100];
	char b = NULL;
	int a;*/
	char arr[2000];
	int i=1999;

	setbuf(stdout, NULL);
	arr[1999] = 0;
	while (i--)
		arr[i] = 'a';
	#ifndef HIDECANON
	_printf("Formatting and min/max tests\n");
	printf("%%s NULL:%s\n", NULL);
	_printf("%%s NULL:%s\n", NULL);
	_printf("%%r NULL:%r\n", NULL);
	_printf("%%R NULL:%R\n", NULL);
	printf("%%S NULL:%S\n", NULL);
	_printf("%%S NULL:%S\n", NULL);
	printf("%%60s:%60s\n", "A helpful string that is 49 chars long.");
	_printf("%%60s:%60s\n", "A helpful string that is 49 chars long.");
	printf("%%-60s:%-60s\n", "A helpful string that is 49 chars long.");
	_printf("%%-60s:%-60s\n", "A helpful string that is 49 chars long.");
	printf("%%.10s:%.10s\n", "A helpful string that is 49 chars long.");
	_printf("%%.10s:%.10s\n", "A helpful string that is 49 chars long.");
	printf("%%-.10s:%-.10s\n", "A helpful string that is 49 chars long.");
	_printf("%%-.10s:%-.10s\n", "A helpful string that is 49 chars long.");
	printf("%%60.10s:%60.10s\n", "A helpful string that is 49 chars long.");
	_printf("%%60.10s:%60.10s\n", "A helpful string that is 49 chars long.");
	printf("%%-60.10s:%-60.10s\n", "A helpful string that is 49 chars long.");
	_printf("%%-60.10s:%-60.10s\n", "A helpful string that is 49 chars long.");
	printf("%%-60.70s:%-60.70s\n", "A helpful string that is 49 chars long.");
	_printf("%%-60.70s:%-60.70s\n", "A helpful string that is 49 chars long.");
	printf("%%60.70s:%60.70s\n", "A helpful string that is 49 chars long.");
	printf("%%60.70s:%60.70s\n", "A helpful string that is 49 chars long.");
	_printf("r:%r\n", "A helpful string that is 49 chars long.");
	_printf("60r:%60r\n", "A helpful string that is 49 chars long.");
	_printf("-60.10r:%-60.10r\n", "A helpful string that is 49 chars long.");
	_printf("R:%R\n", "A helpful string that is 49 chars long.");
	_printf("60R:%60R\n", "A helpful string that is 49 chars long.");
	_printf("-60.10R:%-60.10R\n", "A helpful string that is 49 chars long.");
	_printf("random chars R:%R\n", "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*(){}:\"';,./<>?[]`~-=_+\|");
	_printf("%%s:%s\n", "a newline:\n, a tab:\t, a backspace:\x7f");
	_printf("%%S:%S\n", "a newline:\n, a tab:\t, a backspace:\x7f");
	_printf("%%10S:%10S\n", "a newline:\n, a tab:\t, a backspace:\x7f");
	_printf("%%.11S:%.11S\n", "a newline:\n, a tab:\t, a backspace:\x7f");
	_printf("%%21.11S:%20.11S\n", "a newline:\n, a tab:\t, a backspace:\x7f");
	_printf("%%-10.11S:%-20.11S\n", "a newline:\n, a tab:\t, a backspace:\x7f");
	_printf("%%-20.11S:%-20.11S\n", "a newline:\n, a tab:\t, a backspace:\x7f");
	printf("%s%d\n", "Int 0 d:", 0);
	_printf("%s%d\n", "Int 0 d:", 0);
	printf("%s%.0d\n", "Int 0 .0d:", 0);
	_printf("%s%.0d\n", "Int 0 .0d:", 0);
	printf("%s%0.0d\n", "Int 0 0.0d:", 0);
	_printf("%s%0.0d\n", "Int 0 0.0d:", 0);
	printf("%s%#.0d\n", "Int 0 #.0d:", 0);
	_printf("%s%#.0d\n", "Int 0 #.0d:", 0);
	printf("%s%#0.0d\n", "Int 0 #0.0d:", 0);
	_printf("%s%#0.0d\n", "Int 0 #0.0d:", 0);
	printf("%s%#.1d\n", "Int 0 #.1d:", 0);
	_printf("%s%#.1d\n", "Int 0 #.1d:", 0);
	printf("%s%+d\n", "Int 0 +d:", 0);
	_printf("%s%+d\n", "Int 0 +d:", 0);
	printf("%s%+.0d\n", "Int 0 +.0d:", 0);
	_printf("%s%+.0d\n", "Int 0 +.0d:", 0);
	printf("%s%0+.0d\n", "Int 0 +0.0d:", 0);
	_printf("%s%+0.0d\n", "Int 0 +0.0d:", 0);
	printf("%s%#+.0d\n", "Int 0 #+.0d:", 0);
	_printf("%s%#+.0d\n", "Int 0 #+.0d:", 0);
	printf("%s%#+0.0d\n", "Int 0 #+0.0d:", 0);
	_printf("%s%#+0.0d\n", "Int 0 #+0.0d:", 0);
	printf("%s%#+.1d\n", "Int 0 #+.1d:", 0);
	_printf("%s%#+.1d\n", "Int 0 #+.1d:", 0);
	printf("%s%d\n", "Int max d:", INT_MAX);
	_printf("%s%d\n", "Int max d:", INT_MAX);
	printf("%s%d\n", "Int max + 1 d:", INT_MAX + 1);
	_printf("%s%d\n", "Int max + 1 d:", INT_MAX  + 1);
	printf("%s%30d\n", "Int max 30d:", INT_MAX);
	_printf("%s%30d\n", "Int max 30d:", INT_MAX);
	printf("%s%-30d\n", "Int max -30d:", INT_MAX);
	_printf("%s%-30d\n", "Int max -30d:", INT_MAX);
	printf("%s%-030d\n", "Int max -030d:", INT_MAX);
	_printf("%s%-030d\n", "Int max -030d:", INT_MAX);
	printf("%s%030d\n", "Int max 030d:", INT_MAX);
	_printf("%s%030d\n", "Int max 030d:", INT_MAX);
	printf("%s%#030d\n", "Int max #030d:", INT_MAX);
	_printf("%s%#030d\n", "Int max #030d:", INT_MAX);
	printf("%s%#.0d\n", "Int max #.0d:", INT_MAX);
	_printf("%s%#.0d\n", "Int max #.0d:", INT_MAX);
	printf("%s%#.20d\n", "Int max #.20d:", INT_MAX);
	_printf("%s%#.20d\n", "Int max #.20d:", INT_MAX);
	printf("%s%#-.20d\n", "Int max #-.20d:", INT_MAX);
	_printf("%s%#-.20d\n", "Int max #-.20d:", INT_MAX);
	printf("%s%#30.20d\n", "Int max #30.20d:", INT_MAX);
	_printf("%s%#30.20d\n", "Int max #30.20d:", INT_MAX);
	printf("%s%-#30.20d\n", "Int max -#30.20d:", INT_MAX);
	_printf("%s%-#30.20d\n", "Int max -#30.20d:", INT_MAX);
	printf("%s%-#020.20d\n", "Int max -#020.20d:", INT_MAX);
	_printf("%s%-#020.20d\n", "Int max -#020.20d:", INT_MAX);
	printf("%s%-#020.20d\n", "Int max -#020.20d:", INT_MAX);
	_printf("%s%-#020.20d\n", "Int max -#020.20d:", INT_MAX);
	printf("%s%#20.30d\n", "Int max #20.30d:", INT_MAX);
	_printf("%s%#20.30d\n", "Int max #20.30d:", INT_MAX);
	printf("%s%#020.30d\n", "Int max #020.30d:", INT_MAX);
	_printf("%s%#020.30d\n", "Int max #020.30d:", INT_MAX);
	printf("%s%-#20.30d\n", "Int max -#20.30d:", INT_MAX);
	_printf("%s%-#20.30d\n", "Int max -#20.30d:", INT_MAX);
	printf("%s%-#020.30d\n", "Int max -#020.30d:", INT_MAX);
	_printf("%s%-#020.30d\n", "Int max -#020.30d:", INT_MAX);
	printf("%s%#+20.30d\n", "Int max #+20.30d:", INT_MAX);
	_printf("%s%#+20.30d\n", "Int max #+20.30d:", INT_MAX);
	printf("%s%#+020.30d\n", "Int max #+020.30d:", INT_MAX);
	_printf("%s%#+020.30d\n", "Int max #+020.30d:", INT_MAX);
	printf("%s%-#+20.30d\n", "Int max -#+20.30d:", INT_MAX);
	_printf("%s%-#+20.30d\n", "Int max -#+20.30d:", INT_MAX);
	printf("%s%-#+020.30d\n", "Int max -#+020.30d:", INT_MAX);
	_printf("%s%-#+020.30d\n", "Int max -#+020.30d:", INT_MAX);
	printf("%s%#20.5d\n", "Int max #20.5d:", INT_MAX);
	_printf("%s%#20.5d\n", "Int max #20.5d:", INT_MAX);
	printf("%s%#020.5d\n", "Int max #020.5d:", INT_MAX);
	_printf("%s%#020.5d\n", "Int max #020.5d:", INT_MAX);
	printf("%s%#+20.5d\n", "Int max #+20.5d:", INT_MAX);
	_printf("%s%#+20.5d\n", "Int max #+20.5d:", INT_MAX);
	printf("%s%# 020.5d\n", "Int max # 020.5d:", INT_MAX);
	_printf("%s%# 020.5d\n", "Int max # 020.5d:", INT_MAX);
	printf("%s%#+ 20.5d\n", "Int max #+ 20.5d:", INT_MAX);
	_printf("%s%#+ 20.5d\n", "Int max #+ 20.5d:", INT_MAX);
	printf("%s%#+ 020.5d\n", "Int max #+ 020.5d:", INT_MAX);
	_printf("%s%#+ 020.5d\n", "Int max #+ 020.5d:", INT_MAX);
	printf("%s%-#20.5d\n", "Int max -#20.5d:", INT_MAX);
	_printf("%s%-#20.5d\n", "Int max -#20.5d:", INT_MAX);
	printf("%s%-#020.5d\n", "Int max -#020.5d:", INT_MAX);
	_printf("%s%-#020.5d\n", "Int max -#020.5d:", INT_MAX);
	printf("%s%-#+020.5d\n", "Int max -#020.5d:", INT_MAX);
	_printf("%s%-#+020.5d\n", "Int max -#020.5d:", INT_MAX);
	printf("%s%-# 020.5d\n", "Int max -# 20.5d:", INT_MAX);
	_printf("%s%-# 020.5d\n", "Int max -# 20.5d:", INT_MAX);
	printf("%s%-#+ 020.5d\n", "Int max -#+ 20.5d:", INT_MAX);
	_printf("%s%-#+ 020.5d\n", "Int max -#+ 20.5d:", INT_MAX);
	printf("%s%#20.9d\n", "Int max #20.9d:", INT_MAX);
	_printf("%s%#20.9d\n", "Int max #20.9d:", INT_MAX);
	printf("%s%#020.9d\n", "Int max #020.9d:", INT_MAX);
	_printf("%s%#020.9d\n", "Int max #020.9d:", INT_MAX);
	printf("%s%#+20.9d\n", "Int max #+20.9d:", INT_MAX);
	_printf("%s%#+20.9d\n", "Int max #+20.9d:", INT_MAX);
	printf("%s%# 020.9d\n", "Int max # 020.9d:", INT_MAX);
	_printf("%s%# 020.9d\n", "Int max # 020.9d:", INT_MAX);
	printf("%s%#+ 20.9d\n", "Int max #+ 20.9d:", INT_MAX);
	_printf("%s%#+ 20.9d\n", "Int max #+ 20.9d:", INT_MAX);
	printf("%s%#+ 020.9d\n", "Int max #+ 020.9d:", INT_MAX);
	_printf("%s%#+ 020.9d\n", "Int max #+ 020.9d:", INT_MAX);
	printf("%s%-#+020.9d\n", "Int max -#+20.9d:", INT_MAX);
	_printf("%s%-#+020.9d\n", "Int max -#+20.9d:", INT_MAX);
	printf("%s%-# 020.9d\n", "Int max -# 20.9d:", INT_MAX);
	_printf("%s%-# 020.9d\n", "Int max -# 20.9d:", INT_MAX);
	printf("%s%-#+ 020.9d\n", "Int max -#+ 20.9d:", INT_MAX);
	_printf("%s%-#+ 020.9d\n", "Int max -#+ 20.9d:", INT_MAX);
	printf("%s%#20.10d\n", "Int max #20.10d:", INT_MAX);
	_printf("%s%#20.10d\n", "Int max #20.10d:", INT_MAX);
	printf("%s%#020.10d\n", "Int max #020.10d:", INT_MAX);
	_printf("%s%#020.10d\n", "Int max #020.10d:", INT_MAX);
	printf("%s%#+20.10d\n", "Int max #+20.10d:", INT_MAX);
	_printf("%s%#+20.10d\n", "Int max #+20.10d:", INT_MAX);
	printf("%s%# 020.10d\n", "Int max # 020.10d:", INT_MAX);
	_printf("%s%# 020.10d\n", "Int max # 020.10d:", INT_MAX);
	printf("%s%#+ 20.10d\n", "Int max #+ 20.10d:", INT_MAX);
	_printf("%s%#+ 20.10d\n", "Int max #+ 20.10d:", INT_MAX);
	printf("%s%#+ 020.10d\n", "Int max #+ 020.10d:", INT_MAX);
	_printf("%s%#+ 020.10d\n", "Int max #+ 020.10d:", INT_MAX);
	printf("%s%-#+020.10d\n", "Int max -#+20.10d:", INT_MAX);
	_printf("%s%-#+020.10d\n", "Int max -#+20.10d:", INT_MAX);
	printf("%s%-# 020.10d\n", "Int max -# 20.10d:", INT_MAX);
	_printf("%s%-# 020.10d\n", "Int max -# 20.10d:", INT_MAX);
	printf("%s%-#+ 020.10d\n", "Int max -#+ 20.10d:", INT_MAX);
	_printf("%s%-#+ 020.10d\n", "Int max -#+ 20.10d:", INT_MAX);
	printf("%s%#20.11d\n", "Int max #20.11d:", INT_MAX);
	_printf("%s%#20.11d\n", "Int max #20.11d:", INT_MAX);
	printf("%s%#020.11d\n", "Int max #020.11d:", INT_MAX);
	_printf("%s%#020.11d\n", "Int max #020.11d:", INT_MAX);
	printf("%s%#+20.11d\n", "Int max #+20.11d:", INT_MAX);
	_printf("%s%#+20.11d\n", "Int max #+20.11d:", INT_MAX);
	printf("%s%# 020.11d\n", "Int max # 020.11d:", INT_MAX);
	_printf("%s%# 020.11d\n", "Int max # 020.11d:", INT_MAX);
	printf("%s%#+ 20.11d\n", "Int max #+ 20.11d:", INT_MAX);
	_printf("%s%#+ 20.11d\n", "Int max #+ 20.11d:", INT_MAX);
	printf("%s%#+ 020.11d\n", "Int max #+ 020.11d:", INT_MAX);
	_printf("%s%#+ 020.11d\n", "Int max #+ 020.11d:", INT_MAX);
	printf("%s%-#+020.11d\n", "Int max -#+020.11d:", INT_MAX);
	_printf("%s%-#+020.11d\n", "Int max -#+020.11d:", INT_MAX);
	printf("%s%-# 020.11d\n", "Int max -# 020.11d:", INT_MAX);
	_printf("%s%-# 020.11d\n", "Int max -# 020.11d:", INT_MAX);
	printf("%s%-#+ 020.11d\n", "Int max -#+ 020.11d:", INT_MAX);
	_printf("%s%-#+ 020.11d\n", "Int max -#+ 020.11d:", INT_MAX);
	printf("%s%#20.12d\n", "Int max #20.12d:", INT_MAX);
	_printf("%s%#20.12d\n", "Int max #20.12d:", INT_MAX);
	printf("%s%#020.12d\n", "Int max #020.12d:", INT_MAX);
	_printf("%s%#020.12d\n", "Int max #020.12d:", INT_MAX);
	printf("%s%#+20.12d\n", "Int max #+20.12d:", INT_MAX);
	_printf("%s%#+20.12d\n", "Int max #+20.12d:", INT_MAX);
	printf("%s%# 020.12d\n", "Int max # 020.12d:", INT_MAX);
	_printf("%s%# 020.12d\n", "Int max # 020.12d:", INT_MAX);
	printf("%s%#+ 20.12d\n", "Int max #+ 20.12d:", INT_MAX);
	_printf("%s%#+ 20.12d\n", "Int max #+ 20.12d:", INT_MAX);
	printf("%s%#+ 020.12d\n", "Int max #+ 020.12d:", INT_MAX);
	_printf("%s%#+ 020.12d\n", "Int max #+ 020.12d:", INT_MAX);
	printf("%s%-#+020.12d\n", "Int max -#+020.12d:", INT_MAX);
	_printf("%s%-#+020.12d\n", "Int max -#+020.12d:", INT_MAX);
	printf("%s%-# 020.12d\n", "Int max -# 020.12d:", INT_MAX);
	_printf("%s%-# 020.12d\n", "Int max -# 020.12d:", INT_MAX);
	printf("%s%-#+ 020.12d\n", "Int max -#+ 020.12d:", INT_MAX);
	_printf("%s%-#+ 020.12d\n", "Int max -#+ 020.12d:", INT_MAX);
	printf("%s%#30.20d\n", "Int max #30.20d:", INT_MAX);
	_printf("%s%#30.20d\n", "Int max #30.20d:", INT_MAX);
	printf("%s%#030.20d\n", "Int max #030.20d:", INT_MAX);
	_printf("%s%#030.20d\n", "Int max #030.20d:", INT_MAX);
	printf("%s%#+30.20d\n", "Int max #+30.20d:", INT_MAX);
	_printf("%s%#+30.20d\n", "Int max #+30.20d:", INT_MAX);
	printf("%s%# 030.20d\n", "Int max # 030.20d:", INT_MAX);
	_printf("%s%# 030.20d\n", "Int max # 030.20d:", INT_MAX);
	printf("%s%-#+030.20d\n", "Int max -#+030.20d:", INT_MAX);
	_printf("%s%-#+030.20d\n", "Int max -#+030.20d:", INT_MAX);
	printf("%s%-# 030.20d\n", "Int max -# 030.20d:", INT_MAX);
	_printf("%s%-# 030.20d\n", "Int max -# 030.20d:", INT_MAX);
	printf("%s%d\n", "Int min d:", INT_MIN);
	_printf("%s%d\n", "Int min d:", INT_MIN);
	printf("%s%d\n", "Int min - 1 d:", INT_MIN - 1);
	_printf("%s%d\n", "Int min - 1 d:", INT_MIN - 1);
	printf("%s%+ d\n", "Int min +spaced:", INT_MIN);
	_printf("%s%+ d\n", "Int min +spaced:", INT_MIN);
	printf("%s%30d\n", "Int min 30d:", INT_MIN);
	_printf("%s%30d\n", "Int min 30d:", INT_MIN);
	printf("%s%-30d\n", "Int min -30d:", INT_MIN);
	_printf("%s%-30d\n", "Int min -30d:", INT_MIN);
	printf("%s%-030d\n", "Int min -030d:", INT_MIN);
	_printf("%s%-030d\n", "Int min -030d:", INT_MIN);
	printf("%s%030d\n", "Int min 030d:", INT_MIN);
	_printf("%s%030d\n", "Int min 030d:", INT_MIN);
	printf("%s%#030d\n", "Int min #030d:", INT_MIN);
	_printf("%s%#030d\n", "Int min #030d:", INT_MIN);
	printf("%s%#.0d\n", "Int min #.0d:", INT_MIN);
	_printf("%s%#.0d\n", "Int min #.0d:", INT_MIN);
	printf("%s%#.20d\n", "Int min #.20d:", INT_MIN);
	_printf("%s%#.20d\n", "Int min #.20d:", INT_MIN);
	printf("%s%#-.20d\n", "Int min #-.20d:", INT_MIN);
	_printf("%s%#-.20d\n", "Int min #-.20d:", INT_MIN);
	printf("%s%#30.20d\n", "Int min #30.20d:", INT_MIN);
	_printf("%s%#30.20d\n", "Int min #30.20d:", INT_MIN);
	printf("%s%-#30.20d\n", "Int min -#30.20d:", INT_MIN);
	_printf("%s%-#30.20d\n", "Int min -#30.20d:", INT_MIN);
	printf("%s%-#020.20d\n", "Int min -#020.20d:", INT_MIN);
	_printf("%s%-#020.20d\n", "Int min -#020.20d:", INT_MIN);
	printf("%s%#20.30d\n", "Int min #20.30d:", INT_MIN);
	_printf("%s%#20.30d\n", "Int min #20.30d:", INT_MIN);
	printf("%s%#020.30d\n", "Int min #020.30d:", INT_MIN);
	_printf("%s%#020.30d\n", "Int min #020.30d:", INT_MIN);
	printf("%s%-#20.30d\n", "Int min -#20.30d:", INT_MIN);
	_printf("%s%-#20.30d\n", "Int min -#20.30d:", INT_MIN);
	printf("%s%-#020.30d\n", "Int min -#020.30d:", INT_MIN);
	_printf("%s%-#020.30d\n", "Int min -#020.30d:", INT_MIN);
	printf("%s%#20.5d\n", "Int min #20.5d:", INT_MIN);
	_printf("%s%#20.5d\n", "Int min #20.5d:", INT_MIN);
	printf("%s%#020.5d\n", "Int min #020.5d:", INT_MIN);
	_printf("%s%#020.5d\n", "Int min #020.5d:", INT_MIN);
	printf("%s%-#20.5d\n", "Int min -#20.5d:", INT_MIN);
	_printf("%s%-#20.5d\n", "Int min -#20.5d:", INT_MIN);
	printf("%s%-#020.5d\n", "Int min -#020.5d:", INT_MIN);
	_printf("%s%-#020.5d\n", "Int min -#020.5d:", INT_MIN);
	printf("%s%#30.20d\n", "Int min #30.20d:", INT_MIN);
	_printf("%s%#30.20d\n", "Int min #30.20d:", INT_MIN);
	printf("%s%#030.20d\n", "Int min #030.20d:", INT_MIN);
	_printf("%s%#030.20d\n", "Int min #030.20d:", INT_MIN);
	printf("%s%#+30.20d\n", "Int min #+30.20d:", INT_MIN);
	_printf("%s%#+30.20d\n", "Int min #+30.20d:", INT_MIN);
	printf("%s%# 030.20d\n", "Int min # 030.20d:", INT_MIN);
	_printf("%s%# 030.20d\n", "Int min # 030.20d:", INT_MIN);
	printf("%s%-#+030.20d\n", "Int min -#+030.20d:", INT_MIN);
	_printf("%s%-#+030.20d\n", "Int min -#+030.20d:", INT_MIN);
	printf("%s%-# 030.20d\n", "Int min -# 030.20d:", INT_MIN);
	_printf("%s%-# 030.20d\n", "Int min -# 030.20d:", INT_MIN);
	printf("%s%#30.11d\n", "Int min #30.11d:", INT_MIN);
	_printf("%s%#30.11d\n", "Int min #30.11d:", INT_MIN);
	printf("%s%#030.11d\n", "Int min #030.11d:", INT_MIN);
	_printf("%s%#030.11d\n", "Int min #030.11d:", INT_MIN);
	printf("%s%-#+030.11d\n", "Int min -#+030.11d:", INT_MIN);
	_printf("%s%-#+030.11d\n", "Int min -#+030.11d:", INT_MIN);
	printf("%s%u\n", "UInt max u:", UINT_MAX);
	_printf("%s%u\n", "UInt max u:", UINT_MAX);
	printf("%s%u\n", "UInt max + 1 u:", UINT_MAX + 1);
	_printf("%s%u\n", "UInt max + 1 u:", UINT_MAX + 1);
	printf("%s%u\n", "UInt -1 u:", -1);
	_printf("%s%u\n", "UInt -1 u:", -1);
	printf("%s% +u\n", "UInt max space+u:", UINT_MAX);
	_printf("%s% +u\n", "UInt max space+u:", UINT_MAX);
	printf("%s%30u\n", "UInt max 30u:", UINT_MAX);
	_printf("%s%30u\n", "UInt max 30u:", UINT_MAX);
	printf("%s%-30u\n", "UInt max -30u:", UINT_MAX);
	_printf("%s%-30u\n", "UInt max -30u:", UINT_MAX);
	printf("%s%-030u\n", "UInt max -030u:", UINT_MAX);
	_printf("%s%-030u\n", "UInt max -030u:", UINT_MAX);
	printf("%s%030u\n", "UInt max 030u:", UINT_MAX);
	_printf("%s%030u\n", "UInt max 030u:", UINT_MAX);
	printf("%s%#030u\n", "UInt max #030u:", UINT_MAX);
	_printf("%s%#030u\n", "UInt max #030u:", UINT_MAX);
	printf("%s%#.0u\n", "UInt max #.0u:", UINT_MAX);
	_printf("%s%#.0u\n", "UInt max #.0u:", UINT_MAX);
	printf("%s%u\n", "UInt max u:", UINT_MAX);
	_printf("%s%u\n", "UInt max u:", UINT_MAX);
	printf("%s%30u\n", "UInt max 30u:", UINT_MAX);
	_printf("%s%30u\n", "UInt max 30u:", UINT_MAX);
	printf("%s%-30u\n", "UInt max -30u:", UINT_MAX);
	_printf("%s%-30u\n", "UInt max -30u:", UINT_MAX);
	printf("%s%-030u\n", "UInt max -030u:", UINT_MAX);
	_printf("%s%-030u\n", "UInt max -030u:", UINT_MAX);
	printf("%s%030u\n", "UInt max 030u:", UINT_MAX);
	_printf("%s%030u\n", "UInt max 030u:", UINT_MAX);
	printf("%s%#030u\n", "UInt max #030u:", UINT_MAX);
	_printf("%s%#030u\n", "UInt max #030u:", UINT_MAX);
	printf("%s%#.0u\n", "UInt max #.0u:", UINT_MAX);
	_printf("%s%#.0u\n", "UInt max #.0u:", UINT_MAX);
	printf("%s%#.0u\n", "UInt 0 #.0u:", 0);
	_printf("%s%#.0u\n", "UInt 0 #.0u:", 0);
	printf("%s%#0.0u\n", "UInt 0 #0.0u:", 0);
	_printf("%s%#0.0u\n", "UInt 0 #0.0u:", 0);
	printf("%s%.0u\n", "UInt 0 .0u:", 0);
	_printf("%s%.0u\n", "UInt 0 .0u:", 0);
	printf("%s%+u\n", "UInt 0 +u:", 0);
	_printf("%s%+u\n", "UInt 0 +u:", 0);
	printf("%s% u\n", "UInt 0 spaceu:", 0);
	_printf("%s% u\n", "UInt 0 spaceu:", 0);
	printf("%s%#.20u\n", "UInt max #.20u:", UINT_MAX);
	_printf("%s%#.20u\n", "UInt max #.20u:", UINT_MAX);
	printf("%s%#-.20u\n", "UInt max #-.20u:", UINT_MAX);
	_printf("%s%#-.20u\n", "UInt max #-.20u:", UINT_MAX);
	printf("%s%#30.20u\n", "UInt max #30.20u:", UINT_MAX);
	_printf("%s%#30.20u\n", "UInt max #30.20u:", UINT_MAX);
	printf("%s%-#30.20u\n", "UInt max -#30.20u:", UINT_MAX);
	_printf("%s%-#30.20u\n", "UInt max -#30.20u:", UINT_MAX);
	printf("%s%-#030.20u\n", "UInt max -#030.20u:", UINT_MAX);
	_printf("%s%-#030.20u\n", "UInt max -#030.20u:", UINT_MAX);
	printf("%s%-#020.20u\n", "UInt max -#020.20u:", UINT_MAX);
	_printf("%s%-#020.20u\n", "UInt max -#020.20u:", UINT_MAX);
	_printf("%s%b\n", "UInt max b:", UINT_MAX);
	_printf("%s%b\n", "UInt max + 1 b:", UINT_MAX + 1);
	_printf("%s%40b\n", "UInt max 40b:", UINT_MAX);
	_printf("%s%40b\n", "UInt max .20b:", UINT_MAX);
	_printf("%s%.0b\n", "UInt -1 .0b:", -1);
	_printf("%s%.0b\n", "UInt 0 .0b:", 0);
	_printf("%s%0.0b\n", "UInt 0 0.0b:", 0);
	_printf("%s%#.0b\n", "UInt 0 #.0b:", 0);
	_printf("%s%#0.0b\n", "UInt 0 #0.0b:", 0);
	_printf("%s%#40b\n", "UInt max #40b:", UINT_MAX);
	_printf("%s%-40b\n", "UInt max -40b:", UINT_MAX);
	_printf("%s%040b\n", "UInt max 040b:", UINT_MAX);
	_printf("%s%0.40b\n", "UInt max 0.40b:", UINT_MAX);
	_printf("%s%040.20b\n", "UInt max 040.20b:", UINT_MAX);
	_printf("%s%040.40b\n", "UInt max 040.40b:", UINT_MAX);
	_printf("%s%040.60b\n", "UInt max 040.60b:", UINT_MAX);
	_printf("%s%-#40b\n", "UInt max -#40b:", UINT_MAX);
	_printf("%s%-0#40b\n", "UInt max -0#40b:", UINT_MAX);
	_printf("%s%-0#40.20b\n", "UInt max -0#40.20b:", UINT_MAX);
	printf("%s%x\n", "UInt max x:", UINT_MAX);
	_printf("%s%x\n", "UInt max x:", UINT_MAX);
	printf("%s%30x\n", "UInt max 30x:", UINT_MAX);
	_printf("%s%30x\n", "UInt max 30x:", UINT_MAX);
	printf("%s%-30x\n", "UInt max -30x:", UINT_MAX);
	_printf("%s%-30x\n", "UInt max -30x:", UINT_MAX);
	printf("%s%-030x\n", "UInt max -030x:", UINT_MAX);
	_printf("%s%-030x\n", "UInt max -030x:", UINT_MAX);
	printf("%s%030x\n", "UInt max 030x:", UINT_MAX);
	_printf("%s%030x\n", "UInt max 030x:", UINT_MAX);
	printf("%s%#030x\n", "UInt max #030x:", UINT_MAX);
	_printf("%s%#030x\n", "UInt max #030x:", UINT_MAX);
	printf("%s%#.0x\n", "UInt max #.0x:", UINT_MAX);
	_printf("%s%#.0x\n", "UInt max #.0x:", UINT_MAX);
	printf("%s%#0.0x\n", "UInt max #0.0x:", UINT_MAX);
	_printf("%s%#0.0x\n", "UInt max #0.0x:", UINT_MAX);
	printf("%s%.0x\n", "UInt 0 .0x:", 0);
	_printf("%s%.0x\n", "UInt 0 .0x:", 0);
	printf("%s%0.0x\n", "UInt 0 0.0x:", 0);
	_printf("%s%0.0x\n", "UInt 0 0.0x:", 0);
	printf("%s%x\n", "UUInt 0 x:", 0);
	_printf("%s%x\n", "UUInt 0 x:", 0);
	printf("%s%#.0x\n", "UInt 0 #.0x:", 0);
	_printf("%s%#.0x\n", "UInt 0 #.0x:", 0);
	printf("%s%#.20x\n", "UInt max #.20x:", UINT_MAX);
	_printf("%s%#.20x\n", "UInt max #.20x:", UINT_MAX);
	printf("%s%#-.20x\n", "UInt max #-.20x:", UINT_MAX);
	_printf("%s%#-.20x\n", "UInt max #-.20x:", UINT_MAX);
	printf("%s%#30.20x\n", "UInt max #30.20x:", UINT_MAX);
	_printf("%s%#30.20x\n", "UInt max #30.20x:", UINT_MAX);
	printf("%s%-#30.20x\n", "UInt max -#30.20x:", UINT_MAX);
	_printf("%s%-#30.20x\n", "UInt max -#30.20x:", UINT_MAX);
	printf("%s%-#020.20x\n", "UInt max -#020.20x:", UINT_MAX);
	_printf("%s%-#020.20x\n", "UInt max -#020.20x:", UINT_MAX);
	printf("%s%-#010.7x\n", "UInt max -#010.7x:", UINT_MAX);
	_printf("%s%-#010.7x\n", "UInt max -#010.7x:", UINT_MAX);
	printf("%s%-#010.8x\n", "UInt max -#010.8x:", UINT_MAX);
	_printf("%s%-#010.8x\n", "UInt max -#010.8x:", UINT_MAX);
	printf("%s%-#010.9x\n", "UInt max -#010.9x:", UINT_MAX);
	_printf("%s%-#010.9x\n", "UInt max -#010.9x:", UINT_MAX);
	printf("%s%-#010.10x\n", "UInt max -#010.10x:", UINT_MAX);
	_printf("%s%-#010.10x\n", "UInt max -#010.10x:", UINT_MAX);
	printf("%s%-#010.11x\n", "UInt max -#010.11x:", UINT_MAX);
	_printf("%s%-#010.11x\n", "UInt max -#010.11x:", UINT_MAX);
	printf("%s%-#011.7x\n", "UInt max -#011.7x:", UINT_MAX);
	_printf("%s%-#011.7x\n", "UInt max -#011.7x:", UINT_MAX);
	printf("%s%-#012.7x\n", "UInt max -#012.7x:", UINT_MAX);
	_printf("%s%-#012.7x\n", "UInt max -#012.7x:", UINT_MAX);
	printf("%s%-#013.7x\n", "UInt max -#013.7x:", UINT_MAX);
	_printf("%s%-#013.7x\n", "UInt max -#013.7x:", UINT_MAX);
	printf("%s%#010.7x\n", "UInt max #010.7x:", UINT_MAX);
	_printf("%s%#010.7x\n", "UInt max #010.7x:", UINT_MAX);
	printf("%s%#010.8x\n", "UInt max #010.8x:", UINT_MAX);
	_printf("%s%#010.8x\n", "UInt max #010.8x:", UINT_MAX);
	printf("%s%#010.9x\n", "UInt max #010.9x:", UINT_MAX);
	_printf("%s%#010.9x\n", "UInt max #010.9x:", UINT_MAX);
	printf("%s%#010.10x\n", "UInt max #010.10x:", UINT_MAX);
	_printf("%s%#010.10x\n", "UInt max #010.10x:", UINT_MAX);
	printf("%s%#010.11x\n", "UInt max #010.11x:", UINT_MAX);
	_printf("%s%#010.11x\n", "UInt max #010.11x:", UINT_MAX);
	printf("%s%#011.7x\n", "UInt max #011.7x:", UINT_MAX);
	_printf("%s%#011.7x\n", "UInt max #011.7x:", UINT_MAX);
	printf("%s%#012.7x\n", "UInt max #012.7x:", UINT_MAX);
	_printf("%s%#012.7x\n", "UInt max #012.7x:", UINT_MAX);
	printf("%s%#013.7x\n", "UInt max #013.7x:", UINT_MAX);
	_printf("%s%#013.7x\n", "UInt max #013.7x:", UINT_MAX);
	printf("%s%#10.7x\n", "UInt max #10.7x:", UINT_MAX);
	_printf("%s%#10.7x\n", "UInt max #10.7x:", UINT_MAX);
	printf("%s%#10.8x\n", "UInt max #10.8x:", UINT_MAX);
	_printf("%s%#10.8x\n", "UInt max #10.8x:", UINT_MAX);
	printf("%s%#10.9x\n", "UInt max #10.9x:", UINT_MAX);
	_printf("%s%#10.9x\n", "UInt max #10.9x:", UINT_MAX);
	printf("%s%#10.10x\n", "UInt max #10.10x:", UINT_MAX);
	_printf("%s%#10.10x\n", "UInt max #10.10x:", UINT_MAX);
	printf("%s%#10.11x\n", "UInt max #10.11x:", UINT_MAX);
	_printf("%s%#10.11x\n", "UInt max #10.11x:", UINT_MAX);
	printf("%s%#11.7x\n", "UInt max #11.7x:", UINT_MAX);
	_printf("%s%#11.7x\n", "UInt max #11.7x:", UINT_MAX);
	printf("%s%#12.7x\n", "UInt max #12.7x:", UINT_MAX);
	_printf("%s%#12.7x\n", "UInt max #12.7x:", UINT_MAX);
	printf("%s%#13.7x\n", "UInt max #13.7x:", UINT_MAX);
	_printf("%s%#13.7x\n", "UInt max #13.7x:", UINT_MAX);
	printf("%s%X\n", "UInt max X:", UINT_MAX);
	_printf("%s%X\n", "UInt max X:", UINT_MAX);
	printf("%s%30X\n", "UInt max 30X:", UINT_MAX);
	_printf("%s%30X\n", "UInt max 30X:", UINT_MAX);
	printf("%s%-30X\n", "UInt max -30X:", UINT_MAX);
	_printf("%s%-30X\n", "UInt max -30X:", UINT_MAX);
	printf("%s%-030X\n", "UInt max -030X:", UINT_MAX);
	_printf("%s%-030X\n", "UInt max -030X:", UINT_MAX);
	printf("%s%030X\n", "UInt max 030X:", UINT_MAX);
	_printf("%s%030X\n", "UInt max 030X:", UINT_MAX);
	printf("%s%#030X\n", "UInt max #030X:", UINT_MAX);
	_printf("%s%#030X\n", "UInt max #030X:", UINT_MAX);
	printf("%s%#.0X\n", "UInt max #.0X:", UINT_MAX);
	_printf("%s%#.0X\n", "UInt max #.0X:", UINT_MAX);
	printf("%s%.0X\n", "UInt 0 .0X:", 0);
	_printf("%s%.0X\n", "UInt 0 .0X:", 0);
	printf("%s%0.0X\n", "UInt 0 0.0X:", 0);
	_printf("%s%0.0X\n", "UInt 0 0.0X:", 0);
	printf("%s%X\n", "UUInt 0 X:", 0);
	_printf("%s%X\n", "UUInt 0 X:", 0);
	printf("%s%#.0X\n", "UInt 0 #.0X:", 0);
	_printf("%s%#.0X\n", "UInt 0 #.0X:", 0);
	printf("%s%#0.0X\n", "UInt 0 #0.0X:", 0);
	_printf("%s%#0.0X\n", "UInt 0 #0.0X:", 0);
	printf("%s%#.20X\n", "UInt max #.20X:", UINT_MAX);
	_printf("%s%#.20X\n", "UInt max #.20X:", UINT_MAX);
	printf("%s%#-.20X\n", "UInt max #-.20X:", UINT_MAX);
	_printf("%s%#-.20X\n", "UInt max #-.20X:", UINT_MAX);
	printf("%s%#30.20X\n", "UInt max #30.20X:", UINT_MAX);
	_printf("%s%#30.20X\n", "UInt max #30.20X:", UINT_MAX);
	printf("%s%-#30.20X\n", "UInt max -#30.20X:", UINT_MAX);
	_printf("%s%-#30.20X\n", "UInt max -#30.20X:", UINT_MAX);
	printf("%s%-#030.20X\n", "UInt max -#030.20X:", UINT_MAX);
	_printf("%s%-#030.20X\n", "UInt max -#030.20X:", UINT_MAX);
	printf("%s%-#020.20X\n", "UInt max -#020.20X:", UINT_MAX);
	_printf("%s%-#020.20X\n", "UInt max -#020.20X:", UINT_MAX);
	printf("%s%o\n", "UInt max o:", UINT_MAX);
	_printf("%s%o\n", "UInt max o:", UINT_MAX);
	printf("%s%30o\n", "UInt max 30o:", UINT_MAX);
	_printf("%s%30o\n", "UInt max 30o:", UINT_MAX);
	printf("%s%-30o\n", "UInt max -30o:", UINT_MAX);
	_printf("%s%-30o\n", "UInt max -30o:", UINT_MAX);
	printf("%s%-030o\n", "UInt max -030o:", UINT_MAX);
	_printf("%s%-030o\n", "UInt max -030o:", UINT_MAX);
	printf("%s%030o\n", "UInt max 030o:", UINT_MAX);
	_printf("%s%030o\n", "UInt max 030o:", UINT_MAX);
	printf("%s%#030o\n", "UInt max #030o:", UINT_MAX);
	_printf("%s%#030o\n", "UInt max #030o:", UINT_MAX);
	printf("%s%#.0o\n", "UInt max #.0o:", UINT_MAX);
	_printf("%s%#.0o\n", "UInt max #.0o:", UINT_MAX);
	printf("%s%#0.0o\n", "UInt max #0.0o:", UINT_MAX);
	_printf("%s%#0.0o\n", "UInt max #0.0o:", UINT_MAX);
	printf("%s%.0o\n", "UInt 0 .0o:", 0);
	_printf("%s%.0o\n", "UInt 0 .0o:", 0);
	printf("%s%+.0o\n", "UInt 0 +.0o:", 0);
	_printf("%s%+.0o\n", "UInt 0 +.0o:", 0);
	printf("%s%0.0o\n", "UInt 0 0.0o:", 0);
	_printf("%s%0.0o\n", "UInt 0 0.0o:", 0);
	printf("%s%o\n", "UInt 0 o:", 0);
	_printf("%s%o\n", "UInt 0 o:", 0);
	printf("%s%+o\n", "UInt 0 +o:", 0);
	_printf("%s%+o\n", "UInt 0 +o:", 0);
	printf("%s%#30o\n", "UInt 0 #30o:", 0);
	printf("%s%#30o\n", "UInt 0 #30o:", 0);
	printf("%s%#.0o\n", "UInt 0 #.0o:", 0);
	_printf("%s%#.0o\n", "UInt 0 #.0o:", 0);
	printf("%s%#.20o\n", "UInt max #.20o:", UINT_MAX);
	_printf("%s%#.20o\n", "UInt max #.20o:", UINT_MAX);
	printf("%s%#-.20o\n", "UInt max #-.20o:", UINT_MAX);
	_printf("%s%#-.20o\n", "UInt max #-.20o:", UINT_MAX);
	printf("%s%#30.20o\n", "UInt max #30.20o:", UINT_MAX);
	_printf("%s%#30.20o\n", "UInt max #30.20o:", UINT_MAX);
	printf("%s%-#30.20o\n", "UInt max -#30.20o:", UINT_MAX);
	_printf("%s%-#30.20o\n", "UInt max -#30.20o:", UINT_MAX);
	printf("%s%-#030.20o\n", "UInt max -#030.20o:", UINT_MAX);
	_printf("%s%-#030.20o\n", "UInt max -#030.20o:", UINT_MAX);
	printf("%s%-#020.20o\n", "UInt max -#020.20o:", UINT_MAX);
	_printf("%s%-#020.20o\n", "UInt max -#020.20o:", UINT_MAX);
	printf("%s%#.10o\n", "UInt max #.10o:", UINT_MAX);
	_printf("%s%#.10o\n", "UInt max #.10o:", UINT_MAX);
	printf("%s%#-.10o\n", "UInt max #-.10o:", UINT_MAX);
	_printf("%s%#-.10o\n", "UInt max #-.10o:", UINT_MAX);
	printf("%s%#0.10o\n", "UInt max #0.10o:", UINT_MAX);
	_printf("%s%#0.10o\n", "UInt max #0.10o:", UINT_MAX);
	printf("%s%#-0.10o\n", "UInt max #-0.10o:", UINT_MAX);
	_printf("%s%#-0.10o\n", "UInt max #-0.10o:", UINT_MAX);
	printf("%s%#20.9o\n", "UInt max #20.9o:", UINT_MAX);
	_printf("%s%#20.9o\n", "UInt max #20.9o:", UINT_MAX);
	printf("%s%-#20.9o\n", "UInt max -#20.9o:", UINT_MAX);
	_printf("%s%-#20.9o\n", "UInt max -#20.9o:", UINT_MAX);
	printf("%s%-#020.9o\n", "UInt max -#020.9o:", UINT_MAX);
	_printf("%s%-#020.9o\n", "UInt max -#020.9o:", UINT_MAX);
	printf("%s%#020.9o\n", "UInt max #020.9o:", UINT_MAX);
	_printf("%s%#020.9o\n", "UInt max #020.9o:", UINT_MAX);
	printf("%s%-#010.9o\n", "UInt max -#010.9o:", UINT_MAX);
	_printf("%s%-#010.9o\n", "UInt max -#010.9o:", UINT_MAX);
	printf("%s%#20.10o\n", "UInt max #20.10o:", UINT_MAX);
	_printf("%s%#20.10o\n", "UInt max #20.10o:", UINT_MAX);
	printf("%s%-#20.10o\n", "UInt max -#20.10o:", UINT_MAX);
	_printf("%s%-#20.10o\n", "UInt max -#20.10o:", UINT_MAX);
	printf("%s%-#020.10o\n", "UInt max -#020.10o:", UINT_MAX);
	_printf("%s%-#020.10o\n", "UInt max -#020.10o:", UINT_MAX);
	printf("%s%#020.10o\n", "UInt max #020.10o:", UINT_MAX);
	_printf("%s%#020.10o\n", "UInt max #020.10o:", UINT_MAX);
	printf("%s%-#010.10o\n", "UInt max -#010.10o:", UINT_MAX);
	_printf("%s%-#010.10o\n", "UInt max -#010.10o:", UINT_MAX);
	printf("%s%#20.11o\n", "UInt max #20.11o:", UINT_MAX);
	_printf("%s%#20.11o\n", "UInt max #20.11o:", UINT_MAX);
	printf("%s%-#20.11o\n", "UInt max -#20.11o:", UINT_MAX);
	_printf("%s%-#20.11o\n", "UInt max -#20.11o:", UINT_MAX);
	printf("%s%#020.11o\n", "UInt max #020.11o:", UINT_MAX);
	_printf("%s%#020.11o\n", "UInt max #020.11o:", UINT_MAX);
	printf("%s%-#020.11o\n", "UInt max -#020.11o:", UINT_MAX);
	_printf("%s%-#020.11o\n", "UInt max -#020.11o:", UINT_MAX);
	printf("%s%-#010.11o\n", "UInt max -#010.11o:", UINT_MAX);
	_printf("%s%-#010.11o\n", "UInt max -#010.11o:", UINT_MAX);
	printf("%s%#20.12o\n", "UInt max #20.12o:", UINT_MAX);
	_printf("%s%#20.12o\n", "UInt max #20.12o:", UINT_MAX);
	printf("%s%#020.12o\n", "UInt max #020.12o:", UINT_MAX);
	_printf("%s%#020.12o\n", "UInt max #020.12o:", UINT_MAX);
	printf("%s%-#20.12o\n", "UInt max -#20.12o:", UINT_MAX);
	_printf("%s%-#20.12o\n", "UInt max -#20.12o:", UINT_MAX);
	printf("%s%-#020.12o\n", "UInt max -#020.12o:", UINT_MAX);
	_printf("%s%-#020.12o\n", "UInt max -#020.12o:", UINT_MAX);
	printf("%s%-#010.12o\n", "UInt max -#010.12o:", UINT_MAX);
	_printf("%s%-#010.12o\n", "UInt max -#010.12o:", UINT_MAX);
	printf("%%p arr:%p\n", ULONG_MAX);
	_printf("%%p arr:%p\n", ULONG_MAX);
	printf("%%p arr:%p\n", arr);
	_printf("%%p arr:%p\n", arr);
	printf("%%p NULL:%p\n", NULL);
	_printf("%%p NULL:%p\n", NULL);
	printf("%%20p NULL:%p\n", NULL);
	_printf("%%20p NULL:%p\n", NULL);
	printf("%%.20p NULL:%p\n", NULL);
	_printf("%%.20p NULL:%p\n", NULL);
	printf("%%p NULL + 1:%p\n", NULL + 1);
	_printf("%%p NULL + 1:%p\n", NULL + 1);
	printf("%%p -10:%p\n", -10);
	_printf("%%p -10:%p\n", -10);
	printf("%%20p arr:%20p\n", arr);
	_printf("%%20p arr:%20p\n", arr);
	printf("%%.20p arr:%.20p\n", arr);
	_printf("%%.20p arr:%.20p\n", arr);
	printf("%%-p arr:%-p\n", arr);
	_printf("%%-p arr:%-p\n", arr);
	printf("%%020p arr:%020p\n", arr);
	_printf("%%020p arr:%020p\n", arr);
	printf("%%020p arr:%020p\n", arr);
	_printf("%%020p arr:%020p\n", arr);
#endif	/* Put other test cases here */
	_printf("Other test cases\n");
	_printf("%x\n", 0);
/* Good enough for now. Hiding this output.
	printf("%zzzzzs%s\n", "--case %zzzzzs%s--");
	_printf("%zzzzzs%s\n", "--case %zzzzzs%s--");
	printf("%123zzzzzs%s\n", "--case %123zzzzzs%s--");
	_printf("%123zzzzzs%s\n", "--case %123zzzzzs%s--");
	printf("-##-0-0#-20.40d:%-##-0-0#-20.40d\n", INT_MAX);
	_printf("-##-0-0#-20.40d:%-##-0-0#-20.40d\n", INT_MAX);
	printf("-##-0-0#-20.40.5d:%-##-0-0#-20.40.5d\n", INT_MAX);
	_printf("-##-0-0#-20.40.5d:%-##-0-0#-20.40.5d\n", INT_MAX);
	printf("-##-20-0#-20.40.5d:%-##-20-0#-20.40.5d\n", INT_MAX);
	_printf("-##-20-0#-20.40.5d:%-##-20-0#-20.40.5d\n", INT_MAX); */
	printf("%99999999999s\n", "A really wide string"); /* does not print */
/* These explode, so don't do them. Leaving here as a note.
	printf("a char to %%s:%s\n",'a');
	_printf("%s testing null\n", b); */
}
