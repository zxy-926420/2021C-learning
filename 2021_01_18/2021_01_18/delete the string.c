

//��д����һ��ָ���ļ��и����ַ���ɾ��������������ַ������Ȳ�����20��
//�ļ���ÿ�е��ַ���������100��Ҫ�󣺸������ַ�����Сд�޹ء�
//
//��������ʽ��
//
//�����ļ���Ϊfilein.txt���ӱ�׼����������Ҫɾ�����ַ����������ո񣩡�
//
//�������ʽ��
//
//��ɾ����Ľ��������ļ�fileout.txt�С�







#include<stdio.h>
#include<string.h>
#include<errno.h>


int main()
{
	FILE* pf1=fopen("filein.txt", "r");  //��ֻ���ķ�ʽ��filein�ı��ļ�
	FILE* pf2= fopen("fileout.txt", "w");  //��д����ʽ��fileout�ļ�

	if (pf1==NULL  || pf2==NULL)
	{
		printf("%s\n", strerror(errno));  //�����ʧ�ܣ���ʾʧ�ܵ�ԭ��
		return 0;
	}
	char strdel[10];  
	gets(strdel);  //����Ҫɾ�����ַ���������
	
	while (!feof(pf1))
	{
		char str[101];
		fgets(str, 101, pf1);
		char* p = strstr(str, strdel);  //����Ҫɾ�����Ӵ���һ����str�е�λ��
		
		while (p)
		{
		

			strcpy(p, p + strlen(strdel));  //����һ�γ��ֵ��ִ�ɾ��
			p = strstr(str, strdel);  //��ɾ���ִ���str�м��������Ƿ񻹺����Ӵ�
		}
		fprintf(pf2,"%s",str);//��ɾ���ִ���strд�뵽pf2�ļ�����ȥ

	}

	return 0;
}