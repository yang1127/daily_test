//抄送列表
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string s, res;
//	while (getline(cin, s)) //第一行
//	{
//		getline(cin, res); //第二行
//		bool sta = false;
//		for (int i = 0; i < s.length(); i++) //遍历第一行
//		{
//			string t;
//			if (s[i] == '"') //为左"时继续往下走
//			{
//				i++;
//				while (i < s.length() && s[i] != '"')//没有遍历完且不为右"继续往下走
//				{
//					t += s[i]; //将""里面的字符串存储到t中
//					i++;
//				}
//				if (t == res) //若t与res匹配上
//				{
//					sta = true; //将状态标识为真，则找到了
//					break;
//				}
//			}
//			else if (s[i] != ',') //遍历两逗号之间的字符串
//			{
//				while (i < s.length() && s[i] != ',') //为,跳出
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
//			cout << "Ignore" << endl; //找到了
//		else
//			cout << "Important!" << endl; //没有找到
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
//abcde a3
//aaaaaa aa
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string s, t; //s:花布条、t:小饰条
//	while (cin >> s >> t)
//	{
//		int res = 0;
//		size_t pos = 0;//string::sie_type pos
//		//依次在 s 中查找 t 即可，直到再也找不到 t
//		while ((pos = s.find(t, pos)) != string::npos) //string::npos表示不存在的位置
//		{
//			pos += t.size(); //跳过t串整体的长度
//			++res; //计数
//		}
//		cout << res << endl;
//	}
//
//	system("pause");
//	return 0;
//}


////c语言strstr字符串匹配解决
//#include <iostream>
//#include <string>
//#include <assert.h>
//
//using namespace std;
//
//int main()
//{
//	char s[1000], t[1000];
//	char* tmp;
//	//strstr:char* strstr(const char* str1, const char* str2)
//	int len_t, num;
//	while (cin >> s >> t)
//	{
//		num = 0; //次数
//		tmp = s; //将s赋值给tmp
//		len_t = strlen(t); //t的长度
//		while (tmp = strstr(tmp, t))  //t子串与tmp字符串匹配
//		{
//			num++; //匹配成功一次加1次
//			tmp += len_t; //tmp串+t子串的长度，从tmp串中t的下一个位置继续匹配
//		}
//		cout << num << endl;
//	}
//	
//	system("pause");
//	return 0;
//}


//客似云来
////客人从一个人开始的   
////两天后每天带来一个新人
////总人数满足:1 1 2 3 5 8...
//
//#include <iostream>
//#define MAX 81 
//
//using namespace std;
//
//void solve(long long num[]) //from-to每天人数
//{
//	for (int i = 2; i < MAX; i++)
//	{
//		num[i] = num[i - 1] + num[i - 2];
//	}
//}
//
////求from-to总人数
//long long sum_traversal(long long num[], int from, int to) //解法1：用遍历求和求解
//{
//	long long ans = 0;
//	for (int i = from - 1; i < to; i++) //让数组下标从from-1遍历到to-1
//	{
//		ans += num[i];
//	}
//	return ans;
//}
//
//long long sum_formula(long long num[], int from, int to) //解法2：用公式求解
//{
//	return num[to + 1] - num[from]; //第to + 2项的下标是to + 1，第from + 2 - 1项的下标是from
//}
//
//int main()
//{
//	int from, to;
//	long long num[MAX] = { 1, 1 }; // from下标从0开始
//	solve(num);
//	while (cin >> from >> to)
//	{
//		cout << sum_formula(num, from, to) << endl;
//	}
//
//	system("pause");
//	return 0;
//}

////求和
//#include <iostream>
//#include <vector>
//using namespace std;
//
////这道题是一个典型的背包问题
////通过搜索，分为两种情况：选择、不选择
////如果选择当前值，那么背包空间和val都需要加到背包
////如果不选择，那么背包就是上一次的
////
////递归退出条件：m = 0，表示当前背包里面恰好就是结果，需要打印
////m<0，表示当前背包已经不足，所以背包里面数字并不满足要求
////begin > n表示一轮遍历完毕
//
//void Func(int begin, int n, int m, vector<int> v)
//{
//	//n:从1到n个数字
//	//m:表示背包空间
//
//	if (m == 0)
//	{
//		for (int i = 0; i < v.size(); ++i)
//			i == 0 ? cout << v[i] : cout << " " << v[i];
//
//		cout << endl;
//		return;
//	}
//
//	if (m < 0 || begin > n)
//		return;
//
//	//要
//	v.push_back(begin);
//	Func(begin + 1, n, m - begin, v);
//
//	//不要
//	v.pop_back();
//	Func(begin + 1, n, m, v);
//}
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	
//	vector<int> v;
//	int begin = 1;
//	Func(begin, n, m, v);
//
//	system("pause");
//	return 0;
//}
