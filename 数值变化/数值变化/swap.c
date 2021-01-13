//输入一个三位整数，倒序输出，例如764，输出467 


#include<stdio.h>
#include<math.h>

int main()
{
	int swap2(int n);
	//	int swap(int* n);

	int n;
	scanf("%d", &n);
	if (100 <= n && n < 1000)
	{
		int m = swap2(n);
		//		int m=swap(&n);
		printf("%d\n", m);
		//		printf("输入正确："); 
	}
	else
	{
		printf("-1");
	}
	return 0;
}
int swap2(int n)
{
	int k, s = 0, i = 2;
	for (i = 2; n > 0; i--)
	{
		k = n % 10;
		n = n / 10;
		s = s + k * pow(10, i);

	}
	return s;
}

