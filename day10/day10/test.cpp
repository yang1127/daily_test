//������Ϸ

//class Board {
//public:
//	bool checkWon(vector<vector<int> > board) {
//		// write code here
//		int row = board.size(); //��������
//		int i, j, sum;
//
//		//�ж���
//		for (i = 0; i < row; i++)
//		{
//			sum = 0;
//			for (j = 0; j < row; j++)
//				sum += board[i][j];
//
//			if (sum == row) //�������� //�г�
//				return true;
//		}
//
//		//�ж���
//		for (i = 0; i < row; i++)
//		{
//			sum = 0;
//			for (j = 0; j < row; j++)
//				sum += board[j][i];
//
//			if (sum == row) //�г�
//				return true;
//		}
//
//		//�ж����Խ���
//		sum = 0;
//		for (i = 0; i < row; i++)
//			sum += board[i][i];
//
//		if (sum == row)
//			return true;
//
//		//�жϸ��Խ���
//		sum = 0;
//		for (i = 0; i < row; i++)
//			sum += board[i][row - i - 1];
//
//		if (sum == row)
//			return true;
//
//		return false;
//	}
//};
//

//����ȼ�

//���Ͽ�������  ����~
//#include<iostream>
//#include<string>
//using namespace std;
//
//int numChar(string str, int k)
//{
//	//����ASCII���ж���ĸ��Сд
//	int small = 0;
//	int big = 0;
//	for (int i = 0; i < k; i++)
//	{
//		if (str[i] >= 65 && str[i] <= 90)
//			big++;
//		else if (str[i] >= 97 && str[i] <= 122)
//			small++;
//	}
//
//	if ((small + big) == 0)
//		return 0;
//	else if (small == k || big == k)
//		return 10;
//	else if (small > 0 && big > 0)
//		return 20;
//	return 0;
//}
//
//int numNumber(string str, int k)
//{
//	//����ASCII���ж����ָ�������ȥ�ַ���0��֮����0~9֮��ļ�Ϊ����
//	int num = 0;
//	for (int i = 0; i < k; i++)
//	{
//		if (str[i] - '0' >= 0 && str[i] - '0' <= 9)
//			num++;
//	}
//	if (num == 0)
//		return 0;
//	else if (num == 1)
//		return 10;
//	else
//		return 20;
//}
//
//int numSymbal(string str, int k)
//{
//	int num = 0;
//	for (int i = 0; i < k; i++)
//	{
//		//��ȥ��ĸ�����֣�������Ϊ����
//		if (!(str[i] >= 65 && str[i] <= 90)
//			&& !(str[i] >= 97 && str[i] <= 122)
//			&& !(str[i] - '0' >= 0 && str[i] - '0' <= 9))
//			num++;
//	}
//	if (num == 0)
//		return 0;
//	else if (num == 1)
//		return 10;
//	else
//		return 25;
//}
//
//int main()
//{
//	string str;
//	while (cin >> str)
//	{
//		int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0;
//		int k = str.size();
//		if (k <= 4)
//			sum1 = 5;
//		else if (k >= 8)
//			sum1 = 25;
//		else
//			sum1 = 10;
//		sum2 = numChar(str, k);
//		sum3 = numNumber(str, k);
//		sum4 = numSymbal(str, k);
//		if ((sum2 > 0) && (sum3 > 0) && (sum4 > 0))
//		{
//			if (sum2 == 10)
//				sum5 = 3;
//			else
//				sum5 = 5;
//		}
//		else if (sum2 > 0 && sum3 > 0 && sum4 == 0)
//			sum5 = 2;
//		if (sum1 + sum2 + sum3 + sum4 + sum5 >= 90)
//			cout << "VERY_SECURE" << endl;
//		else if (sum1 + sum2 + sum3 + sum4 + sum5 >= 80)
//			cout << "SECURE" << endl;
//		else if (sum1 + sum2 + sum3 + sum4 + sum5 >= 70)
//			cout << "VERY_STRONG" << endl;
//		else if (sum1 + sum2 + sum3 + sum4 + sum5 >= 60)
//			cout << "STRONG" << endl;
//		else if (sum1 + sum2 + sum3 + sum4 + sum5 >= 50)
//			cout << "AVERAGE" << endl;
//		else if (sum1 + sum2 + sum3 + sum4 + sum5 >= 25)
//			cout << "WEAK" << endl;
//		else
//			cout << "VERY_WEAK" << endl;
//	}
//	return 0;
//}

//�����������
//class LCA {
//public:
//	int getLCA(int a, int b) {
//		// write code here
//		while (a != b)
//		{
//			if (a > b)
//				a /= 2;
//			else
//				b /= 2;
//		}
//		return a;
//	}
//};

//����biteλ1

