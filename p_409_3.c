#include <stdio.h>

char *my_token(char *ps);

int main(void)
{
	char str[80];
	char *p;

	printf("문장 입력 : ");
	gets(str);
	printf("%s\n", str);
	while ((p = my_token(str)) != NULL)
	{
		printf("%s\n", p);
	}

	return 0;

}

char *my_token(char *ps)
{
	static int index;
	static char temp[80] = { '\0' };
	int i = 0, j = 0;
	if (index == -1) return NULL;
	for (j = 0; j < 80; j++)
	{
		temp[j] = '\0';
	}
	while (ps[index] != ' ')
	{
		if (ps[index] == '\0')
		{
			index = -1;
			return temp;
		}
		temp[i] = ps[index];
		i++;
		index++;
	}
	index++;
	return temp;
}
