//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int main()
//{
//	int w, h;
//	int count = 0;
//	cin >> w >> h;
//
//	if (w % 4 == 0 || h % 4 == 0) //长或宽除4余数为0时，占有长*宽/2的蛋糕
//	{
//		count = w * h / 2;  
//	}
//	else if (w % 2 == 0 || h % 2 == 0) //长或宽除2余数为0时，占有（长*宽/4 +1）* 2的蛋糕
//	{
//		count = (w * h / 4 + 1) * 2;
//
//	}
//	else
//	{
//		count = w * h / 2 + 1;  //长、宽都是奇数的情况
//	}
//	cout << count << endl;
//	return 0;
//}


//class Solution {
//public:
//	int StrToInt(string str) {
//		int result = 0;
//		int len = str.size();
//		if (len <= 0)
//			return 0;
//		int i = 0;
//		int flag = 0;
//		if (str[i] == ' ')
//		{
//			i++;
//		}
//		if (str[i] == '+')
//		{
//			flag = 1;
//			i++;
//		}
//		else if (str[i] == '-')
//		{
//			flag = -1;
//			i++;
//		}
//		while (str[i] != '\0')
//		{
//			if (str[i] >= '0' && str[i] <= '9')
//			{
//				result = result * 10 + (str[i] - '0');
//				i++;
//			}
//			else {
//				result = 0;
//				break;
//			}
//		}
//		if (flag == -1)
//			result = -result;
//		return result;
//	}
//};

//星际密码
//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<int> a = { 1, 1 }; //全局
//void func()
//{
//	for (int i = 2; i < 10010; i++)
//	{
//		a.push_back((a[i - 1] + a[i - 2]) % 10000); //保留后四位
//	}
//}
//
//int main()
//{
//	int n, t;
//	func();
//	while (cin >> n) //第一行包含一个整数n
//	{
//		while (n--)
//		{
//			cin >> t; //第二行包含n个正整数Xi (1≤Xi≤10000)
//			printf("%04d", a[t]);
//		}
//		cout << endl;
//	}
//	return 0;
//}

//数根
//#include <iostream>
//#include <string>
//using namespace std;
//
//int root_num(int num)
//{
//	int sumroot_num = 0;
//	while (num > 0) //求每位相加和
//	{
//		sumroot_num += num % 10;
//		num = num / 10;
//	}
//	while (sumroot_num > 9)//若不是个位数、再将加后的数再相加，直到为个位数
//	{
//		sumroot_num = root_num(sumroot_num);
//	}
//	return sumroot_num;
//}
//
//int main()
//{
//	string num;
//	while (cin >> num)
//	{
//		int sum = 0;
//		for (int i = 0; i < num.size(); i++)
//		{
//			sum += num[i] - '0'; //将数字每一位先相加，防止过大
//		}
//		cout << root_num(sum) << endl;
//	}
//	return 0;
//}

//快到碗里来
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	double n, r;
//	while (cin >> n >> r)
//	{
//		double area = 2 * 3.14 * r;
//		if (area > n)
//			cout << "Yes" << endl;
//		else
//			cout << "No" << endl;
//	}
//	return 0;
//}