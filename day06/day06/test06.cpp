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
//	if (w % 4 == 0 || h % 4 == 0) //������4����Ϊ0ʱ��ռ�г�*��/2�ĵ���
//	{
//		count = w * h / 2;  
//	}
//	else if (w % 2 == 0 || h % 2 == 0) //������2����Ϊ0ʱ��ռ�У���*��/4 +1��* 2�ĵ���
//	{
//		count = (w * h / 4 + 1) * 2;
//
//	}
//	else
//	{
//		count = w * h / 2 + 1;  //�����������������
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

//�Ǽ�����
//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<int> a = { 1, 1 }; //ȫ��
//void func()
//{
//	for (int i = 2; i < 10010; i++)
//	{
//		a.push_back((a[i - 1] + a[i - 2]) % 10000); //��������λ
//	}
//}
//
//int main()
//{
//	int n, t;
//	func();
//	while (cin >> n) //��һ�а���һ������n
//	{
//		while (n--)
//		{
//			cin >> t; //�ڶ��а���n��������Xi (1��Xi��10000)
//			printf("%04d", a[t]);
//		}
//		cout << endl;
//	}
//	return 0;
//}

//����
//#include <iostream>
//#include <string>
//using namespace std;
//
//int root_num(int num)
//{
//	int sumroot_num = 0;
//	while (num > 0) //��ÿλ��Ӻ�
//	{
//		sumroot_num += num % 10;
//		num = num / 10;
//	}
//	while (sumroot_num > 9)//�����Ǹ�λ�����ٽ��Ӻ��������ӣ�ֱ��Ϊ��λ��
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
//			sum += num[i] - '0'; //������ÿһλ����ӣ���ֹ����
//		}
//		cout << root_num(sum) << endl;
//	}
//	return 0;
//}

//�쵽������
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

//��ż��λ
//class Solution {
//public:
//	void oddInOddEvenInEven(std::vector<int>& arr, int len) {
//		long i = 0, j = 1;
//		while (i < len && j < len) 
//		{
//			if ((arr[i] % 2) == 0) //ż��λ��Ѱ�ҷ�ż��
//			{
//				i += 2; 
//				continue; 
//			}
//			if ((arr[j] % 2) != 0) //����λ��Ѱ�ҷ�����
//			{
//				j += 2; continue; 
//			}
//			swap(arr[i], arr[j]);
//		}
//	}
//};

//���ӷ���
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

////��С���������
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
//					if (dp[j] < dp[j - arr[i]] + arr[i])//��ÿ�����ؼ��㵱ǰ����ܷ�������
//						dp[j] = dp[j - arr[i]] + arr[i];//���±������ܹ���������ֵ
//					else
//						dp[j] = dp[j];
//			}
//		}
//		//��󵱳���Ϊnʱ�������������Ϊn����Ϊ����󲻿����
//		for (i = min; i <= sum; i++)
//		{
//			if (i != dp[i])
//				return i;
//		}
//		return sum + 1;
//	}
//};

////�мٱ�
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
//			if (n % 3) //������������ȡ�����������ص�һ���� n/3 + 1�����
//				n = n / 3 + 1;
//			else //����������ֱ���������ܹ���ȡ�����ص�һ��
//				n /= 3;
//
//			count++;
//		}
//		cout << count << endl;
//	}
//	system("pause");
//	return 0;
//}


//�ַ�����ת
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

////���������
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

//ǰ�����������
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

