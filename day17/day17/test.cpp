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
//		s[i] = tolower(s[i]); //תСд
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

//2020/9/23 ȥ�Ķ���
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	int *dp = new int[n + 1]; //���ռ�
//	dp[0] = 1;
//	dp[1] = 1;
//	dp[2] = 2;
//	for (int i = 2; i <= n; i++)
//	{
//		dp[i] = dp[i - 1] + dp[i - 2];
//	}
//	cout << dp[n] << endl;
//
//	return 0;
//}



//ɾ�������б����ظ���Ԫ��
//class Solution {
//public:
//	ListNode *deleteDuplicates(ListNode *head) {
//		if (head == NULL)
//			return head;
//
//		ListNode *cur = head;
//
//		while (cur->next != NULL)
//		{
//			if (cur->val == cur->next->val)
//			{
//				cur->next = cur->next->next;
//			}
//			else
//			{
//				cur = cur->next;
//			}
//		}
//		return head;
//	}
//};
//
//#include <iostream>
//#include <string>
//#include <unordered_map>
//using namespace std;
//
//int main()
//{
//	string s;
//	cin >> s;
//
//	if (s.empty())
//		return 0;
//
//	unordered_map<char, int> um;
//	for (char e : s)
//	{
//		++um[e];
//	}
//
//	int num = um.size();
//	int count = 0;
//	for (auto e : um)
//	{
//		cout << e.first << "_" << e.second;
//		count++;
//		
//		if (count < num)
//			cout << "_";
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}


////9.24 ��ͼ
//#include <iostream>
//#include <string>
//#include <unordered_map>
//
//using namespace std;
//
//int main()
//{
//	string s;
//	cin >> s;
//	string tmp = "";
//	for (int i = 0; i < s.size(); i++)
//	{
//		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
//			tmp += s[i];
//	}
//
//	unordered_map<char, int> m;
//	for (char e : tmp)
//	{
//		m[e]++;
//	}
//
//	for (auto e : m)
//	{
//		cout << e.first << e.second;
//	}
//
//	system("pause");
//	return 0;
//}


//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int h, l;
//	while (cin >> h >> l)
//	{
//		int count = 0;
//		if (h < l)
//		{
//			int num = 0;
//			int tmp = h;
//			while (num <= l)
//			{
//				num = tmp + h;
//				count++;
//				h = h / 2;
//			}
//			cout << count << endl;
//		}
//		else if (h == l)
//			cout << 1 << endl;
//		else
//			cout << "no" << endl;
//	}
//
//	system("pause");
//	return 0;
//}


////2020/09/25  
////�����ظ���
//#include <iostream>
//#include <math.h>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		int count = 0;
//		for (int i = 2; i <= sqrt(n); i++) {
//			while (n % i == 0)
//			{
//				n /= i;
//				count++;
//			}
//		}
//
//		if (n > 1)
//			count++;
//
//		cout << count << endl;
//	}
//
//	system("pause");
//	return 0;
//}
//


//2020/09/26 
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		int* dp = new int(n + 1); //������
//		for (int i = 0; i <= n; i++)
//			dp[i] = i - 1;
//
//		dp[1] = 1;
//
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; i + j <= n; j++)
//				dp[i + j] = max(dp[i + j], max(dp[i] * j, i * j));
//		}
//		cout << dp[n] << endl;
//	}
//
//	system("pause");
//	return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
////int Find(int key, int* arr, int left, int right)
//int Find(int key, vector<int> &v, int left, int right)
//{
//	if (left > right)
//		return -1;
//
//	//int mid = left + (right - left) / 2;
//
//	//if (key < arr[mid])
//	//	return Find(key, arr, left, mid - 1);
//	//else if (key > arr[mid])
//	//	return Find(key, arr, mid + 1, right);
//	//else
//	//	return mid;
//
//	int mid = left + (right - left) / 2;
//
//	if (key < v[mid])
//		return Find(key, v, left, mid - 1);
//	else if (key > v[mid])
//		return Find(key, v, mid + 1, right);
//	else
//		return mid;
//}
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		vector<int> v(n);
//		//int arr[] = {0};
//		//for (int i = 0; i < n; i++)
//		//{
//		//	scanf("%d ", &arr);
//		//}
//		for (int i = 0; i < n; i++)
//		{
//			cin >> v[i];
//		}
//
//		int num;
//		//scanf("%d ", &num);
//		//int rel = Find(num, arr, 0, sizeof(arr) / sizeof(arr[0]));
//		cin >> num;
//		int rel = Find(num, v, 0, v.size()- 1);
//
//		cout << rel << endl;
//	}
//
//	system("pause");
//	return 0;
//}


//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int Find(int key, vector<int> &v, int left, int right)
//{
//	if (left > right)
//		return -1;
//
//	int mid = left + (right - left) / 2;
//
//	if (key < v[mid])
//		return Find(key, v, left, mid - 1);
//	else if (key > v[mid])
//		return Find(key, v, mid + 1, right);
//	else
//		return mid;
//}
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		vector<int> v(n);
//		for (int i = 0; i < n; i++)
//			cin >> v[i];
//
//		int num;
//
//		cin >> num;
//		int rel = Find(num, v, 0, v.size() - 1);
//
//		cout << rel << endl;
//	}
//
//	system("pause");
//	return 0;
//}

























