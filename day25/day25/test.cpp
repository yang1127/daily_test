////�����б�
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s1, s2;
//	while (getline(cin, s1))
//	{
//		getline(cin, s2); //s2��s1�Ƚ� ���Ƿ�ƥ��
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


////���ݿ����ӳ�
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
//		queue<char> q; //ʹ�ö���ʵ��
//		for (int i = 0; i < n; i++)
//		{
//			char id;
//			string op;
//			cin >> id;
//			cin >> op;
//			if (op == "connect") //������Ϊ���������
//				q.push(id);
//			else
//			{
//				//���д�������������Ƚϣ��������������������򽫶�������������
//				ConnectNum = q.size() > ConnectNum ? q.size() : ConnectNum; 
//				q.pop(); //������
//			}
//		}
//		cout << ConnectNum << endl;
//	}
//	return 0;
//}

//��ջҲ����ʵ�֣���ջ�Ƚ����
//����������ʱ����ջ���Ǹ�id ��Ӧ�ĸ� op
//��Ŀֻ��ͳ����Ҫ�����������Կ���stack����
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


////���ʼ�
////ȫ����������
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
//			rel[n] = (n - 1) * (rel[n - 1] + rel[n - 2]); //�����0��ʼ
//		}
//		cout << rel[n] << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//��������
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
//		//������ s �в��� t ���ɣ�ֱ����Ҳ�Ҳ��� t
//		while ((pos = s.find(t, pos)) != string::npos)
//		{
//			pos += t.size(); //����t������ĳ���
//			++res; //����
//		}
//		cout << res << std::endl;
//	}
//
//	system("pause");
//	return 0;
//}


//��������

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

long long sum_traversal(long long num[], int from, int to) //�ⷨ1���ñ���������
{
	long long ans = 0;
	for (int i = from - 1; i < to; i++) //�������±��from - 1������to - 1
	{
		ans += num[i];
	}
	return ans;
}

long long sum_formula(long long num[], int from, int to) //�ⷨ2���ù�ʽ���
{
	return num[to + 1] - num[from]; //��to + 2����±���to + 1����from + 2 - 1����±���from
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
