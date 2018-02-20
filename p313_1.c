#include <stdio.h>

void print_graph(int *ps, int size);


int main(void)
{
	int score[5] = { 72, 88, 95, 64, 100 };
	
	print_graph(score, sizeof(score) / sizeof(score[0]));
	
}

void print_graph(int *ps, int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		printf("(%3d) ", ps[i]);
		for (j = 0; j < ps[i] / 5 ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
