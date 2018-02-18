#include <stdio.h>
#include <string.h>

int main(void)
{
	int ary[5];
	int i;


	int lowsame = 0 , highsame = 0, allsame = 0;;
	int high, low;
	
	
	printf("5명 심사위원의 점수 입력 :");
	
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &ary[i]);
	}


	for (i = 0; i < 4; i++)
	{
		if (ary[i] == ary[i + 1]) allsame++;
	}
	
	high = ary[0], low = ary[0];

	for (i = 1; i < 5; i++)
	{
		if (high <= ary[i]) high = ary[i];
	}

	for (i = 1; i < 5; i++)
	{
		if (low >= ary[i]) low = ary[i];
	}

	printf("유효점수 : ");

	for (i = 0; i < 5; i++)
	{
		if (allsame == 4)
		{
			printf("%d    %d    %d", ary[0], ary[1], ary[2]);
			break;
		}
		
		if (ary[i] == high)
		{
			highsame++;
			if(highsame >= 2) printf("%4d", ary[i]);
			continue;
		}
		else if (ary[i] == low)
		{
			lowsame++;
			if (lowsame >= 2) printf("%4d", ary[i]);
			continue;
		}
		else printf("%4d", ary[i]);
	}

	int num = sizeof(ary) / sizeof(ary[0]);

	lowsame = 0, highsame = 0;

	printf("\n평균 : ");

	int total = 0;

	for (i = 0; i < 5; i++)
	{
		if (allsame == 4) break;
		
		if (ary[i] == high)
		{
			highsame++;
			if (highsame >= 2) total += ary[i];
			continue; 
		}
		else if (ary[i] == low)
		{
			lowsame++;
			if (lowsame >= 2) total += ary[i];
			continue;
		}
		else total += ary[i];
	}
	
	double avg = (double)total / (double)(num - 2);
	
	if (allsame == 4) avg = ary[0];
	
	printf("%.1lf\n", avg);

	return 0;
}
