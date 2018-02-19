#include <stdio.h>
#include <string.h>


void func(int *pa, int *pb);


int main(void)
{
	int mod, rem;
	func(&mod, &rem);
	printf("몫 : %d, 나머지 : %d\n", mod, rem);

	return 0;
}

void func(int *pa, int *pb)
{
	int num;
	printf("양수 입력 : ");
	scanf("%d", &num);
	*pa = num / 4;
	*pb = num % 4;
}
