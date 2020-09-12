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

/*

//快排
#include <iostream>

using namespace std;

//三数取中
int MidNum(int* a, int begin, int end)
{
	int mid = (begin + end) >> 1;
	if (a[begin] < a[end])
	{
		if (a[end] < a[mid])
			return end;
		else if (a[begin] < a[mid])
			return mid;
		else
			return begin;
	}
	else  // a[begin] > a[end]
	{
		if (a[begin] < a[mid])
			return begin;
		else if (a[end] > a[mid])
			return end;
		else
			return mid;
	}
}

void Swap(int* p1, int* p2)
{
	int tmp = *p2;
	*p2 = *p1;
	*p1 = tmp;
}

int Sort(int* a, int begin, int end)
{
	int mid = MidNum(a, begin, end);
	Swap(&a[mid], &a[end]);

	int key = a[end];
	while (begin < end)
	{
		while (begin < end && a[begin] <= key)
			++begin;
		a[end] = a[begin];

		while (begin < end && a[end] >= key)
			--end;
		a[begin] = a[end];
	}
	a[begin] = key;

	return begin;
}

void QuickSort(int* a, int begin, int end)
{
	if (begin >= end)
		return;

	int key_index = Sort(a, begin, end);
	QuickSort(a, begin, key_index - 1);
	QuickSort(a, key_index + 1, end);
}

int main()
{
	int a[] = { 8, 5, 2, 7, 9, 6, 1, 3 };
	QuickSort(a, 0, sizeof(a) / sizeof(a[0]) - 1);
	for (auto e : a)
	{
		cout << e << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}
*/

/*
//2020/09/10 深信服
//积水问题
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int w, l;
	cin >> w >> l;
	vector<int> v(l);
	for (int i = 0; i < l; i++)
	{
		cin >> v[i];
	}

	if (v.size() == 0)
		return 0;

	int left = 0;
	int right = l - 1;
	int minleft = v[left];
	int minright = v[right];
	int water = 0;
	int relwater = 0;

	while (left <= right)
	{
		minleft = min(v[left], minleft); //当前高度与左边最低高度
		int minright = min(v[right], minright);

		if (minleft < minright)
		{
			water += v[left] - minleft;
			left++;
		}
		else
		{
			water += v[right] - minright;
			right--;
		}
	}

	relwater = water * w;
	cout << relwater << endl;

	system("pause");
	return 0;
}
*/


//9.12 网易-有道

//最多的回文
//暴力法
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string s;
	while (cin >> s)
	{
		int count = 0;
		int n = s.size();

		string rev(s);
		reverse(rev.begin(), rev.end());
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				string tmp1 = s.substr(i, (j - i) + 1); //substr(pos, n) pos:从该位置起 n:子串长度
				string tmp2 = rev.substr((n - j) - 1, (j - i) + 1);
				if (tmp1 == tmp2)
					count++;
			}
		}

		cout << count << endl;
	}

	system("pause");
	return 0;
}


















