////����
//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//int prime[10001];  //�洢���������� 2-10000
//int primesize = 0; //��¼�����ĸ���
//int mark[10001];   //����Ƿ�������
//
//void init() 
//{
//	for (int i = 2; i <= 10000; i++)
//		mark[i] = false; //��ʼ����������Ŀǰ��Ϊ����
//
//	for (int i = 2; i <= 10000; i++)
//	{
//		if (false == mark[i])
//		{
//			prime[primesize++] = i; //��¼����
//			for (int j = i * i; j <= 10000; j += i) //�� i*i ��ʼ����Ϊ i*k (k<i) Ҳ��k���������ı���
//			{
//				mark[j] = true; //�������ı�����Ϊ������
//			}
//		}
//	}
//}
//
//int main() 
//{
//	init(); //��2-10000֮���������������¼��ȫ�ֱ���prime��
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		bool isOutput = false;
//		for (int i = 0; i < primesize; i++) 
//		{
//			if (prime[i] < n && prime[i] % 10 == 1) //1-n֮����������Ҹ�λΪ1
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

#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main()
{
	string s;
	getline(cin, s);
	int count = 0;
	string tmp = "";
	tmp = s[0];
	for (int i = 0; i < s.size(); i++)
	{
		s[i] = tolower(s[i]); //תСд
		if (s[i] != ' ' && (s[i] < 'a' || s[i] > 'z'))
		{
			cout << "unkown name" << endl;
			break;
		}

		if (s[i] == ' ')
		{
			count++;
			s[i + 1] = tolower(s[i + 1]);
			tmp += s[i + 1];
		}
	}

	if (count < 2)
		cout << s << endl;
	else
		cout << tmp << endl;

	system("pause");
	return 0;
}