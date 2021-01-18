

//编写程序将一个指定文件中给定字符串删除。假设给定的字符串长度不超过20，
//文件中每行的字符数不超过100。要求：给定的字符串大小写无关。
//
//【输入形式】
//
//给定文件名为filein.txt。从标准输入中输入要删除的字符串（不含空格）。
//
//【输出形式】
//
//将删除后的结果输出到文件fileout.txt中。







#include<stdio.h>
#include<string.h>
#include<errno.h>


int main()
{
	FILE* pf1=fopen("filein.txt", "r");  //以只读的方式打开filein文本文件
	FILE* pf2= fopen("fileout.txt", "w");  //以写的形式打开fileout文件

	if (pf1==NULL  || pf2==NULL)
	{
		printf("%s\n", strerror(errno));  //如果打开失败，显示失败的原因
		return 0;
	}
	char strdel[10];  
	gets(strdel);  //输入要删除的字符串的内容
	
	while (!feof(pf1))
	{
		char str[101];
		fgets(str, 101, pf1);
		char* p = strstr(str, strdel);  //查找要删除的子串第一次在str中的位置
		
		while (p)
		{
		

			strcpy(p, p + strlen(strdel));  //将第一次出现的字串删除
			p = strstr(str, strdel);  //在删除字串的str中继续查找是否还含有子串
		}
		fprintf(pf2,"%s",str);//将删除字串的str写入到pf2文件当中去

	}

	return 0;
}