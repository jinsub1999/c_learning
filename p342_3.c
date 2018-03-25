#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int result = 0, j, n, i = 0;
	char num[10];

	num[i] = getchar();
	i++;
	while ((n = getchar()) != '\n')
	{
		num[i] = n;
		i++;
	}
	num[i] = '\0';

	char *pa = num;

	j = (signed)strlen(num);

	for (i = 0; i < j; i++)
	{
		result = result * 10 + ((int)pa[i] - 48);
	}

	printf("%d\n", atoi(num) + 10);
	printf("%d", result + 10);
}
