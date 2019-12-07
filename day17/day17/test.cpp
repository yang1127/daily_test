//����
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int prime[10001];  //�洢���������� 2-10000
int primesize = 0; //��¼�����ĸ���
int mark[10001];   //����Ƿ�������

void init() 
{
	for (int i = 2; i <= 10000; i++)
		mark[i] = false; //��ʼ����������Ŀǰ��Ϊ����

	for (int i = 2; i <= 10000; i++)
	{
		if (false == mark[i])
		{
			prime[primesize++] = i; //��¼����
			for (int j = i * i; j <= 10000; j += i) //�� i*i ��ʼ����Ϊ i*k (k<i) Ҳ��k���������ı���
			{
				mark[j] = true; //�������ı�����Ϊ������
			}
		}
	}
}

int main() 
{
	init(); //��2-10000֮���������������¼��ȫ�ֱ���prime��
	int n;
	while (scanf("%d", &n) != EOF)
	{
		bool isOutput = false;
		for (int i = 0; i < primesize; i++) 
		{
			if (prime[i] < n && prime[i] % 10 == 1) //1-n֮����������Ҹ�λΪ1
			{
				if (false == isOutput) 
				{
					isOutput = true;
					printf("%d", prime[i]);
				}
				else 
					printf(" %d", prime[i]);
			}
		}
		if (false == isOutput)
			printf("-1\n");
		else 
			printf("\n");
	}
	return 0;
}