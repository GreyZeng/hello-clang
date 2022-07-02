#include<stdio.h>
loop_print() 
{
	int c;
	while ((c = getchar()) != EOF)
	{
		putchar(c);
	}
}