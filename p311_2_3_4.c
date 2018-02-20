#include <stdio.h>

int check31(int *pa);

void Feb_29(int *pa);

void display(int *pa);


int main(void)
{
	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	int num = check31(month);

	printf("%4d\n\n", num);
	
	Feb_29(month);

	display(month);

}

int check31(int *pa)
{
	int i, count = 0;

	for (i = 0; i < 12; i++)
	{
		if (*(pa + i) == 31) count++;
	}

	return count;
}

void Feb_29(int *pa)
{
	pa[1] = 29;
}

void display(int *pa)
{
	int i, j = 0;

	for (i = 0; i < 12; i++)
	{
		printf("%4d", *(pa + i));
		j++;
		if (j == 5)
		{
			j = 0;
			printf("\n");
		}
	}
	printf("\n");
}
