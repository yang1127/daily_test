//��������

//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//
//void USAFestival(int year)
//{
//
//}
//
//int main()
//{
//	int year;
//	while (cin >> year)
//	{
//		USAFestival(year);
//		cout << endl;
//	}
//
//	system("pause");
//	return 0;
//}



////�����ֽ�
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <stdlib.h>
//#include <math.h>
//
//using namespace std;
//
//int primenumber(int b)
//{
//	for (int i = 2; i < sqrt(b); i++)
//	{
//		if (b % i == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int a;
//	while (scanf("%d", &a) == 1)
//	{
//		cout << a << " = ";
//		for (int i = 2; i <= sqrt(a); i++)
//		{
//			while (i != a)
//			{
//				if (a % i == 0 && primenumber(i))
//				{
//					a = a / i;
//					cout << i << " * ";
//				}
//				else
//					break;
//			}
//		}
//		cout << a << endl;
//	}
//	system("pause");
//	return 0;
//}


//�Ա�����
//˼·��ͬ��ͬ��ֱ�Ӽ�������������
//ͬ�겻ͬ�£��������µ��������㲻�����£��������
//��ͬ�꣬�����������������������������������

//#include <iostream>
//using namespace std;
//
//int Money(int year1, int month1, int day1, int year2, int month2, int day2)
//{
//	int SumMoney = 0;
//	int tmp = 0;
//	int month_day[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//
//	int year = year1;
//	for (int i = year1; i < year2; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//			SumMoney += 580;
//		else SumMoney += 579;
//	}
//
//	for (int i = 0; i < month1; i++)
//	{
//		if (i == month1 - 1) 
//			tmp = day1 - 1;
//		else 
//			tmp = month_day[i];
//
//		if (i != 1 && i != 2 && i != 4 && i != 6 && i != 10)
//		{
//			SumMoney -= tmp * 2;
//		}
//		else 
//			SumMoney -= tmp;
//	}
//
//	for (int i = 0; i < month2; i++)
//	{
//		if (i == month2 - 1) 
//			tmp = day2;
//		else
//			tmp = month_day[i];
//
//		if (i != 1 && i != 2 && i != 4 && i != 6 && i != 10)
//		{
//			SumMoney += tmp * 2;
//		}
//		else 
//			SumMoney += tmp;
//	}
//
//	return SumMoney;
//
//}
//
//
//int main() 
//{
//	int year1, year2, month1, month2, day1, day2;
//	int SumMoney = 0;
//
//	while (cin >> year1 >> month1 >> day1 >> year2 >> month2 >> day2)
//	{
//		SumMoney = Money(year1, month1, day1, year2, month2, day2);
//		cout << SumMoney << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//쳲�������β
#include <iostream>
using namespace std;

int main()
{
	int Fibonacci[100001];
	int num = 0;
	Fibonacci[0] = 1;
	Fibonacci[1] = 1;


	for (int i = 2; i < 100001; i++)
	{
		Fibonacci[i] = Fibonacci[i - 1] + Fibonacci[i - 2];
		Fibonacci[i] = Fibonacci[i] % 1000000; //��������λ
	}

	while (cin >> num)
	{
		if (num < 26)
			cout << Fibonacci[num] << endl;
		else
			printf("%06ld\n", Fibonacci[num]);
	}

	system("pause");
	return 0;
}