//��󹫹��Ӵ�
//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	int max = 0; //max��ֵ.
//	string str1, str2;
//	while (cin >> str1 >> str2)
//	{
//		int len1 = str1.size();
//		int len2 = str2.size();
//		int max = 0;
//		//����ֵ��ʼ��Ϊ0
//		vector<vector<int>> dp(len1, vector<int>(len2, 0));
//		//����dp
//		for (int i = 0; i < len1; i++)
//		{
//			for (int j = 0; j < len2; j++)
//			{
//				//�����ǰ��β���ַ���ȣ�����dp[i-1][j-1]�Ļ����ϼ�1
//				if (str1[i] == str2[j])
//				{
//					if (i >= 1 && j >= 1)
//						dp[i][j] = dp[i - 1][j - 1] + 1;
//					else
//						dp[i][j] = 1;//dp[i][0] or dp[0][j]
//				}
//				//�������ֵ
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
//		int maxlen = 0; //��������Ӵ�
//		for (int i = 0; i < s1.size(); i++)
//		{
//			for (int j = s1.size(); j > i; j--)
//			{
//				if (s2.find(s1.substr(i, j - i)) != string::npos)
//					maxlen = maxlen > j - i ? maxlen : j - i; //��j - i > maxlen����maxlen����Ϊ j - i
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
//	cin >> T; //T��Ҫϴ�Ƶ���������
//	while (T--)
//	{
//		cin >> n >> k; //k��ϴ�ƵĴ���
//		int num = 2 * n; //n��2n���Ƶ�����
//		vector<int> table(num);
//		for (int i = 0; i < num; ++i)
//			cin >> table[i];
//		//ϴk����
//		while (k--)
//		{
//			vector<int> n1(table.begin(), table.end());
//			for (int i = 0; i < n; ++i)
//			{
//				//�����ǰ��С�ڵ���n���������֣��������´γ��ֵ�λ���� 2*��ǰλ��
//				//��֮��Ӧ�ĵ�ǰλ�� + n���������֣�����,�����´γ��ֵ�λ���� 2*��ǰλ�� + 1
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

////���룺��һ����������������ڶ�������ָ��
////�����Ϊ���У���һ��Ϊ��ǰ�������ڵ��б��ڶ���Ϊ�����ָ��ĸ�����
////
////˼·������Ƚϼ򵥣�ͨ������ָ������ƶ����ɣ������������������Ŀ������4�ʹ���4�����
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() 
//{
//	int n;//��������
//	string order;//����
//	while (cin >> n >> order)
//	{
//		��n�׸������1��n , numΪ��굱ǰ���ڸ����ı��,firstΪ��ǰ��Ļ��ʾҳ�ĵ�һ�׸����ı��
//		int num = 1, first = 1;
//		if (n <= 4) //��������������4ʱ�����и���һҳ������ʾ�꣬���跭ҳ��firstʼ�ղ���
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
//		else //������������4ʱ����ʾ��ȫ���и�����Ҫ��ҳ����Ļ������ʾ4�׸���
//		{
//			for (int i = 0; i < order.size(); i++)
//			{
//				if (first == 1 && num == 1 && order[i] == 'U')//���ⷭҳ1
//				{
//					first = n - 3; num = n;
//				} 
//				else if (first == n - 3 && num == n && order[i] == 'D')//���ⷭҳ2
//				{
//					first = 1; 
//					num = 1;
//				} 
//				else if (first != 1 && num == first && order[i] == 'U')//һ�㷭ҳ1
//				{
//					first--; 
//					num--;
//				} 
//				else if (first != n - 3 && num == first + 3 && order[i] == 'D')//һ�㷭ҳ2
//				{
//					first++; 
//					num++;
//				} 
//				else if (order[i] == 'U')//�������1
//					num--; 
//				else//�������2
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

//С������֮·
//˼·���������
//< �ۼ�
//> �����Լ�������ۼ�

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int GCD(int a, int b) //շת�������Լ��
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
//	int n, c; //����������С�׳�ʼֵ
//	vector <int> v;
//	while (cin >> n >> c)
//	{
//		v.resize(n);//�����С
//		for (int i = 0; i < n; i++)
//			cin >> v[i]; //ÿ������ķ�������
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

//������һ��
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	while (cin >> s)
	{
		int hashtable[256] = { 0 };//��ʼ��Ϊ0
		for (auto& e : s)
			hashtable[e]++; //�������±����Ϊ1

		int i;
		for (i = 0; i < s.size(); i++)
		{
			if (hashtable[s[i]] == 1) //��һ�γ���
			{
				cout << s[i] << endl;
				break;
			}
		}
		if (i >= s.size()) //������ʱ
			cout << -1 << endl;
	}
	return 0;
}