#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <stdlib.h>
//
//int rabbit(int n)
//{
//	if (n == 1 || n == 2) // >2�²Ż���С����
//		return 1;
//
//	else
//		return rabbit(n - 1) + rabbit(n - 2); //ͨ��������Կ�����ÿ����������Ŀ����쳲���������
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//
//	printf("%d\n", rabbit(n));//�ݹ����
//
//	system("pause");
//	return 0;
//}



//#include <stdlib.h>
//#include <stdio.h>
//
//int main()
//{
//	int month;
//	scanf("%d", &month);
//
//	while (month)
//	{
//		int i, sum;
//		int a = 1, b = 1;
//		if (month > 2)
//		{
//			for (i = 3; i <= month; i++)
//			{
//				sum = a + b;
//				a = b;
//				b = sum;
//			}
//		}
//		printf("%d", sum);
//	}
//
//	system("pause");
//	return 0;
//}

#include<iostream>
using namespace std;

int num = 0;
void fun(int n) 
{
	if (n < 2) //��ƿ��С��2���޷��һ�
	{
		return;
	}
	else 
	{
		if (n == 2) //��ƿ������2���ɽ�һƿ�����3��ƿ�һ�һƿ���Ĺ黹
		{
			num++;
		}

		if (n >= 3) //��ƿ������3�ɶһ����һ����ƿ����n-3
		{           //���ڻ�������ˮ������ֵ�1����ƿ���ܿ�ƿ��Ϊn+1;ʵ�ʻ�һ�κ󣬿�ƿ������Ϊn-2
			num++;  //�ȶһ�һ�κ��꣬�ټ�����ʣ������ƿ�Ƿ�����
			fun(n - 2);
		}
	}
}


int main()
{
	int n; //��ƿ����
	while (cin >> n) 
	{
		fun(n);
		cout << num << endl; //�һ�����
		num = 0; //ÿ����һ�ο�ƿ������һ��������0
	}

	system("pause");
	return 0;
}
