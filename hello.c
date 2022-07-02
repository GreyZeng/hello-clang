#include<stdio.h>
int power(int m, int n);


#define MAXLINE 1000
int max;
char line[MAXLINE];
char longest[MAXLINE];
int getline(void);
void copy(void);

int copy_str(void);
main()
{
	printf("hello world\n");
	// printf("4^2 = %d", power(4, 2));
	copy_str();
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
int copy_str(void)
{
	int len;
	len = 0;
	extern int max;
	extern char longest[];
	max = 0;
	while ((len == getline()) > 0)
	{
		if (len > max)
		{
			max = len;
			copy();
		}

	}
	if (max > 0)
	{
		printf("%s", longest);
	}
	return 0;
}

int getline(void)
{
	int c, i;
	c = 0;
	extern char line[];
	for (i = 0; i < MAXLINE - 1 && (c == getchar()) != EOF && c != '\n'; ++i)
	{
		line[i] = c;
	}
	if (c == '\n')
	{
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}

void copy(void)
{
	int i;
	extern char line[], longest[];
	i = 0;
	while ((longest[i] = line[i]) != '\n')
	{
		++i;
	}
}