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

//#include<iostream>
//using namespace std;
//
//int num = 0;
//void fun(int n) 
//{
//	if (n < 2) //��ƿ��С��2���޷��һ�
//	{
//		return;
//	}
//	else 
//	{
//		if (n == 2) //��ƿ������2���ɽ�һƿ�����3��ƿ�һ�һƿ���Ĺ黹
//		{
//			num++;
//		}
//
//		if (n >= 3) //��ƿ������3�ɶһ����һ����ƿ����n-3
//		{           //���ڻ�������ˮ������ֵ�1����ƿ���ܿ�ƿ��Ϊn+1;ʵ�ʻ�һ�κ󣬿�ƿ������Ϊn-2
//			num++;  //�ȶһ�һ�κ��꣬�ټ�����ʣ������ƿ�Ƿ�����
//			fun(n - 2);
//		}
//	}
//}


//int main()
//{
//	int n; //��ƿ����
//	while (cin >> n) 
//	{
//		fun(n);
//		cout << num << endl; //�һ�����
//		num = 0; //ÿ����һ�ο�ƿ������һ��������0
//	}
//
//	system("pause");
//	return 0;
//}

//����ά��
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <functional>
//
//using namespace std;
//
//int main()
//{
//	int n, q;
//	vector<int> v;
//	while (cin >> n >> q)
//	{
//		v.resize(n + 1);
//		for (int i = 0; i < n; i++)
//			cin >> v[i];
//
//		sort(v.begin(), v.end(), greater<int>()); //greater��ʾ�������ʹӴ�С����less��ʾ�������ʹ�С��������
//		while (q--)
//		{
//			int x;
//			int count = 0;
//			cin >> x;
//			for (int j = 0; j < n; j++)
//			{
//				if (v[j] >= x)
//				{
//					v[j] -= 1;
//					count++;
//				}
//			}
//			cout << count << endl;
//		}
//	}
//
//	return 0;
//}

//��С��λ��
#include <iostream>
using namespace std;

int main()
{
	int n;
	int x;
	while (cin >> n)
	{
		while (n--)
		{
			cin >> x;
			if (x % 9)
				cout << x % 9;
			x -= x % 9;
			for (int i = 1; i <= x / 9; i++)
				cout << "9";
			cout << endl;
		}
	}
	return 0;
}