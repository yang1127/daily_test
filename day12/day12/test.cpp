#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <stdlib.h>
//
//int rabbit(int n)
//{
//	if (n == 1 || n == 2) // >2�²Ż���С����
//		return 1;
//
//	else
//		return rabbit(n - 1) + rabbit(n - 2); //ͨ��������Կ�����ÿ����������Ŀ����쳲���������
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//
//	printf("%d\n", rabbit(n));//�ݹ����
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
//	if (n < 2) //��ƿ��С��2���޷��һ�
//	{
//		return;
//	}
//	else 
//	{
//		if (n == 2) //��ƿ������2���ɽ�һƿ�����3��ƿ�һ�һƿ���Ĺ黹
//		{
//			num++;
//		}
//
//		if (n >= 3) //��ƿ������3�ɶһ����һ����ƿ����n-3
//		{           //���ڻ�������ˮ������ֵ�1����ƿ���ܿ�ƿ��Ϊn+1;ʵ�ʻ�һ�κ󣬿�ƿ������Ϊn-2
//			num++;  //�ȶһ�һ�κ��꣬�ټ�����ʣ������ƿ�Ƿ�����
//			fun(n - 2);
//		}
//	}
//}


//int main()
//{
//	int n; //��ƿ����
//	while (cin >> n) 
//	{
//		fun(n);
//		cout << num << endl; //�һ�����
//		num = 0; //ÿ����һ�ο�ƿ������һ��������0
//	}
//
//	system("pause");
//	return 0;
//}

//����ά��
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
//		sort(v.begin(), v.end(), greater<int>()); //greater��ʾ�������ʹӴ�С����less��ʾ�������ʹ�С��������
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

//��С��λ��
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

//����Ĵ�
//class Solution {
//public:
//	int longestPalindrome(string s) {
//		unordered_map<char, int> count; //unordered_map <key, value>
//		int ans = 0;
//		for (char c : s)  //ͳ���ַ����ֵĴ���
//			++count[c];
//		for (auto p : count)  //�������
//		{
//			int v = p.second;
//			ans += v / 2 * 2; //�ַ����ֵ�ż������
//			if (v % 2 == 1 and ans % 2 == 0) //����һ�ε��ַ�ֻ����һ���ŵ��м�λ�ã�ż��������������
//				++ans;
//		}
//		return ans;
//	}
//};

//��̻��Ĵ�
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
//		string rev(s); //��s����rev��
//		reverse(rev.begin(), rev.end()); //��rev��ת
//		for (int i = 0; i < n; i++)
//		{
//			//���Ӵ��Ƿ�ƥ��
//			if (s.substr(0, n - i) == rev.substr(i))  //s.substr(pos, n) pos - �Ӵ�λ�ÿ�ʼ���� n - ���� n ���ȵ��ַ���
//			{
//				cout << rev.substr(0, i) + s << endl; //�ҵ���Ļ����Ӵ����˳�������̵Ļ��Ĵ�
//				break;
//			}
//		}
//	}
//
//	return 0;
//}

//	/*˼·  ����ڴ� abcd ��Ҫ�����Ϊ���Ĵ�
//	  ��ô�Ȱ������� Ȼ�����ǰ�� ��Ȼ�ǻ�����
//								   abcd
//							   dcba
//							   dcbaabcd ->�ǻ���
//	  �������Ƿ��ָ���û��Ҫ����ô����ǰ�� ��Ϊabcd��ǰ׺��dcab�ĺ�׺���غ�(��a) ����Ϊ��ֻ������ٵ��ַ�,��ǰ��ֻ��Ҫ��Ӳ��ظ��ļ���
//									abcd
//								 dcba
//								 dcbabcd ->��Ȼ�ǻ���
//	 //Ϊ����ӵ����٣�����Ҫ�ҵ�dcba�ĺ�׺��abcd��ǰ׺�غϵĲ��֣������غϲ�����󼴿�
//	 //�ʶ����뵽kmp�㷨������next�������������һ������ǰ׺�ͺ�׺��ͬ�ĳ��ȵ����ֵ
//	 //����ƴ�����ַ��� abcddcba �������������ǰ׺�ǲ��ܳ����е�ģ������һ�������ַ�����
//	 // ��Ϊ abcd#dcba ������ƥ��ǰ��׺ʱ����ͬ���Ⱦ�һ�����ᳬ��#����
//	 // ���������ת��Ϊ�� ��abcd#dcba��next���� ��֪�ô���ǰ��׺��ͬʱ����󳤶�Ϊ1
//				��ʱ�����ͬǰ��׺��Ϊa   ��  a
//									 ���԰Ѻ�벿�ֳ�ȥ�ص��Ĳ���ƴ�ӵ�ǰ�벿�ּ���
//							�𰸾���  dcbabcd
//									 �󹦸��!
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
//		// �� s + reverse(s)��next����
//		// next����������s[0:x] ƥ�䵽��res[n-x:n2]
//		// ���ǰ׺���׺��ȣ�ͬʱ��׺��ǰ׺�ķ�ת--->ǰ׺�ǻ��ĵģ�
//		// ���ԭ�ַ�����ʼ�������֮�󣬽�֮����ַ�����ת�ԭ�ַ����õ�һ�����Ĵ�
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

//����Ĵ�
//������ -��ʱ
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



