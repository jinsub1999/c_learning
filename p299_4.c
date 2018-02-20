#include <stdio.h>

int main(void)
{
	double ary[5] = {1.2 , 3.5 , 7.4 , 0.5 , 10.0 };
	double *pa = ary;
	double *pb = ary + 2;

	int i;
	
	printf("배열 요소의 값 : ");
	for (i = 0; i < (sizeof(ary) / sizeof(ary[0])); i++)
	{
		printf("%.1lf   ", *pa);
		pa++;
	}
	pa = ary;
	printf("\n평균 : ");

	double total = 0;
	for (i = 0; i < (sizeof(ary) / sizeof(ary[0])); i++)
	{
		total += *pa;

		pa++;
	}
	double average = total / (sizeof(ary) / sizeof(ary[0]));

	printf("%.2lf\n", average);
}
