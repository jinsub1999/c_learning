#include <stdio.h>

int main(void)
{
	int ch, cnt = 0;
	int length, longest = 0;

	ch = getchar();
	while (1)
	{
		
		if (ch == -1) break;

		else if ((ch >= 'a') && (ch <= 'z'))
		{
			cnt++;
		}

		else if (ch == '\n')
		{
			length = cnt;
			cnt = 0;

			if (length >= longest)
			{
				longest = length;
			}

		}
		ch = getchar();
	}
	
	printf("가장 긴 단어의 길이 : %d\n", longest);
}
