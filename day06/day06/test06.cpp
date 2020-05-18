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
//using namespace std;
//
//int main()
//{
//	int n;
//	while (cin >> n) 
//	{
//		if (n == 0) 
//			break;
//		long total = pow(5, n) - 4;
//		long left = pow(4, n) + n - 4;
//		cout << total << " " << left << endl;
//	}
//	system("pause");
//	return 0;
//}

////最小不可组合数
//#include <iostream>
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
//};

////有假币
//#include <iostream>
//using namespace std;
//
//int main() 
//{
//	int n;
//	while (cin >> n)
//	{
//		int count = 0;
//		if (n == 0)
//			break;
//		while (n >= 2) 
//		{
//			if (n % 3) //不可以整除则取最差情况：最重的一份是 n/3 + 1个金币
//				n = n / 3 + 1;
//			else //可以整除在直接整除，能够获取到最重的一份
//				n /= 3;
//
//			count++;
//		}
//		cout << count << endl;
//	}
//	system("pause");
//	return 0;
//}


//字符串反转
//#include <iostream>
//#include <string>
//#include <algorithm> //reverse
//using namespace std;
//
//int main()
//{
//	string s;
//	while (cin >> s)
//	{
//		reverse(s.begin(), s.end());
//		cout << s << endl;
//	}
//	system("pause");
//	return 0;
//}

////反向迭代器
//#include<iostream> 
//#include <string>
//using namespace std;
//int main()
//{
//	string s;
//	while (cin >> s)
//	{
//		string s1(s.rbegin(), s.rend());
//		cout << s1 << endl;
//	}
//	system("pause");
//	return 0;
//}

//前后遍历、交换
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
//		++start;
//		--end;
//	}
//	return s;
//}
//
//int main()
//{
//	string s;
//	getline(cin, s);
//	cout << reverseString(s) << endl;
//	system("pause");
//	return 0;
//}

//最大公共子串
//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	int max = 0; //max初值.
//	string str1, str2;
//	while (cin >> str1 >> str2)
//	{
//		int len1 = str1.size();
//		int len2 = str2.size();
//		int max = 0;
//		//所有值初始化为0
//		vector<vector<int>> dp(len1, vector<int>(len2, 0));
//		//计算dp
//		for (int i = 0; i < len1; i++)
//		{
//			for (int j = 0; j < len2; j++)
//			{
//				//如果当前结尾的字符相等，则在dp[i-1][j-1]的基础上加1
//				if (str1[i] == str2[j])
//				{
//					if (i >= 1 && j >= 1)
//						dp[i][j] = dp[i - 1][j - 1] + 1;
//					else
//						dp[i][j] = 1;//dp[i][0] or dp[0][j]
//				}
//				//更新最大值
//				if (dp[i][j] > max)
//					max = dp[i][j];
//			}
//		}
//		cout << max << endl;
//	}
//    system("pause");
//	return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	string s1, s2;
//	while (cin >> s1 >> s2)
//	{
//		int maxlen = 0; //保留最大子串
//		for (int i = 0; i < s1.size(); i++)
//		{
//			for (int j = s1.size(); j > i; j--)
//			{
//				if (s2.find(s1.substr(i, j - i)) != string::npos)
//					maxlen = maxlen > j - i ? maxlen : j - i; //若j - i > maxlen，则maxlen更新为 j - i
//			}
//		}
//		cout << maxlen << endl;
//	}
//	system("pause");
//	return 0;
//}

//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	int T, n, k;
//	cin >> T; //T：要洗牌的牌组数量
//	while (T--)
//	{
//		cin >> n >> k; //k：洗牌的次数
//		int num = 2 * n; //n：2n即牌的数量
//		vector<int> table(num);
//		for (int i = 0; i < num; ++i)
//			cin >> table[i];
//		//洗k次牌
//		while (k--)
//		{
//			vector<int> n1(table.begin(), table.end());
//			for (int i = 0; i < n; ++i)
//			{
//				//如果当前数小于等于n（即在左手），则他下次出现的位置是 2*当前位置
//				//与之对应的当前位置 + n（即在右手）的牌,则他下次出现的位置是 2*当前位置 + 1
//				table[2 * i] = n1[i];
//				table[2 * i + 1] = n1[i + n];
//			}
//		}
//		for (int i = 0; i < num - 1; ++i)
//			cout << table[i] << " ";
//		cout << table[num - 1] << endl;
//	}
//	return 0;
//}

