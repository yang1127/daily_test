//�����б�
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string s, res;
//	while (getline(cin, s)) //��һ��
//	{
//		getline(cin, res); //�ڶ���
//		bool sta = false;
//		for (int i = 0; i < s.length(); i++) //������һ��
//		{
//			string t;
//			if (s[i] == '"') //Ϊ��"ʱ����������
//			{
//				i++;
//				while (i < s.length() && s[i] != '"')//û�б������Ҳ�Ϊ��"����������
//				{
//					t += s[i]; //��""������ַ����洢��t��
//					i++;
//				}
//				if (t == res) //��t��resƥ����
//				{
//					sta = true; //��״̬��ʶΪ�棬���ҵ���
//					break;
//				}
//			}
//			else if (s[i] != ',') //����������֮����ַ���
//			{
//				while (i < s.length() && s[i] != ',') //Ϊ,����
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
//			cout << "Ignore" << endl; //�ҵ���
//		else
//			cout << "Important!" << endl; //û���ҵ�
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
//abcde a3
//aaaaaa aa
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string s, t; //s:��������t:С����
//	while (cin >> s >> t)
//	{
//		int res = 0;
//		size_t pos = 0;//string::sie_type pos
//		//������ s �в��� t ���ɣ�ֱ����Ҳ�Ҳ��� t
//		while ((pos = s.find(t, pos)) != string::npos) //string::npos��ʾ�����ڵ�λ��
//		{
//			pos += t.size(); //����t������ĳ���
//			++res; //����
//		}
//		cout << res << endl;
//	}
//
//	system("pause");
//	return 0;
//}


////c����strstr�ַ���ƥ����
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
//		num = 0; //����
//		tmp = s; //��s��ֵ��tmp
//		len_t = strlen(t); //t�ĳ���
//		while (tmp = strstr(tmp, t))  //t�Ӵ���tmp�ַ���ƥ��
//		{
//			num++; //ƥ��ɹ�һ�μ�1��
//			tmp += len_t; //tmp��+t�Ӵ��ĳ��ȣ���tmp����t����һ��λ�ü���ƥ��
//		}
//		cout << num << endl;
//	}
//	
//	system("pause");
//	return 0;
//}


//��������
////���˴�һ���˿�ʼ��   
////�����ÿ�����һ������
////����������:1 1 2 3 5 8...
//
//#include <iostream>
//#define MAX 81 
//
//using namespace std;
//
//void solve(long long num[]) //from-toÿ������
//{
//	for (int i = 2; i < MAX; i++)
//	{
//		num[i] = num[i - 1] + num[i - 2];
//	}
//}
//
////��from-to������
//long long sum_traversal(long long num[], int from, int to) //�ⷨ1���ñ���������
//{
//	long long ans = 0;
//	for (int i = from - 1; i < to; i++) //�������±��from-1������to-1
//	{
//		ans += num[i];
//	}
//	return ans;
//}
//
//long long sum_formula(long long num[], int from, int to) //�ⷨ2���ù�ʽ���
//{
//	return num[to + 1] - num[from]; //��to + 2����±���to + 1����from + 2 - 1����±���from
//}
//
//int main()
//{
//	int from, to;
//	long long num[MAX] = { 1, 1 }; // from�±��0��ʼ
//	solve(num);
//	while (cin >> from >> to)
//	{
//		cout << sum_formula(num, from, to) << endl;
//	}
//
//	system("pause");
//	return 0;
//}

////���
//#include <iostream>
//#include <vector>
//using namespace std;
//
////�������һ�����͵ı�������
////ͨ����������Ϊ���������ѡ�񡢲�ѡ��
////���ѡ��ǰֵ����ô�����ռ��val����Ҫ�ӵ�����
////�����ѡ����ô����������һ�ε�
////
////�ݹ��˳�������m = 0����ʾ��ǰ��������ǡ�þ��ǽ������Ҫ��ӡ
////m<0����ʾ��ǰ�����Ѿ����㣬���Ա����������ֲ�������Ҫ��
////begin > n��ʾһ�ֱ������
//
//void Func(int begin, int n, int m, vector<int> v)
//{
//	//n:��1��n������
//	//m:��ʾ�����ռ�
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
//	//Ҫ
//	v.push_back(begin);
//	Func(begin + 1, n, m - begin, v);
//
//	//��Ҫ
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
