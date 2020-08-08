#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <stdlib.h>
//
//int rabbit(int n)
//{
//	if (n == 1 || n == 2) // >2月才会生小兔子
//		return 1;
//
//	else
//		return rabbit(n - 1) + rabbit(n - 2); //通过计算可以看出，每月兔子总数目满足斐波那契数列
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//
//	printf("%d\n", rabbit(n));//递归调用
//
//	system("pause");
//	return 0;
//}



//#include <stdlib.h>
//#include <stdio.h>
//
//int main()
//{
//	int month;
//	scanf("%d", &month);
//
//	while (month)
//	{
//		int i, sum;
//		int a = 1, b = 1;
//		if (month > 2)
//		{
//			for (i = 3; i <= month; i++)
//			{
//				sum = a + b;
//				a = b;
//				b = sum;
//			}
//		}
//		printf("%d", sum);
//	}
//
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int num = 0;
//void fun(int n) 
//{
//	if (n < 2) //空瓶数小于2，无法兑换
//	{
//		return;
//	}
//	else 
//	{
//		if (n == 2) //空瓶数等于2，可借一瓶喝完后，3空瓶兑换一瓶满的归还
//		{
//			num++;
//		}
//
//		if (n >= 3) //空瓶数大于3可兑换，兑换后空瓶数量n-3
//		{           //由于换来的汽水喝完后又得1个空瓶，总空瓶数为n+1;实际换一次后，空瓶数量变为n-2
//			num++;  //先兑换一次喝完，再继续看剩余空余空瓶是否满足
//			fun(n - 2);
//		}
//	}
//}


//int main()
//{
//	int n; //空瓶总数
//	while (cin >> n) 
//	{
//		fun(n);
//		cout << num << endl; //兑换次数
//		num = 0; //每输入一次空瓶，将上一次数据置0
//	}
//
//	system("pause");
//	return 0;
//}

//序列维护
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <functional>
//
//using namespace std;
//
//int main()
//{
//	int n, q;
//	vector<int> v;
//	while (cin >> n >> q)
//	{
//		v.resize(n + 1);
//		for (int i = 0; i < n; i++)
//			cin >> v[i];
//
//		sort(v.begin(), v.end(), greater<int>()); //greater表示内置类型从大到小排序，less表示内置类型从小到大排序。
//		while (q--)
//		{
//			int x;
//			int count = 0;
//			cin >> x;
//			for (int j = 0; j < n; j++)
//			{
//				if (v[j] >= x)
//				{
//					v[j] -= 1;
//					count++;
//				}
//			}
//			cout << count << endl;
//		}
//	}
//
//	return 0;
//}

//最小数位和
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	int x;
//	while (cin >> n)
//	{
//		while (n--)
//		{
//			cin >> x;
//			if (x % 9)
//				cout << x % 9;
//			x -= x % 9;
//			for (int i = 1; i <= x / 9; i++)
//				cout << "9";
//			cout << endl;
//		}
//	}
//	return 0;
//}

//最长回文串
//class Solution {
//public:
//	int longestPalindrome(string s) {
//		unordered_map<char, int> count; //unordered_map <key, value>
//		int ans = 0;
//		for (char c : s)  //统计字符出现的次数
//			++count[c];
//		for (auto p : count)  //处理次数
//		{
//			int v = p.second;
//			ans += v / 2 * 2; //字符出现的偶数次数
//			if (v % 2 == 1 and ans % 2 == 0) //出现一次的字符只保留一个放到中间位置，偶数次数放置两边
//				++ans;
//		}
//		return ans;
//	}
//};

//最短回文串
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string s;
//	while (cin >> s)
//	{
//		int n = s.size();
//		string rev(s); //将s串给rev串
//		reverse(rev.begin(), rev.end()); //将rev翻转
//		for (int i = 0; i < n; i++)
//		{
//			//看子串是否匹配
//			if (s.substr(0, n - i) == rev.substr(i))  //s.substr(pos, n) pos - 从此位置开始拷贝 n - 拷贝 n 长度的字符串
//			{
//				cout << rev.substr(0, i) + s << endl; //找到最长的回文子串则退出，即最短的回文串
//				break;
//			}
//		}
//	}
//
//	return 0;
//}

//	/*思路  如对于串 abcd 想要将其变为回文串
//	  那么先把它逆序 然后放在前面 自然是回文了
//								   abcd
//							   dcba
//							   dcbaabcd ->是回文
//	  但是我们发现根本没必要放这么多在前面 因为abcd的前缀和dcab的后缀有重合(如a) 所以为了只添加最少的字符,在前方只需要添加不重复的即可
//									abcd
//								 dcba
//								 dcbabcd ->依然是回文
//	 //为了添加的最少，就需要找到dcba的后缀和abcd的前缀重合的部分，且让重合部分最大即可
//	 //故而联想到kmp算法，它的next数组就是用来求一个串的前缀和后缀相同的长度的最大值
//	 //所以拼接起字符串 abcddcba 但是我们所求的前缀是不能超过中点的，因此用一个特殊字符隔开
//	 // 即为 abcd#dcba 这样在匹配前后缀时，相同长度就一定不会超过#号了
//	 // 这样问题就转化为了 求abcd#dcba的next数组 易知该串的前后缀相同时的最大长度为1
//				此时的最长相同前后缀即为a   和  a
//									 所以把后半部分除去重叠的部分拼接到前半部分即可
//							答案就是  dcbabcd
//									 大功告成!
//
//	 */
//
//class Solution {
//public:
//	string shortestPalindrome(string s) {
//		int n = s.size();
//		string rs = s;
//		reverse(rs.begin(), rs.end());
//
//		// 求 s + reverse(s)的next数组
//		// next数组可以求出s[0:x] 匹配到的res[n-x:n2]
//		// 因此前缀与后缀相等，同时后缀是前缀的反转--->前缀是回文的，
//		// 求出原字符串开始的最长回文之后，将之后的字符串反转填到原字符串得到一个回文串
//		string st = s + "$" + rs;
//		int n2 = st.size();
//		vector<int> next(n2, 0);
//		for (int i = 1; i < n2; i++) 
//		{
//			int t = next[i - 1];
//			while (t > 0 && st[t] != st[i]) 
//				t = next[t - 1];
//
//			if (st[t] == st[i]) 
//				t++;
//
//			next[i] = t;
//		}
//
//		int maxLen = next[n2 - 1];
//		int sy = n - maxLen;
//		string pre = rs.substr(0, sy);
//		return pre + s;
//	}
//};

//最长回文串
//暴力法 -超时
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string s;
//	while (cin >> s)
//	{
//		string rel = "";
//		for (int i = 0; i < s.length(); i++)
//		{
//			string tmp = "";
//			for (int j = i; j < s.length(); j++)
//			{
//				tmp += s[j];
//				string rev(tmp);
//				reverse(rev.begin(), rev.end());
//				if (tmp == rev)
//					rel = rel.length() > tmp.length() ? rel : rev;
//			}
//		}
//		cout << rel << endl;
//	}
//	system("pause");
//	return 0;
//}



