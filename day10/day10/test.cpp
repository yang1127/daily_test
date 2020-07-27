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

//插入二进制数
//class BinInsert {
//public:
//	int binInsert(int n, int m, int j, int i) {
//		// write code here
//		m <<= j; //左移
//		return n | m; //与运算
//	}
//};

////查找组成一个偶数最接近的两个素数
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//bool isPrime(int num) //判断素数
//{
//	int tmp = sqrt(num);
//	for (int i = 2; i <= tmp; i++)
//	{
//		if (num % i == 0) //只能被自身整除
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
//		//从中间向两边找
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

//拷贝答案
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
//		//首先计算参数数量
//		for (int i = 0; i < str.size(); i++)
//		{
//			if (str[i] == ' ')
//				count++;
//			//如果是双引号，向后遍历，直到下一个双引号结束
//			if (str[i] == '"')
//			{
//				do
//				{
//					i++;
//				} while (str[i] != '"');
//			}
//		}
//		//以空格计算个数，空格数量比参数个数少1
//		cout << count + 1 << endl;
//		//用flag表示是否包含双引号，0表示有双引号
//		//双引号中的空格要打印出来
//		//用异或改变flag的值，两个双引号可以使flag复原
//		int flag = 1;
//		for (int i = 0; i < str.size(); i++)
//		{
//			//有双引号，flag通过异或变为0，下一次再遇到双引号，flag置为1
//			if (str[i] == '"')
//				flag ^= 1;
//			//双引号和普通空格不打印
//			if (str[i] != ' ' && str[i] != '"')
//				cout << str[i];
//			//双引号中的空格要打印
//			if (str[i] == ' ' && (!flag))
//				cout << str[i];
//			//遇到双引号之外的空格就换行
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
//			if ((year % 4 == 0 && year % 100 != 0 || year % 400 == 0)) //判断瑞年
//				sum += 1;
//		}
//		cout << sum << endl;
//	}
//
//	system("pause");
//	return 0;
//}
//#include <iostream>////using namespace std;////int main()//{//	int n;//	while (cin >> n)//	{//		int count = 0;//		while (n) //右移超过32位则为0//		{//			if ((n & 1) == 1)  //当前位是否为1//				count += 1;////			n >>= 1; //右移一位 再判断该位是否为1//		}//		cout << count << endl;//	}////	system("pause");//	return 0;//}//网上答案class Gloves {
public:
	int findMinimum(int n, vector<int> left, vector<int> right) {
		int left_sum = 0, left_min = INT_MAX;
		int right_sum = 0, right_min = INT_MAX;
		int sum = 0;
		//遍历每一种颜色的左右手套序列
		for (int i = 0; i < n; i++) {
			//对于有0存在的颜色手套，累加
			if (left[i] * right[i] == 0)
				sum += left[i] + right[i];
			//对于左右手都有的颜色手套，执行累加-最小值+1
			//找到最小值和总数
			else {
				left_sum += left[i];
				right_sum += right[i];
				left_min = min(left_min, left[i]);
				right_min = min(right_min, right[i]);
			}
		}
		//结果为有左右都有数量的手套序列的结果+有0存在的手套数+最后再加一肯定就能保证了
		return sum + min(left_sum - left_min + 1, right_sum - right_min + 1) + 1;
	}
};