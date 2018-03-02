#include <stdio.h>

void input_nums(int *lotto_nums);
void print_nums(int *lotto_nums);


int main(void)
{
	int lotto_nums[6];

	input_nums(lotto_nums);
	print_nums(lotto_nums);
	return 0;
}

void input_nums(int *lotto_nums)
{
	int i, u;

	for (i = 0; i < 6; i++)
	{
		printf("번호 입력 : ");
		scanf("%d", &*(lotto_nums + i));

		for (u = 0; u < i; u++)
		{
			if (*(lotto_nums + i) == *(lotto_nums + u))
			{
				printf("같은 번호가 있습니다!\n");
				i--;
				break;
			}
		}
	}
}

void print_nums(int *lotto_nums)
{
	int i;

	
	for (i = 0; i < 6; i++)
	{
		if (i == 0) printf("로또번호 : ");
		printf("%4d", lotto_nums[i]);
		if (i == 5) printf("\n");
	}
}
