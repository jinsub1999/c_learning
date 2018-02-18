#include <stdio.h>
#include <string.h>

int main(void)
{
	int ary[6];

	int same;
	int i = 0 , j;
	for (;;)
	{  
		printf("로또번호 입력: ");
		scanf("%d", &ary[i]);
		
		for (j = 0; j < i; j++)
		{
			if(ary[j] == ary[i])
			{
				same = 1;
				break;
			}
		}

		if (same == 1)
		{
			printf("같은 번호가 있습니다!\n");
			same = 0;
			continue;
		}

		if ((ary[i] < 1) || (ary[i] > 45))
		{
			printf("1부터 45까지의 수를 입력해 주세요.\n");
			continue;
		}
		
		
		i++;

		if (i == 6) break;
	}
	printf("입력된 로또번호 :");
	
	for (i = 0; i < 6; i++)
	{
		printf("%4d", ary[i]);
	}
	printf("\n");

}
