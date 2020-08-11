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

