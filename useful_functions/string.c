// str-related functions
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[30] = "apple";
	char str2[30] = "pen";
	char str3[30] = "pine";
	char temp[30] = " ";

	strcpy(temp, str1);
	printf("%s\n", temp);
	strcpy(temp, str2);
	printf("%s\n", temp);
	// strcpy(A, B) -> copy B into A

	printf("%d\n", strlen(str1));
	printf("%d\n", strlen(str2));
	// strlen(A) -> return (int) length of A string

	strcat(temp, str3);
	strcat(temp, str1);
	strcat(temp, str1);
	strcat(temp, str2);

	printf("%s\n", temp);
	// strcat(A, B) -> similar to python's A + B

	char temp2[30] = "";
	strncpy(temp2, "abcdefg", 5);
	printf("%s\n", temp2);
	// strncpy(A, B, num) -> copy B into A up to (num)th char

	strcpy(temp, str1);
	printf("%s\n%s\n", str1, str2);
	printf("%d\n", strcmp(str2, str1));
	printf("%d\n", strcmp(str1, temp));
	printf("%d\n", strcmp(str2, str3));
	/*
		strcmp(A, B) -> compare order in dictionary
		A is later than B -> return 1
		earlier -> return -1
		same -> return 0
		but comparing in ASCII code,
		if upper case and lower case are shuffled,
		it is hard to return wanted value.
		strncmp(A, B, num) -> doing strcmp(A, B) up to (num)th char
	*/

	/*
		if using pointer such as;
		*p = "pen";
		pointer "p" is constant, so "p" is immutable.
	*/
	
	return 0;
}
