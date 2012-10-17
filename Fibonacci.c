#include <stdio.h>

int fib(int n);
int fib_iter(int a, int b, int n);
int main()
{
	int n = 0;
/*	printf("enter fib num: \n");
	scanf("%d", &n);
	*/
	n = 30;
	int i = 0;
	for (i = 0; i <= n; ++i)
	{
		printf("%d\t", fib(i));
	}
	printf("\n");
}

int fib(int n)
{
	return fib_iter(1, 0, n);
}

int fib_iter(int a, int b, int n)
{
	if (n == 0)
	{
		return b;
	}
	else
	{
		fib_iter(a+b, a, n-1);
	}
}
