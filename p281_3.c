#include <stdio.h>

void rotate(int *pa, int *pb, int *pc);

int main(void)
{
	int a, b, c;
	a = 1, b = 2, c = 3;
	char finisher;
	for (;;)
	{
		printf("%d:%d:%d", a, b, c);
		scanf("%c", &finisher);
		if (finisher != 10) break;
		rotate(&a, &b, &c);
	}
	return 0;
}

void rotate(int *pa, int *pb, int *pc)
{
	int temp;

	temp = *pa;
	*pa = *pb;
	*pb = *pc;
	*pc = temp;
}
