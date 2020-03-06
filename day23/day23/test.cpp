////��������
//
//#include <iostream>
//#include <cstdio> 
//// ���� ��-��-�� ͨ��̩�չ�ʽ���㵱ǰ���ڼ� 
//// 1: ����һ ... 7: ������ 
//int day_of_week(int year, int month, int day) 
//{ 
//	if (month == 1 || month == 2) 
//	{
//		month += 12; year -= 1; 
//	}
//	int century = year / 100;
//	year %= 100; 
//	int week = year + (year / 4) + (century / 4) - 2 * century + 26 * (month + 1) / 10 + day - 1;
//	week = (week % 7 + 7) % 7; 
//	if (week == 0) 
//	{
//		week = 7;
//	}
//	return week;
//}
//
//int day_of_demand(int year, int month, int count, int d_of_week) 
//{
//	int week = day_of_week(year, month, 1); //���1��������
//	// 1 + 7(n - 1) + (���������� + 7 - 1��������) % 7 
//	int day = 1 + (count - 1) * 7 + (7 + d_of_week - week) % 7; 
//	return day;
//}
//
//// Ԫ�� 
//void new_year_day(int year)
//{
//	printf("%d-01-01\n", year);
//}
//
//// ����·�¡�������գ�1�µĵ���������һ��
//void martin_luther_king_day(int year)
//{
//	printf("%d-02-%02d\n", year, day_of_demand(year, 2, 3, 1)); 
//}
//
//// ��ͳ�գ�2�µĵ���������һ�� 
//void president_day(int year) 
//{
//	printf("%d-02-%02d\n", year, day_of_demand(year, 2, 3, 1)); 
//}
//
//
//// ������ʿ�����գ�5�µ����һ������һ�� 
//void memorial_day(int year)
//{ 
//	// �� 6 ����ǰ�� 
//	int week = day_of_week(year, 6, 1);
//	
//	// ����һ�Ļ����� 31 ����ǰ�� 6 �죬������ week - 2 �� 
//	int day = 31 - ((week == 1) ? 6 : (week - 2));
//
//	printf("%d-05-%02d\n", year, day); 
//}
//
//// ���� 
//void independence_day(int year) 
//{
//	printf("%d-07-04\n", year); 
//}
//
//// �Ͷ��ڣ�9�µĵ�һ������һ�� 
//void labor_day(int year) 
//{
//	printf("%d-09-%02d\n", year, day_of_demand(year, 9, 1, 1));
//}
//
//// �ж��ڣ�11�µĵ��ĸ������ģ� 
//void thanks_giving_day(int year) 
//{
//	printf("%d-11-%02d\n", year, day_of_demand(year, 11, 4, 4));
//}
//
//// ʥ���� 
//void christmas(int year) 
//{
//	printf("%d-12-25\n", year); 
//}
//
//// �������� 
//void holiday_of_usa(int year) 
//{ 
//	new_year_day(year);
//	martin_luther_king_day(year);
//	president_day(year);
//	memorial_day(year); 
//	independence_day(year); 
//	labor_day(year); 
//	thanks_giving_day(year);
//	christmas(year); 
//}
//
//int main() 
//{
//	int year; 
//	while (std::cin >> year) 
//	{
//		holiday_of_usa(year);
//		putchar('\n');
//	}
//}



////�����ֽ�
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <stdlib.h>
//#include <math.h>
//
//using namespace std;
//
//int primenumber(int b) //�жϱ�����������
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
//		for (int i = 2; i <= sqrt(a); i++) //�жϳ����Ƿ�Ϊ����
//		{
//			while (i != a)
//			{
//				if (a % i == 0 && primenumber(i)) //��������
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

////���ö̳�����������
//#include <cstdio> 
//#include <cmath> 
//#include <iostream>
//using namespace std;
//
//int main() 
//{
//	unsigned int n; 
//	while (cin >> n) 
//	{
//		printf("%d =", n); //���n = 
//		for (unsigned i = 2; i <= sqrt(n); i++) 
//		{ 
//			while (n % i == 0 && n != i) //������ͬһ������ֱ�����������ų��պ��Ǹ�����n�η������
//			{
//				printf(" %u *", i); //��ӡ 
//				n /= i; //���������޸�n��ֵ
//			}
//		}
//		
//		printf(" %d\n", n); //������n�Ѿ��Ǵ������һ���������������һ�������������
//	}
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

////쳲�������β
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int Fibonacci[100001];
//	int num = 0;
//	Fibonacci[0] = 1;
//	Fibonacci[1] = 1;
//
//
//	for (int i = 2; i < 100001; i++)
//	{
//		Fibonacci[i] = Fibonacci[i - 1] + Fibonacci[i - 2];
//		Fibonacci[i] = Fibonacci[i] % 1000000; //��������λ
//	}
//
//	while (cin >> num)
//	{
//		if (num < 26)
//			cout << Fibonacci[num] << endl;
//		else
//			printf("%06ld\n", Fibonacci[num]);
//	}
//
//	system("pause");
//	return 0;
//}