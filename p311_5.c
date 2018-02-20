#include <stdio.h>

void reverse(double *pa , int size);

int main(void)
{
	double ary[] = { 1.5, 20.1, 16.4, 2.3, 3.5 };

	reverse(ary, sizeof(ary) / sizeof(*ary));

	int i;
	for (i = 0; i < sizeof(ary) / sizeof(*ary); i++)
	{
		printf("%6.1lf", ary[i]);
	}
	printf("\n");
}

void reverse(double *pa, int size)
{
	double temp;
	int i;
	for (i = 0; i < size / 2; i++)
	{
		temp = pa[i];
		pa[i] = pa[size - 1 - i];
		pa[size - 1 - i] = temp;
	}
}
