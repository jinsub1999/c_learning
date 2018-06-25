#include <stdio.h>
#include <stdlib.h>

void print_mat(int *pa, int size);

int main(void)
{
	int *temp, cnt, i, j;
	temp = (int *)calloc(5000, sizeof(int));
	scanf("%d", &cnt);
	for (i = 2; i < cnt; i++)
	{
		if (temp[i] == 0)
		{
			temp[i] = i;
			for (j = 2; i * j < 5000; j++)
			{
				temp[i * j] = -1;
			}
		}
		else if (temp[i] == -1) continue;
	}
	print_mat(temp, cnt);
	free(temp);
	return 0;
}

void print_mat(int *pa, int size)
{
	int i = 2, line = 0;
	while (i < size)
	{
		if (pa[i] == -1)
		{
			printf("X\t");
		}
		else
		{
			printf("%d\t", pa[i]);
		}
		i++;
		line++;
		if (line == 5)
		{
			line = 0;
			printf("\n");
		}
	}
}
