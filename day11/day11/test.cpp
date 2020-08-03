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

////发邮件
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	long long arr[21] = { 0, 0, 1 };
//	int i;
//	for (i = 3; i < 21; i++) {
//		arr[i] = (i - 1) * (arr[i - 2] + arr[i - 1]);
//	}
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		printf("%lld\n", arr[n]);
//	}
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() 
//{
//	int n;
//	while (cin >> n) 
//	{
//		vector<int> height(n, 0);
//		for (int i = 0; i < n; i++) 
//			cin >> height[i];
//
//		vector<int> f(n, 1);
//		int result = 1;
//		for (int i = 1; i < n; i++) 
//		{
//			for (int j = 0; j < i; j++) 
//			{
//				if (height[i] > height[j]) 
//				{
//					f[i] = max(f[i], f[j] + 1);
//				}
//			}
//			result = max(result, f[i]);
//		}
//		cout << result << endl;
//	}
//	return 0;
//}


//#include<iostream>
//#include<string>
//
//using namespace std;
//
//int main() 
//{
//	string s;
//	while (getline(cin, s)) 
//	{
//		int len = s.length();
//		for (int i = 0; i < len; i++)
//		{
//			if (s[i] >= '0'&& s[i] <= '9')
//				cout << s[i];
//		}
//		cout << endl;
//	}
//	return 0;
//}

////种草
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	int n, m, x;
//	int sum = 0;
//	while (cin >> n >> m >> x)
//	{
//		vector<int> v(n);
//		if ((n < 1 && n > 1e5) && (m < 1 && m > 1e5) && (x < 1 && x > 1e5))
//			return 0;
//		else
//		{
//			for (int i = 0; i < n; i++)
//			{
//				cin >> v[i];
//
//				if (v[i] < 1 && v[i] > 1e9)
//					return 0;
//			}
//			sort(v.begin(), v.end());
//			sum = v[0] + m * x;
//		}
//		cout << sum << endl;
//	}
//
//	system("pause");
//	return 0;
//}

////网上
//// 借助 hash 表完成字母和数字之间的转换即可. 注意处理大小写的情况.
//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//#include<functional>
//#include <map>
//#include <set>
//#include <unordered_set>
//#include <unordered_map>
//#include <exception>
//#include <iomanip>
//#include <memory>
//#include <sstream>
//#define INF 1000000
//using namespace std;
//int main(int argc, char** argv)
//{
//	unordered_map<char, char> dic;
//	dic.emplace('A', '2');
//	dic.emplace('B', '2');
//	dic.emplace('C', '2');
//	dic.emplace('D', '3');
//	dic.emplace('E', '3');
//	dic.emplace('F', '3');
//	dic.emplace('G', '4');
//	dic.emplace('H', '4');
//	dic.emplace('I', '4');
//	dic.emplace('J', '5');
//	dic.emplace('K', '5');
//	dic.emplace('L', '5');
//	dic.emplace('M', '6');
//	dic.emplace('N', '6');
//	dic.emplace('O', '6');
//	dic.emplace('P', '7');
//	dic.emplace('Q', '7');
//	dic.emplace('R', '7');
//	dic.emplace('S', '7');
//	dic.emplace('T', '8');
//	dic.emplace('U', '8');
//	dic.emplace('V', '8');
//	dic.emplace('W', '9');
//	dic.emplace('X', '9');
//	dic.emplace('Y', '9');
//	dic.emplace('Z', '9');
//	int n;
//	while (cin >> n && n > 0)
//	{
//		set<string> hs;
//		string s;
//		for (int i = 0; i < n; ++i)
//		{
//			cin >> s;
//			string p = "";
//			for (auto& c : s)
//			{
//				if (isdigit(c)) p += c;
//				else if (isupper(c)) p += dic[c];
//			}
//			if (p.size() != 7) continue;
//			p = p.substr(0, 3) + "-" + p.substr(3);
//			hs.emplace(p);
//		}
//		for (auto& phone : hs) cout << phone << endl;
//		cout << endl;
//	}
//	return 0;
//}//#include<iostream>
//#include<string>
//#include<map>
//using namespace std;
//
//int main()
//{
//	string str, res;
//	while (cin >> str >> res)
//	{
//		// sta 这个变量表示当前是否满足 B 盒的球在 A 盒中存在, 并且数目不大于 A 盒.
//		bool sta = true;
//		// strdata 保存了 A 盒的球. key 为球的种类, value 为球的数目
//		// resdata 保存了 B 盒的球. key 为球的种类, value 为球的数目
//		map<char, int> strdata, resdata;
//		// 统计两个盒子中的球的类别和数目
//		for (auto c : str)
//			strdata[c]++;
//		for (auto c : res)
//			resdata[c]++;
//		// 在 B 盒中遍历球的种类, 和 A 盒的同类球进行数目对比.
//		for (map<char, int>::iterator it = resdata.begin(); it != resdata.end(); it++)
//		{
//			// 只要有一种球数目不满足条件, 就用 sta 标记为 false
//			// 反之, 必须所有种类的球都能够满足条件, 才能保持为 true
//			if (strdata[it->first] < it->second)
//			{
//				sta = false;
//				break;
//			}
//		}
//		if (true == sta)
//			cout << "Yes" << endl;
//		else
//			cout << "No" << endl;
//	}
//	return 0;
//}