////输入：第一行输入歌曲数量，第二行输入指令
////输出：为两行，第一行为当前歌曲所在的列表，第二行为光标所指向的歌曲。
////
////思路：本题比较简单，通过解析指令，进行移动即可，分两种情况，歌曲数目不大于4和大于4的情况
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() 
//{
//	int n;//歌曲数量
//	string order;//命令
//	while (cin >> n >> order)
//	{
//		将n首歌曲编号1：n , num为光标当前所在歌曲的编号,first为当前屏幕显示页的第一首歌曲的编号
//		int num = 1, first = 1;
//		if (n <= 4) //歌曲总数不超过4时，所有歌曲一页即可显示完，不需翻页，first始终不变
//		{
//			for (int i = 0; i < order.size(); i++)
//			{
//				if (num == 1 && order[i] == 'U')
//					num = n;
//				else if (num == n && order[i] == 'D')
//					num = 1;
//				else if (order[i] == 'U')
//					num--;
//				else
//					num++;
//			}
//			for (int i = 1; i <= n - 1; i++)
//				cout << i << ' ';
//			cout << n << endl;
//			cout << num << endl;
//		}
//		else //歌曲总数大于4时，显示完全所有歌曲需要翻页，屏幕总是显示4首歌曲
//		{
//			for (int i = 0; i < order.size(); i++)
//			{
//				if (first == 1 && num == 1 && order[i] == 'U')//特殊翻页1
//				{
//					first = n - 3; num = n;
//				} 
//				else if (first == n - 3 && num == n && order[i] == 'D')//特殊翻页2
//				{
//					first = 1; 
//					num = 1;
//				} 
//				else if (first != 1 && num == first && order[i] == 'U')//一般翻页1
//				{
//					first--; 
//					num--;
//				} 
//				else if (first != n - 3 && num == first + 3 && order[i] == 'D')//一般翻页2
//				{
//					first++; 
//					num++;
//				} 
//				else if (order[i] == 'U')//其他情况1
//					num--; 
//				else//其他情况2
//					num++; 
//			}
//			for (int i = first; i < first + 3; i++)
//				cout << i << ' ';
//			cout << first + 3 << endl;
//			cout << num << endl;
//		}
//	}
//	return 0;
//}

//小易升级之路
//思路：两种情况
//< 累加
//> 求最大公约数、再累加

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int GCD(int a, int b) //辗转法求最大公约数
//{
//	int m;
//	while (m = a % b)
//	{
//		a = b;
//		b = m;
//	}
//	return b;
//}
//
//int main()
//{
//	int n, c; //怪物数量、小易初始值
//	vector <int> v;
//	while (cin >> n >> c)
//	{
//		v.resize(n);//分配大小
//		for (int i = 0; i < n; i++)
//			cin >> v[i]; //每个怪物的防御能力
//
//		for (int i = 0; i < n; i++)
//		{
//			if (v[i] < c)
//				c += v[i];
//			else
//			{
//				c += GCD(c, v[i]);
//			}
//		}
//		cout << c << endl;
//	}
//	return 0;
//}

//出现有一次
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	while (cin >> s)
	{
		int hashtable[256] = { 0 };//初始化为0
		for (auto& e : s)
			hashtable[e]++; //遍历将下标均置为1

		int i;
		for (i = 0; i < s.size(); i++)
		{
			if (hashtable[s[i]] == 1) //第一次出现
			{
				cout << s[i] << endl;
				break;
			}
		}
		if (i >= s.size()) //不存在时
			cout << -1 << endl;
	}
	return 0;
}