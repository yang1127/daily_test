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
//int main()
//{
//	int n;
//	while (std::cin >> n) {
//		if (n == 0) break;
//		long total = pow(5, n) - 4;
//		long left = pow(4, n) + n - 4;
//		std::cout << total << " " << left << std::endl;
//	}
//	return 0;
//}//��С���������//#include <iostream>
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
//};////�мٱ�//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//int main() {
//	long long n; int cnt;
//	while ((scanf("%lld", &n)) != EOF) {
//		if (n == 0)
//			break;
//		cnt = 0;
//		while (n >= 2) {
//			if (n % 3) {
//				//������������ȡ�����������ص�һ���� n/3 + 1�����
//				n = n / 3 + 1;
//			}
//			else {
//				//����������ֱ���������ܹ���ȡ�����ص�һ��
//				n /= 3;
//			}
//			cnt++;
//		}
//			printf("%d\n", cnt);
//	};
//	return 0;
//}