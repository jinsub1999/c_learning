#include <stdio.h>
int main(void)
{

	char name[10], phone[20], address[30];

	int i;

	printf("이름 : ");
	fgets(name, sizeof(name), stdin);
	for (i = 0; i < sizeof(name) / sizeof(name[0]); i++)
	{
		if (name[i] == '\n')
		{
			name[i] = '\0';
			break;
		}
	}
	
	printf("전화번호 : ");
	fgets(phone, sizeof(phone), stdin);
	for (i = 0; i < sizeof(phone) / sizeof(phone[0]); i++)
	{
		if (phone[i] == '\n')
		{
			phone[i] = '\0';
			break;
		}
	}
	
	printf("주소 : ");
	fgets(address, sizeof(address), stdin);
	for (i = 0; i < sizeof(address) / sizeof(address[0]); i++)
	{
		if (address[i] == '\n')
		{
			address[i] = '\0';
			break;
		}
	}
	printf("%s, %s, %s", name, phone, address);

	return 0;
}