//class Solution {
//public:
//	int MoreThanHalfNum_Solution(vector<int> numbers) {
//		int n = numbers.size();
//		if (n == 0) return 0;
//		int num = numbers[0], count = 1;
//		for (int i = 1; i < n; i++) {
//			if (numbers[i] == num) {
//				count++;
//			}
//			else {
//				count--;
//			}
//			if (count == 0) {
//				num = numbers[i];
//				count = 1;
//			}
//		}
//		// 经过上面的操作, 已经找到该数 num 了.
//		// 下面的操作是为了确认 num 确实是出现次数超过一半.
//		count = 0;
//		for (int i = 0; i < n; i++) {
//			if (numbers[i] == num) count++;
//		}
//		if (count * 2 > n) return num;
//		return 0;
//	}
//};

//class MaxGap {
//public:
//	int findMaxGap(vector<int> A, int n) {
//		vector<int> mxL(n, 0);//记录i位左侧最大值
//		vector<int> mxR(n, 0);//记录i位右侧最大值
//		int ma = INT_MIN;
//		for (int i = 0; i < n; i++) {//左侧
//			if (i == 0)
//				mxL[i] = A[i];
//			else
//				mxL[i] = max(A[i], mxL[i - 1]); // 第 i 位左侧的最大值就是 i - 1 位最大值和 i 的值的较大值
//		}
//		for (int i = n - 1; i >= 0; i--) {//右侧
//			if (i == n - 1)
//				mxR[i] = A[i];
//			else
//				mxR[i] = max(A[i], mxR[i + 1]);
//		}
//		// 例如输入数据为 [2,7,3,1,1]
//		// mxL 中的值为: [2,7,7,7,7]
//		// mxR 中的值为: [7,7,3,1,1]
//		int res = INT_MIN;
//		// 接下来的循环就依次求差找最大值即可.
//		for (int i = 0; i < n - 1; i++) {//求差
//			res = max(res, abs(mxL[i] - mxR[i + 1]));
//		}
//		return res;
//	}
//};

// 问题本身不复杂, 将思路考虑周全即可.
//class Printer {
//public:
//	vector<int> clockwisePrint(vector<vector<int> > mat, int n, int m) {
//		vector<int> ret;
//		int x1 = 0, y1 = 0; //左上角坐标
//		int x2 = n - 1, y2 = m - 1; //右下角坐标
//		// 这两个坐标表示了一个矩形(最开始的矩阵)
//		// 然后按照要求打印最外圈的数据.
//		// 打印完毕之后, 缩小矩形的大小.
//		while (x1 <= x2 && y1 <= y2) {
//			for (int j = y1; j <= y2; ++j)
//				ret.push_back(mat[x1][j]);
//			for (int i = x1 + 1; i < x2; ++i)
//				ret.push_back(mat[i][y2]);
//			for (int j = y2; x1 < x2 && j >= y1; --j) //x1 < x2：只有在不是单一的横行时才执行这个循环
//				ret.push_back(mat[x2][j]);
//			for (int i = x2 - 1; y1 < y2 && i > x1; --i)//y1 < y2：只有在不是单一的竖列时才执行这个循环
//				ret.push_back(mat[i][y1]);
//			x1++; y1++;
//			x2--; y2--;
//		}
//		return ret;
//	}
//};