#include <stdio.h>

int check_same(int *lotto_nums, int *my_nums);

int main(void)
{
	int lotto_nums[6] = { 4, 10 , 25 , 30, 41, 45 };
	int my_nums[6] = { 1, 4, 7, 22, 41, 43 };

	int same_num = check_same(lotto_nums, my_nums);

	printf("일치하는 번호의 개수 : %d\n", same_num);

	return 0;
}

int check_same(int *lotto_nums, int *my_nums)
{
	int i, u, j = 0;

	for (i = 0; i < 6; i++)
	{
		for (u = 0; u < 6; u++)
		{
			if (lotto_nums[i] == my_nums[u]) j++;
		}
	}

	return j;
}
