//树根
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int num;
//	int num1 = 0;
//	int sum = 0;
//	cin >> num;
//
//	while (num > 1)
//	{
//		num1 = num % 10;
//		num = num / 10;
//		sum = num + num1;
//
//		if (sum < 10)
//		{
//			cout << sum << endl;
//			break;
//		}
//		else
//		{
//			num = sum;
//			sum = 0;
//		}
//	}
//
//	system("pause");
//	return 0;
//}

//#include<iostream>
//#include<string>
//
//using namespace std;
//
//int main()
//{
//	string s;
//	int i;
//	int sum;
//
//	while (1)
//	{
//		cin >> s;
//		if (s[0] == '0')
//			break;
//
//		for (i = 0, sum = 0; s[i] != '\0'; i++)
//		{
//			sum += s[i] - '0';
//		}
//
//		cout << (sum - 1) % 9 + 1 << endl;
//	}
//	
//	system("pause");
//	return 0;
//}

/*
//无重复最长子串
class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		//哈希+左右指针
		unordered_map<char, int> hash;
		int length = 0;

		for (int i = 0, j = 0; j < s.size(); j++)
		{
			hash[s[j]]++; //将哈希表中s[j]的计数 + 1, 即hash[s[j]] ++, 维护右指针向后移动
			while (hash[s[j]] > 1)
			{
				hash[s[i++]]--; //左指针向左移动，且左指针所指向的数的计数-1
			}
			length = max(length, j - i + 1);
		}
		return length;
	}
};
*/

/*
class Solution {
public:
	int longestConsecutive(vector<int>& nums) {
		unordered_set<int> un_set;
		for (auto e : nums)
		{
			un_set.insert(e);  //放到哈希中，去重
		}

		int maxlength = 0, length = 0;
		for (auto e : un_set) //遍历un_set
		{
			if (!(un_set.count(e - 1))) //判断这个数的前一个是否在哈希中
			{
				length = 1;
				int num = e;

				while (un_set.count(num + 1)) //找该数为起始的最长连续序列，连续的某数不在哈希中，则终止
				{
					num += 1;
					length += 1;
				}
			}
			maxlength = max(maxlength, length);
		}
		return maxlength;
	}
};
*/