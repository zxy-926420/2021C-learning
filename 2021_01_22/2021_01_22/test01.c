
//�ҵ�5��5��ÿ�е����ֵ��ͬʱ�Ƕ�Ӧ�е���Сֵ���������������������꣬ÿ��ÿ�ж�Ӧ��1��ʼ

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
				max = arr[i][j];   //�ҵ�ĳһ�е����ֵ
			}

		}
		/*printf("%d ", max);*/
		int indexh = 0;
		for (j = 0; j < 5; j++)  
		{
			if (arr[i][j] == max)
			{
				indexh = j;    //�ҵ�ĳһ�����ֵ��Ӧ�������������ܲ�ֹһ��
				int flag = 1;
				for (int k = 0; k < 5; k++)
				{
					if (arr[k][indexh] < max)   //��ĳһ�ж�Ӧ�����ֵ��ͬʱ�ж��Ƿ�Ϊ��Ӧ�е���Сֵ
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