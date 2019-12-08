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