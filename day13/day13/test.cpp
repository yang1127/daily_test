//#include<iostream>
//#include<string>
//
//using namespace std;
//
//int main()
//{
//	string a, b; 
//	while (cin >> a >> b) //输入两个字符串
//	{
//		if (a.length() > b.length())
//			swap(a, b); //题目要求输出短串中，最先出现的那个，即使第一个串为短串
//
//		string c; //两个串中最长公共子串
//		for (int i = 0; i < a.length(); i++)
//		{
//			for (int j = i; j < a.length(); j++)
//			{                                         //从i所指的字符处，j - i + 1的长度
//				string tmp = a.substr(i, j - i + 1);  //substr(start,length) 包含从start（包括start所指的字符）处开始的length个字符
//													  //如果没有指定length，那么返回的字符串包含从start到结尾的字符 
//				int d = b.find(tmp); //在长串中找短串中的子串
//				if (d < 0)  ///若没有找到，则跳出
//					break;
//
//				else if(c.length() < tmp.length()) //在找到的公共子串中取最大的子串
//					c = tmp;
//			}
//		}
//		cout << c << endl;
//	}
//
//	system("pause");
//	return 0;
//}


//#include <iostream> 
//using namespace std;
//
//int main()
//{
//	int month; 
//	while (cin >> month)
//	{ 
//		int first = 1; 
//		int second = 1; 
//		int result; 
//		for (int i = 3; i <= month; ++i)
//		{ 
//			result = first + second;
//			first = second;
//			second = result;
//		}
//		cout << result << endl; 
//	}
//	return 0;
//}
