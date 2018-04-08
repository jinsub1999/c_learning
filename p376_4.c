#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[80], str2[80];
	printf("input two words : ");
	scanf("%s %s", &str1, &str2);
	
	printf("longer word : ");
	if (strlen(str1) >= strlen(str2)) printf("%s\n", str1);
	else if (strlen(str1) < strlen(str2)) printf("%s\n", str2);
	printf("earlier word : ");
	if (strcmp(str1, str2) >= 0) printf("%s\n", str2);
	else if (strcmp(str1, str2) == -1) printf("%s\n", str1);
}
