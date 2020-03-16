////抄送列表
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s1, s2;
//	while (getline(cin, s1))
//	{
//		getline(cin, s2); //s2与s1比较 看是否匹配
//	}
//
//	system("pause");
//	return 0;
//}
//
//
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string s, res;
//	while (getline(cin, s))
//	{
//		getline(cin, res);
//		bool sta = false;
//		for (int i = 0; i < s.length(); i++)
//		{
//			string t;
//			if (s[i] == '"')
//			{
//				i++;
//				while (i < s.length() && s[i] != '"')
//				{
//					t += s[i];
//					i++;
//				}
//				if (t == res)
//				{
//					sta = true;
//					break;
//				}
//			}
//			else if (s[i] != ',')
//			{
//				while (i < s.length() && s[i] != ',')
//				{
//					t += s[i];
//					i++;
//				}
//				if (t == res)
//				{
//					sta = true;
//					break;
//				}
//			}
//		}
//		if (sta == true)
//			cout << "Ignore" << endl;
//		else
//			cout << "Important!" << endl;
//	}
//	return 0;
//}


////数据库连接池
//#include <iostream>
//#include <string>
//#include <queue>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		int ConnectNum = 0;
//		queue<char> q; //使用队列实现
//		for (int i = 0; i < n; i++)
//		{
//			char id;
//			string op;
//			cin >> id;
//			cin >> op;
//			if (op == "connect") //若操作为连接则入队
//				q.push(id);
//			else
//			{
//				//队列存的数与连接数比较，若队列数大于连接数则将队列数给连接数
//				ConnectNum = q.size() > ConnectNum ? q.size() : ConnectNum; 
//				q.pop(); //出队列
//			}
//		}
//		cout << ConnectNum << endl;
//	}
//	return 0;
//}

//用栈也可以实现，但栈先进后出
//在连续操作时，出栈并非该id 对应的该 op
//题目只需统计需要连接数，所以可用stack操作
//#include <iostream>
//#include <string>
//#include <stack>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		int ConnectNum = 0;
//		char id;
//		string op;
//		stack<char> s;
//
//		for (int i = 0; i < n; i++)
//		{
//			cin >> id >> op;
//			if (op == "connect")
//				s.push(id);
//			else
//			{
//				ConnectNum = s.size() > ConnectNum ? s.size() : ConnectNum;
//				s.pop();
//			}
//		}
//		cout << ConnectNum << endl;
//	}
//
//	system("pause");
//	return 0;
//}


////发邮件
////全部发错的情况
////2 1
////3 2
////4 9  3 * 3 = 3 * (2 + 1)
////5 44 4 * 11 + 4 * (9 + 2)
////...
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	long long int rel[20] = {0, 0, 1}; //long long int
//	while (cin >> n )
//	{
//		for (int n = 3; n <= 20; n++)
//		{
//			rel[n] = (n - 1) * (rel[n - 1] + rel[n - 2]); //坐标从0开始
//		}
//		cout << rel[n] << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//剪花布条
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string s, t;
//	while (cin >> s >> t)
//	{
//		int res = 0;
//		size_t pos = 0;
//		//依次在 s 中查找 t 即可，直到再也找不到 t
//		while ((pos = s.find(t, pos)) != string::npos)
//		{
//			pos += t.size(); //跳过t串整体的长度
//			++res; //计数
//		}
//		cout << res << std::endl;
//	}
//
//	system("pause");
//	return 0;
//}


//客似云来

#include <iostream>
#define MAX 83 

using namespace std;

void solve(long long num[])
{
	for (int i = 2; i < MAX; i++)
	{
		num[i] = num[i - 1] + num[i - 2];
	}
}

long long sum_traversal(long long num[], int from, int to) //解法1：用遍历求和求解
{
	long long ans = 0;
	for (int i = from - 1; i < to; i++) //让数组下标从from - 1遍历到to - 1
	{
		ans += num[i];
	}
	return ans;
}

long long sum_formula(long long num[], int from, int to) //解法2：用公式求解
{
	return num[to + 1] - num[from]; //第to + 2项的下标是to + 1，第from + 2 - 1项的下标是from
}

int main()
{
	int from, to;
	long long num[MAX] = { 1, 1 };
	solve(num);
	while (cin >> from >> to)
	{
		cout << sum_formula(num, from, to) << endl; 
	}

	system("pause");
	return 0;
}
