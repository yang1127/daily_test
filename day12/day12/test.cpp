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



#include <stdlib.h>
#include <stdio.h>

int main()
{
	int month;
	scanf("%d", &month);

	while (month)
	{
		int i, sum;
		int a = 1, b = 1;
		if (month > 2)
		{
			for (i = 3; i <= month; i++)
			{
				sum = a + b;
				a = b;
				b = sum;
			}
		}
		printf("%d", sum);
	}

	system("pause");
	return 0;
}