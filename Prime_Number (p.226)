#include <stdio.h>
#include <stdlib.h>

int prime_check(int n);

int main(void)
{
	int num;
	int check;
	int a;
	int list = 0;

	printf("양수 입력 :");
	scanf("%d", &num);
	
	for (a = 2; a < num + 1; a++)
	{
		check = prime_check(a);

		if (check == 1) {
			printf("%d\t", a);
			list++;
		}

		

		if (list == 5)
		{
			list = 0;
			printf("\n");
		}
	}

	system("pause");
	return 0;
}



int prime_check(int n)
{
	int i;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0) 
		{
			return 0;
		}
	}

	return 1;
}
