#include <stdio.h>

int fib(int n);
int main()
{
	int i = 0;
	for (i=0; i <= 30; ++i)
	{
		printf("%d\t", fib(i));
	}
	printf("\n");
	return 0;
}

int fib(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}
	else
	{
		return fib(n-1) + fib(n-2);
	}
}
