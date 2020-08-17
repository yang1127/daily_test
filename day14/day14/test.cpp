//#include<string>
//#include<iostream>
//
//using namespace std;
//
//string reverseString(string s) 
//{
//	if (s.empty())
//		return s; 
//	size_t start = 0;
//	size_t end = s.size() - 1;
//	while (start < end)
//	{
//		swap(s[start], s[end]);
//		++start; --end;
//	}
//	return s;
//}
//
//int main()
//{
//	string s; 
//	getline(cin,s);
//	cout<<reverseString(s)<<endl;
//
//	system("pause");
//	return 0;
//}


//贝壳
//1.回文串构造
//#include <iostream>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		string s;
//		cin >> s;
//		int size = s.length();
//		int half = size / 2;
//		int count = 0;
//		string rev(s);
//		reverse(rev.begin(), rev.end());
//		for (int i = 0; i < half; i++)
//		{
//			if (s[i] != rev[i])
//				count++;
//		}
//		cout << count << endl;
//	}	
//
//	system("pause");
//	return 0;
//}


//2.方格染色
//#include <iostream>
//#include <algorithm>
//#include <math.h>
//
//using namespace std;
//
//int func(int n)
//{
//	for (int i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//			return i;
//	}
//	return n;
//}
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			int a, b;
//			cin >> a >> b;
//
//			if (a == 1)
//				cout << func(b) << endl;
//			else if(b == 1)
//				cout << func(a) << endl;
//			else
//			{
//				int num = min(func(a), func(b));
//				cout << num << endl;
//			}
//		}
//	}
//
//	system("pause");
//	return 0;
//}

/*
//剪枝-斐波那契额

class Solution {
	//剪枝
private:
	unordered_map<int, int> m; //存放剪枝
public:
	int Fibonacci(int n) {
		if (n == 0 || n == 1)
			return n;
		if (n == 2)
			return 1;

		//n-2
		int ppre = 0;
		if (m.find(n - 2) == m.end())
		{
			//m没有找到剪枝的、插入
			ppre = Fibonacci(n - 2); //先求出相应的值
			m.insert({ n - 2, ppre }); //再插入
		}
		else //找到
			ppre = m[n - 2];

		//n-1
		int pre = 0; //剪枝 n-1可能包含n-2，将n-1置后
		if (m.find(n - 1) == m.end())
		{
			pre = Fibonacci(n - 1); //先求出相应的值
			m.insert({ n - 1, pre }); //再插入
		}
		else
			pre = m[n - 1];


		return ppre + pre;
	}
};
*/


//变态青蛙
//class Solution {
//public:
//	int jumpFloor(int number) {
//		if (number <= 2)
//			return number;
//
//		//f(n) = f(n - 1) + f (n - 2)
//		//f(0) = 1; f(1) = 1; f(2) = 2;
//		int* dp = new int[number + 1]; //开空间
//		dp[0] = 1;
//		dp[1] = 1;
//		dp[2] = 1;
//		for (int i = 2; i <= number; i++)
//			dp[i] = dp[i - 1] + dp[i - 2];
//
//		return dp[number];
//	}
//};


