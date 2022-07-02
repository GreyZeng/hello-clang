#include<stdio.h>
int power(int m, int n);
main()
{
	printf("hello world\n");
	printf("4^2 = %d", power(4, 2));
}
int power(int m, int n)
{
	int i, p;
	p = 1;
	for (i = 1; i <= n; ++i)
	{
		p = p * m;
	}
	return p;
}