#include <stdio.h>

int main()
{
	int ary[5][6] = {
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15},
		{16, 17, 18, 19, 20},
		{0}
	};
	int i, j;
	
	for (i = 0; i < 5; i++)
	{
		int cnt1 = 0;
		for (j = 0; j < 6; j++)
		{
			cnt1 += ary[i][j];
		}
		ary[i][5] = cnt1;
	}

	for (i = 0; i < 6; i++)
	{
		int cnt2 = 0;
		for (j = 0; j < 5; j++)
		{
			cnt2 += ary[j][i];
		}
		ary[4][i] = cnt2;
	}

	for (i = 0; i < 5; i++)
	{
		int cnt3 = 0;
		for (j = 0; j < 6; j++)
		{
			cnt3 += ary[i][j];
		}
		ary[4][5] = cnt3;
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 6; j++)
		{
			printf("%5d", ary[i][j]);
		}
		printf("\n");
	}
	return 0;
}
