////素数
//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//int prime[10001];  //存储素数的数组 2-10000
//int primesize = 0; //记录素数的个数
//int mark[10001];   //标记是否是素数
//
//void init() 
//{
//	for (int i = 2; i <= 10000; i++)
//		mark[i] = false; //初始化，所有数目前均为素数
//
//	for (int i = 2; i <= 10000; i++)
//	{
//		if (false == mark[i])
//		{
//			prime[primesize++] = i; //记录素数
//			for (int j = i * i; j <= 10000; j += i) //从 i*i 开始，因为 i*k (k<i) 也是k的素因数的倍数
//			{
//				mark[j] = true; //置素数的倍数均为非素数
//			}
//		}
//	}
//}
//
//int main() 
//{
//	init(); //求2-10000之间的所有素数，记录在全局变量prime中
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		bool isOutput = false;
//		for (int i = 0; i < primesize; i++) 
//		{
//			if (prime[i] < n && prime[i] % 10 == 1) //1-n之间的素数，且个位为1
//			{
//				if (false == isOutput) 
//				{
//					isOutput = true;
//					printf("%d", prime[i]);
//				}
//				else 
//					printf(" %d", prime[i]);
//			}
//		}
//		if (false == isOutput)
//			printf("-1\n");
//		else 
//			printf("\n");
//	}
//	return 0;
//}


//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	vector<int> v1(12);
//	vector<vector<int> > v2(12);
//	for (int i = 0; i < 12; i++)
//	{
//		cin >> v1[i];
//
//	}
//	
//	cout << 12 << endl;
//
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <ctype.h>
//
//using namespace std;
//
//int main()
//{
//	string s;
//	getline(cin, s);
//	int count = 0;
//	string tmp = "";
//	tmp = s[0];
//	for (int i = 0; i < s.size(); i++)
//	{
//		s[i] = tolower(s[i]); //转小写
//		if (s[i] != ' ' && (s[i] < 'a' || s[i] > 'z'))
//		{
//			cout << "unkown name" << endl;
//			break;
//		}
//
//		if (s[i] == ' ')
//		{
//			count++;
//			s[i + 1] = tolower(s[i + 1]);
//			tmp += s[i + 1];
//		}
//	}
//
//	if (count < 2)
//		cout << s << endl;
//	else
//		cout << tmp << endl;
//
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string s1;
//	string s2;
//	cin >> s1;
//	cin >> s2;
//	int count = 0;
//	char arr[256] = { 0 };
//	for (int i = 0; i < s1.size(); i++)
//		arr[s1[i]]++;
//
//	string tmp = "";
//	for (int j = 0; j < s2.size(); j++)
//	{
//		if (arr[s2[j]] == 0)
//			tmp += s2[j];
//	}
//	count = s2.size() - tmp.size();
//
//	cout << count << endl;
//
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	while (n)
//	{
//		string s;
//		cin >> s;
//		int flag = 0;
//		char arr[256] = { 0 };
//
//		string tmp = s.substr(0, 3);
//		for (int i = 0; i < tmp.size(); i++)
//		{
//			arr[tmp[i]]++;
//		}
//
//		for (int j = 3; j < s.size(); j += 3)
//		{
//			string tmp1 = "";
//			tmp1 = s.substr(j, 3);
//
//			string tmp2 = "";
//			for (int k = 0; k < tmp1.size(); j++)
//			{
//				if (arr[tmp[k]] == 0)
//					tmp2 += tmp1[k];
//			}
//			int count = tmp1.size() - tmp2.size();
//			if (count == 2)
//				flag = 1;
//			else
//				flag = 0;
//			
//		}
//
//		if (flag == 1)
//			cout << "Yes" << endl;
//		else
//			cout << "No" << endl;
//
//		n--;
//	}
//
//	system("pause");
//	return 0;
//}




