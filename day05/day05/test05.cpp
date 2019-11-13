//统计回文
//#include <iostream>
//#include <string>
//using namespace std;
//
//bool plalindrome(string& s3) //判断是否为回文数
//{
//	int begin = 0;
//	int end = s3.size() - 1;
//
//	while (begin < end)
//	{
//		if (s3[begin] != s3[end])
//		{
//			return false;
//		}
//
//		begin++;
//		end--;
//	}
//	return true;
//}
//
//int main()
//{
//	string s1;
//	string s2;
//	getline(cin, s1); //A字符串
//	getline(cin, s2); //插入B字符
//	int count = 0;
//	for (int i = 0; i < s1.size(); i++) //遍历s1
//	{
//		string s3 = s1;
//		s3.insert(i, s2); //将s2的字符插入新s3字符串中
//		if (plalindrome(s3))  //如果是回文，加一次
//		{
//			count++; //回文次数
//		}
//	}
//	printf("%d ", count);
//
//	system("pause");
//	return 0;
//}


