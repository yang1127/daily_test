//＃字游戏

//class Board {
//public:
//	bool checkWon(vector<vector<int> > board) {
//		// write code here
//		int row = board.size(); //计算行数
//		int i, j, sum;
//
//		//判断行
//		for (i = 0; i < row; i++)
//		{
//			sum = 0;
//			for (j = 0; j < row; j++)
//				sum += board[i][j];
//
//			if (sum == row) //等于行数 //行成
//				return true;
//		}
//
//		//判断列
//		for (i = 0; i < row; i++)
//		{
//			sum = 0;
//			for (j = 0; j < row; j++)
//				sum += board[j][i];
//
//			if (sum == row) //列成
//				return true;
//		}
//
//		//判断主对角线
//		sum = 0;
//		for (i = 0; i < row; i++)
//			sum += board[i][i];
//
//		if (sum == row)
//			return true;
//
//		//判断副对角线
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

//密码等级

//网上拷贝代码  哈哈~
//#include<iostream>
//#include<string>
//using namespace std;
//
//int numChar(string str, int k)
//{
//	//根据ASCII码判断字母大小写
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
//	//根据ASCII码判断数字个数，减去字符‘0’之后在0~9之间的即为数字
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
//		//除去字母，数字，其它都为符号
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
//最近公共祖先
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

//连续bite位1

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
//		while (n) //n若右移32位则返回0
//		{
//			if (n & 1) //获取当前位的二进制值
//			{
//				++count;
//				sum = max(count, sum); //取最大值
//			}
//			else
//				count = 0; //不连续时置为0
//
//			n = n >> 1; //右移，获取下一位二进制值
//		}
//		
//		cout << sum << endl;
//	}
//
//	system("pause");
//	return 0;
//}

