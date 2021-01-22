
//找到5行5列每行的最大值，同时是对应列的最小值，输出这个数，和他的坐标，每行每列对应从1开始

#include<stdio.h>

void Print(int arr[5][5],int x,int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			scanf("%d",&(arr[i][j]));
		}
		printf("\n");
	}
}
int main()
{
	int arr[5][5];
	Print(arr,5,5);
	int i,j = 0;
	for (i = 0; i < 5; i++)
	{
		int max = 0;
		for (int j = 0; j < 5; j++)
		{
			if (max < arr[i][j])
			{
				max = arr[i][j];   //找到某一行的最大值
			}

		}
		/*printf("%d ", max);*/
		int indexh = 0;
		for (j = 0; j < 5; j++)  
		{
			if (arr[i][j] == max)
			{
				indexh = j;    //找到某一行最大值对应的列索引，可能不止一个
				int flag = 1;
				for (int k = 0; k < 5; k++)
				{
					if (arr[k][indexh] < max)   //找某一行对应的最大值，同时判断是否为对应列的最小值
					{
						flag = 0;
					}
				}
				if (flag == 1)
				{
					printf("%d %d %d", max, i + 1, j + 1);
					printf("\n");
				}
			}
			

		}


	}



	return 0;
}