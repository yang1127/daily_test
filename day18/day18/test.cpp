////不用四则运算计算加法
//class Solution {
//public:
//	int Add(int num1, int num2)
//	{
//		while (num2 != 0)
//		{
//			int num3 = num1 ^ num2; //异或
//			int num4 = (num1 & num2) << 1; //与再左移
//			num1 = num3; //重复异或
//			num2 = num4; //重复与再左移
//		}
//		return num1; //直到没有进位返回
//	}
//};

//#include <iostream>
//#include <math.h>
//using namespace std;
//
////三角形：两边之和大于第三边，两边之差的绝对值小于第三边
//int main()
//{
//	long long int a, b, c;
//	while (cin >> a >> b >> c)
//	{
//		if ((a + b) > c && (a + c) > b && (b + c) > a
//			&& (abs(a - b) < c) && (abs(a - c) < b) && (abs(b - c) < a))
//			cout << "Yes" << endl;
//		else
//			cout << "No" << endl;
//	}
//
//    system("pause");
//	return 0;
//}

//解法二：使用宏
//#include <iostream> 
//#include <string> 
//
//#define ADD(x, y) ((x) + (y))  //任意两边和
//#define CMP(x, y) ((x) > (y))  //任意两边和与第三边进行比较
//
//int main()
//{ 
//	double a, b, c; 
//	while (std::cin >> a >> b >> c) 
//	{ 
//		//对两边进行求和与第三遍进行比较 
//		if (CMP(ADD(a, b), c) && CMP(ADD(b, c), a) && CMP(ADD(a, c), b))
//		{ 
//			std::cout << "Yes" << std::endl;
//		}
//		else 
//		{
//			std::cout << "No" << std::endl;
//		}
//    }
//
//	system("pause");
//	return 0;
//}


//#include <iostream> 
//#include <string> 
//
//using namespace std;
//
//#define ADD(x, y) ((x) + (y))  //任意两边和
//#define CMP(x, y) ((x) > (y))  //任意两边和与第三边进行比较
//
//int main()
//{
//	double a, b, c;
//	while (cin >> a >> b >> c)
//	{
//		//对两边进行求和与第三遍进行比较 
//		if (CMP(ADD(a, b), c) && CMP(ADD(b, c), a) && CMP(ADD(a, c), b))
//			cout << "Yes" << endl;
//		else
//			cout << "No" << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//
//bool fun(vector<int> v)
//{
//	for (int j = 0; j < v.size() - 1; j++)
//	{
//		if (v[j] > v[j + 1])
//			return false;
//	}
//	return true;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int> v(n);
//	for (int i = 0; i < n; i++)
//		cin >> v[i];
//
//	fun(v);
//
//	system("pause");
//	return 0;
//}


#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
using namespace std;

int fun(string s, int i, int flag)
{
	int num = 0;
	while (s[i] - '0' >= 0 && s[i] - '0' <= 9)
	{
		num = num * 10 + (s[i++] - '0');
		if (num * flag > pow(2, 31) - 1)
			return INT_MAX;
		if (num * flag < pow(2, 31))
			return INT_MIN;
	}
	num = num * flag;
	return num;
}

int atoi(string s)
{
	if (s.size() == 0)
		return 0;

	int i = 0;
	int flag = 0;
	while (s[i] == ' ')
		i++;

	if (s[i] == '+')
	{
		flag = 0;
		
	}
}

int main()
{
	string s;
	getline(cin, s);

	atoi(s);

	return 0;
}