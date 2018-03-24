#include <stdio.h>

int factorial(int a);

int main(void)
{
	int a;
	scanf("%d", &a);
	printf("%d", factorial(a));
}

int factorial(int a)
{
	if (a == 1) return a;
	a *= factorial(a - 1);
}
