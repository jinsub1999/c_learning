#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[100];
	int num = 0;
	int change_check = 0;
	int ascii_num;
	char temp;
	
	printf("문장 입력 : ");

	gets(str);

	for (;;)
	{
		if (str[num] == '\0') break;
		ascii_num = (int)str[num];
		if ((ascii_num >= 65) && (ascii_num <= 90))
		{
			change_check++;
			ascii_num += 32;
			temp = (char)ascii_num;

			str[num] = temp;
		}

		num++;

		
	}

	printf("바뀐 문장 : ");

	puts(str);

	printf("바뀐 문자 수 : %d\n", change_check);
}
