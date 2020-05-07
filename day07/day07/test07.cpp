//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	int a = 0, b = 1, c; //使用三个变量交换来是实现斐波那契数列
//	int min;   
//	cin >> n; 
//	min = n - a; //假设最小的为该数减去前一个
//	while (1)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		if ((n- c) < min && (n - c) >= 0)
//		{
//			min = n - c;
//		}
//		if ((n - c) < 0)
//		{
//			if (fabs(n - c) < min)
//			{
//				min = fabs(n - c);
//			}
//			break;
//		}
//	}
//
//	cout << min << endl;
//	return 0;
//}

//class Parenthesis {
//public: 
//	bool chkParenthesis(string A, int n) { 
//		stack<char> sc;
//		for (auto ele : A)
//		{ 
//            switch (ele) 
//			{ 
//			    case '(':
//					sc.push(ele); 
//				    break;
//				case ')':
//				{
//				    if (sc.empty() || sc.top() != '(')
//				        return false;
//				    else
//				        sc.pop(); 
//				}
//				break;
//			default:
//				return false; 
//			} 
//		}
//		return true;
//	} 
//};

////微信红包
//class Gift {
//public:
//	int getValue(vector<int> gifts, int n) {
//		sort(gifts.begin(), gifts.end());
//		超过一半的数排序之后必然排在中间
//		int middle = gifts[n / 2];
//		int count = 0;
//		for (int i = 0; i < n; i++)
//		{
//			统计排在中间的数的个数
//			if (gifts[i] == middle)
//			{
//				count++;
//			}
//		}
//		如果个数大于一半，则存在超过一半的数
//		if (count > n / 2)
//			return middle;
//		else
//			return 0;
//	}
//};////计算字符串问题//#include <string>
//#include <iostream>
//#include <vector>
//using namespace std;
//int minDistance(string word1, string word2) {
//	 word与空串之间的编辑距离为word的长度
//	if (word1.empty() || word2.empty()) {
//		return max(word1.size(), word2.size());
//	}
//	int len1 = word1.size();
//	int len2 = word2.size();
//	 F(i,j)初始化
//	vector<vector<int> > f(1 + len1, vector<int>(1 + len2, 0));
//	for (int i = 0; i <= len1; ++i) {
//			f[i][0] = i;
//	}
//	for (int i = 0; i <= len2; ++i) {
//		f[0][i] = i;
//	}
//	for (int i = 1; i <= len1; ++i) {
//		for (int j = 1; j <= len2; ++j) {
//			 F(i,j) = min { F(i-1,j）+1, F(i,j-1) +1, F(i-1,j-1) +
//			(w1[i]==w2[j]?0:1) }
//			 判断word1的第i个字符是否与word2的第j个字符相等
//			if (word1[i - 1] == word2[j - 1]) {
//				f[i][j] = 1 + min(f[i][j - 1], f[i - 1][j]);
//				 字符相等，F(i-1,j-1)编辑距离不变
//				f[i][j] = min(f[i][j], f[i - 1][j - 1]);
//			}
//			else {
//				f[i][j] = 1 + min(f[i][j - 1], f[i - 1][j]);
//				 字符不相等，F(i-1,j-1)编辑距离 + 1
//				f[i][j] = min(f[i][j], 1 + f[i - 1][j - 1]);
//			}
//		}
//	}
//	return f[len1][len2];
//}
//int main() {
//	string a, b;
//	while (cin >> a >> b)
//		cout << minDistance(a, b) << endl;
//	return 0;
//}////年终奖//class Bonus {
//public:
//	int getMost(vector<vector<int> > board) {
//		int length = board.size();
//		int wideth = board[0].size();
//		vector<vector<int>> allPrice;
//		for (int i = 0; i < length; i++) {
//			vector<int> tmp(wideth, 0);
//			allPrice.push_back(tmp);
//		}
//		allPrice[0][0] = board[0][0];
//		for (int i = 0; i < length; i++) {
//			for (int j = 0; j < wideth; j++) {
//				//如果是起点坐标，不做任何处理。
//				if (i == 0 && j == 0)
//					continue;
//				//如果走在行的临界边，也就是第一行，那么他只能向右走
//				//向右走的时候该点就要将后面的值加起来。
//				else if (i == 0) {
//					allPrice[i][j] = allPrice[i][j - 1] + board[i][j];
//				}
//				//如果走在列的临界边，也就是第一列，那么他只能向下走
//				//向下走的时候该点就要将上面的值加起来。
//				else if (j == 0) {
//					allPrice[i][j] = allPrice[i - 1][j] + board[i][j];
//				}
//				else {
//					//除去两个临界边，剩下的就是既能向右走，也能向下走，
//					//这时候就要考虑走到当前点的所有可能得情况，也就是走到当前点
//					//各自路径的和是不是这些所有到达该点路径当中最大的了。
//					allPrice[i][j] = max(allPrice[i][j - 1], allPrice[i - 1][j]) + board[i][j];
//				}
//			}
//		}
//		// 返回最后一个坐标点的值，它就表示从左上角走到右下角的最大奖励
//		return allPrice[length - 1][wideth - 1];
//	}
//};