//#include <iostream>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	int n; 
//	while (cin >> n)
//	{
//		int count = 0, sum = 0;
//		while (n) //n������32λ�򷵻�0
//		{
//			if (n & 1) //��ȡ��ǰλ�Ķ�����ֵ
//			{
//				++count;
//				sum = max(count, sum); //ȡ���ֵ
//			}
//			else
//				count = 0; //������ʱ��Ϊ0
//
//			n = n >> 1; //���ƣ���ȡ��һλ������ֵ
//		}
//		
//		cout << sum << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//�����������
//class BinInsert {
//public:
//	int binInsert(int n, int m, int j, int i) {
//		// write code here
//		m <<= j; //����
//		return n | m; //������
//	}
//};

////�������һ��ż����ӽ�����������
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//bool isPrime(int num) //�ж�����
//{
//	int tmp = sqrt(num);
//	for (int i = 2; i <= tmp; i++)
//	{
//		if (num % i == 0) //ֻ�ܱ���������
//			return false;
//	}
//	return true;
//}
//
//int main()
//{
//	int num;
//	int half;
//	int i;
//	while (cin >> num)
//	{
//		half = num / 2;
//		//���м���������
//		for (i = half; i > 0; i--)
//		{
//			if (isPrime(i) && isPrime(num - i))
//				break;
//		}
//		cout << i << endl;
//		cout << num - i << endl;
//	}
//	system("pause");
//	return 0;
//}

//������
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string str;
//	while (getline(cin, str))
//	{
//		int count = 0;
//		//���ȼ����������
//		for (int i = 0; i < str.size(); i++)
//		{
//			if (str[i] == ' ')
//				count++;
//			//�����˫���ţ���������ֱ����һ��˫���Ž���
//			if (str[i] == '"')
//			{
//				do
//				{
//					i++;
//				} while (str[i] != '"');
//			}
//		}
//		//�Կո����������ո������Ȳ���������1
//		cout << count + 1 << endl;
//		//��flag��ʾ�Ƿ����˫���ţ�0��ʾ��˫����
//		//˫�����еĿո�Ҫ��ӡ����
//		//�����ı�flag��ֵ������˫���ſ���ʹflag��ԭ
//		int flag = 1;
//		for (int i = 0; i < str.size(); i++)
//		{
//			//��˫���ţ�flagͨ������Ϊ0����һ��������˫���ţ�flag��Ϊ1
//			if (str[i] == '"')
//				flag ^= 1;
//			//˫���ź���ͨ�ո񲻴�ӡ
//			if (str[i] != ' ' && str[i] != '"')
//				cout << str[i];
//			//˫�����еĿո�Ҫ��ӡ
//			if (str[i] == ' ' && (!flag))
//				cout << str[i];
//			//����˫����֮��Ŀո�ͻ���
//			if (str[i] == ' ' && flag)
//				cout << endl;
//		}
//		 cout << endl;
//	}
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int arr[12] = { 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365 };
//	int year, month, day;
//	int sum = 0;
//	while (cin >> year >> month >> day)
//	{
//		sum = 0;
//		sum += arr[month - 2];
//		sum += day;
//		if (month > 7)
//		{
//			if ((year % 4 == 0 && year % 100 != 0 || year % 400 == 0)) //�ж�����
//				sum += 1;
//		}
//		cout << sum << endl;
//	}
//
//	system("pause");
//	return 0;
//}
//#include <iostream>////using namespace std;////int main()//{//	int n;//	while (cin >> n)//	{//		int count = 0;//		while (n) //���Ƴ���32λ��Ϊ0//		{//			if ((n & 1) == 1)  //��ǰλ�Ƿ�Ϊ1//				count += 1;////			n >>= 1; //����һλ ���жϸ�λ�Ƿ�Ϊ1//		}//		cout << count << endl;//	}////	system("pause");//	return 0;//}//���ϴ�class Gloves {
public:
	int findMinimum(int n, vector<int> left, vector<int> right) {
		int left_sum = 0, left_min = INT_MAX;
		int right_sum = 0, right_min = INT_MAX;
		int sum = 0;
		//����ÿһ����ɫ��������������
		for (int i = 0; i < n; i++) {
			//������0���ڵ���ɫ���ף��ۼ�
			if (left[i] * right[i] == 0)
				sum += left[i] + right[i];
			//���������ֶ��е���ɫ���ף�ִ���ۼ�-��Сֵ+1
			//�ҵ���Сֵ������
			else {
				left_sum += left[i];
				right_sum += right[i];
				left_min = min(left_min, left[i]);
				right_min = min(right_min, right[i]);
			}
		}
		//���Ϊ�����Ҷ����������������еĽ��+��0���ڵ�������+����ټ�һ�϶����ܱ�֤��
		return sum + min(left_sum - left_min + 1, right_sum - right_min + 1) + 1;
	}
};