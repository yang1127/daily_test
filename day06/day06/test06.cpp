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