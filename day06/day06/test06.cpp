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

//奇偶数位
//class Solution {
//public:
//	void oddInOddEvenInEven(std::vector<int>& arr, int len) {
//		long i = 0, j = 1;
//		while (i < len && j < len) 
//		{
//			if ((arr[i] % 2) == 0) //偶数位上寻找非偶数
//			{
//				i += 2; 
//				continue; 
//			}
//			if ((arr[j] % 2) != 0) //奇数位上寻找非奇数
//			{
//				j += 2; continue; 
//			}
//			swap(arr[i], arr[j]);
//		}
//	}
//};

//猴子分桃
//#include <iostream>
//#include <string>
//#include <math.h>
//int main()
//{
//	int n;
//	while (std::cin >> n) {
//		if (n == 0) break;
//		long total = pow(5, n) - 4;
//		long left = pow(4, n) + n - 4;
//		std::cout << total << " " << left << std::endl;
//	}
//	return 0;
//}//最小不可组合数//#include <iostream>
//#include <vector>
//class Solution {
//public:
//	int getFirstUnFormedNum(std::vector<int> &arr, int length) {
//		int sum = 0, min = arr[0];
//		int i, j;
//		for (int i = 0; i < length; i++)
//		{
//			sum += arr[i];
//			min = arr[i] < min ? arr[i] : min;
//		}
//		std::vector<int> dp(sum + 1, 0);
//		for (i = 0; i < length; i++) {
//			for (j = sum; j >= arr[i]; j--) 
//			{
//					if (dp[j] < dp[j - arr[i]] + arr[i])//对每个承重计算当前最大能放置重量
//						dp[j] = dp[j - arr[i]] + arr[i];//更新背包中能够放入的最大值
//					else
//						dp[j] = dp[j];
//			}
//		}
//		//最后当承重为n时，放入的重量不为n则认为是最大不可求和
//		for (i = min; i <= sum; i++)
//		{
//			if (i != dp[i])
//				return i;
//		}
//		return sum + 1;
//	}
//};////有假币//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//int main() {
//	long long n; int cnt;
//	while ((scanf("%lld", &n)) != EOF) {
//		if (n == 0)
//			break;
//		cnt = 0;
//		while (n >= 2) {
//			if (n % 3) {
//				//不可以整除则取最差情况：最重的一份是 n/3 + 1个金币
//				n = n / 3 + 1;
//			}
//			else {
//				//可以整除在直接整除，能够获取到最重的一份
//				n /= 3;
//			}
//			cnt++;
//		}
//			printf("%d\n", cnt);
//	};
//	return 0;
//}