//字符串中找出连续最长的数字串
#include <iostream>
#include <string>
using namespace std;

//思路：用a去找连续的数字串，如果遇到不是数字字符，则表示一个连续的数字串结束
//则将数字串跟之前的数字串比较，如果更长，则更新更长的数字串更新到b中，即b为连续最长的数字串
int main()
{
	string s; //字符串
	string a; //找连续的数字串
	string b; //连续最长的字符串
	cin >> s; //输入字符串
	for (int i = 0; i <= s.size(); i++) //遍历字符串
	{
		if (s[i] >= '0' && s[i] <= '9') //找数字串
		{
			a = a + s[i]; 
		}
		else
		{
			if (b.size() < a.size()) //比较a,b哪个数字串大
			{
				b = a;
			}
			else
				a.clear(); //将a释放
		}
	}

	cout << b;
	system("pause");
	return 0;
}

////数组中有一个数字出现的次数超过数组长度的一半，请找出这个数字。
////例如输入一个长度为9的数组{1,2,3,2,2,2,5,4,2}。
////由于数字2在数组中出现了5次，超过数组长度的一半，因此输出2。如果不存在则输出0。
//
////思路：将数组进行排序后，若存在，则中间位置的数即为要找的数，不存在则返回0
////例如：1,2,3,2,2,2,5,4,2 排序后为1,2,2,2,2,2,3,4,5,即为2
//class Solution {
//public:
//	int MoreThanHalfNum_Solution(vector<int> numbers)
//	{
//		if (numbers.empty()) 
//			return 0;
//
//		sort(numbers.begin(), numbers.end()); 
//		int middle = numbers[numbers.size() / 2];
//
//		int count = 0; 
//		for (int i = 0; i < numbers.size(); ++i)
//		{
//			if (numbers[i] == middle) 
//				++count;
//		}
//
//		return (count > numbers.size() / 2) ? middle : 0;
//	}
//};
