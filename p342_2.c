#include <stdio.h>

int main(void)
{
	int cha;

	for (;;)
	{
		cha = getchar();

		if (cha >= 'a' && cha <= 'z')
		{
			cha -= ('a' - 'A');
			printf("%c", cha);
		}
		else if (cha >= 'A' && cha <= 'Z')
		{
			cha += ('a' - 'A');
			printf("%c", cha);
		}
		else if (cha == ' ') printf(" ");
		else if (cha == '\n') break;
		else break;
	}
	
}
