#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <stdlib.h>
//
//int rabbit(int n)
//{
//	if (n == 1 || n == 2) // >2月才会生小兔子
//		return 1;
//
//	else
//		return rabbit(n - 1) + rabbit(n - 2); //通过计算可以看出，每月兔子总数目满足斐波那契数列
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//
//	printf("%d\n", rabbit(n));//递归调用
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
//	if (n < 2) //空瓶数小于2，无法兑换
//	{
//		return;
//	}
//	else 
//	{
//		if (n == 2) //空瓶数等于2，可借一瓶喝完后，3空瓶兑换一瓶满的归还
//		{
//			num++;
//		}
//
//		if (n >= 3) //空瓶数大于3可兑换，兑换后空瓶数量n-3
//		{           //由于换来的汽水喝完后又得1个空瓶，总空瓶数为n+1;实际换一次后，空瓶数量变为n-2
//			num++;  //先兑换一次喝完，再继续看剩余空余空瓶是否满足
//			fun(n - 2);
//		}
//	}
//}


//int main()
//{
//	int n; //空瓶总数
//	while (cin >> n) 
//	{
//		fun(n);
//		cout << num << endl; //兑换次数
//		num = 0; //每输入一次空瓶，将上一次数据置0
//	}
//
//	system("pause");
//	return 0;
//}

//序列维护
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
//		sort(v.begin(), v.end(), greater<int>()); //greater表示内置类型从大到小排序，less表示内置类型从小到大排序。
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

//最小数位和
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