//class LCA { 
//public: 
//	int getLCA(int a, int b) 
//	{
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

//完全数

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
//		int count = 0;
//		if (n < 0 || n > 500000)
//			return -1;
//		else
//		{
//			for (int i = 2; i <= n; i++)
//			{
//				int sum = 0;
//				for (int j = 2; j <= sqrt(i); j++)//找约数
//				{
//					if (i % j == 0) 
//					{
//						if (i / j == j) //两个约数相同，只需要加一个即可
//							sum += j;
//						else
//							sum += j + (i / j);
//					}
//				}
//				if (sum + 1 == i)
//					count++;
//			}
//		}
//		cout << count << endl;
//	}
//
//	system("pause");
//	return 0;
//}
//#include <string>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//string addStrings(string num1, string num2) 
//{
//	//由低位向高位相加
//	int i = num1.size() - 1;
//	int j = num2.size() - 1;
//	string result = "";
//
//	//当前位的相加结果
//	int carry = 0;
//	while (i >= 0 || j >= 0) 
//	{
//		if (i >= 0) 
//			carry += num1[i] - '0';
//		if (j >= 0) 
//			carry += num2[j] - '0';
//
//		//当前为的最大值不大于10
//		result += (char)(carry % 10 + '0');
//
//		//如果大于10,向上进一位
//		carry /= 10;
//
//		i--;
//		j--;
//	}
//
//	//相加完之后，如果还有进位，则再加1
//	if (carry == 1) 
//		result += '1';
//
//	//整体逆置
//	reverse(result.begin(), result.end());
//
//	return result;
//}
//
//int main()
//{
//	string s1, s2;
//	while (cin >> s1 >> s2)
//		cout << addStrings(s1, s2) << endl;
//
//	return 0;
//}

//#include <string>
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int minDistance(string word1, string word2) {
//	// word与空串之间的编辑距离为word的长度
//	if (word1.empty() || word2.empty()) {
//		return max(word1.size(), word2.size());
//	}
//	int len1 = word1.size();
//	int len2 = word2.size();
//	// F(i,j)初始化
//	vector<vector<int> > f(1 + len1, vector<int>(1 + len2, 0));
//	for (int i = 0; i <= len1; ++i) {
//		f[i][0] = i;
//	}
//	for (int i = 0; i <= len2; ++i) {
//		f[0][i] = i;
//	}
//	for (int i = 1; i <= len1; ++i) 
//	{
//		for (int j = 1; j <= len2; ++j) 
//		{
//			// F(i,j) = min { F(i-1,j）+1, F(i,j-1) +1, F(i-1,j-1) +
//			//(w1[i]==w2[j]?0:1) }
//			// 判断word1的第i个字符是否与word2的第j个字符相等
//			if (word1[i - 1] == word2[j - 1]) 
//			{
//				f[i][j] = 1 + min(f[i][j - 1], f[i - 1][j]);
//				// 字符相等，F(i-1,j-1)编辑距离不变
//				f[i][j] = min(f[i][j], f[i - 1][j - 1]);
//			}
//			else
//			{
//				f[i][j] = 1 + min(f[i][j - 1], f[i - 1][j]);
//				// 字符不相等，F(i-1,j-1)编辑距离 + 1
//				f[i][j] = min(f[i][j], 1 + f[i - 1][j - 1]);
//			}
//		}
//	}
//	return f[len1][len2];
//}
//
//int main() {
//	string a, b;
//	while (cin >> a >> b)
//		cout << minDistance(a, b) << endl;
//	return 0;
//}
