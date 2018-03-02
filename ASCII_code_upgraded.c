#include <stdio.h>
#include <stdlib.h>


void input_char(char *ch1, char *ch2);

void output_ASCII(char ch1 , char ch2);

int main(void)
{
	
	char i = '\0', o = '\0';
	
	for (;;)
	{
		input_char(&i, &o);
		if ((int)i == 10 && (int)o == 10) break;
		output_ASCII(i ,o);
	}
	system("pause");
	return 0;
}

void input_char(char *ch1, char *ch2)
{
	printf("input a character. (Press Enter twice to exit.) : ");
	scanf("%c%c", &*ch1, &*ch2);
}

void output_ASCII(char ch1, char ch2)
{
	int temp;

	temp = (int)ch1;

	
	printf("Its ASCII code is : %d.\n", temp);
}
