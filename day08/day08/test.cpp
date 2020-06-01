//#include<iostream>
//#include<vector>
//#include<string>
//
//using namespace std;
//int main()
//{
//	int n;
//	cin>>n; 
//	vector<string> v;
//	v.resize(n); 
//	for(auto& str : v) 
//		cin>>str;
//	bool lenSym = true, lexSym = true; 
//	for(size_t i = 1; i < v.size(); ++i) 
//	{ 
//		if(v[i-1].size() >= v[i].size())
//		{ 
//			lenSym = false; break;
//		} 
//	}
//
//	for(size_t i = 1; i < v.size(); ++i) 
//	{ 
//		if(v[i-1] >= v[i]) 
//		{ 
//			lexSym = false; break; 
//		}
//	}
//	if (lenSym&& lexSym) 
//		cout<<"both"<<endl; 
//
//	else if (!lenSym && lexSym)
//		cout<<"lexicographically"<<endl;
//
//	else if (lenSym && !lexSym)
//		cout << "lengths" << endl; 
//
//	else if (!lenSym && !lexSym) 
//		cout << "none" << endl; 
//
//	return 0; 
//}

//#include<iostream> 
//
//using namespace std;
//
//int gcd(int a, int b)
//{
//	int r;
//	while(r = a%b)
//	{ 
//		a = b;
//		b = r;
//	}
//	return b;
//}
//
//int main() 
//{
//	int a,b;
//	while(cin >> a >> b)
//	{ 
//		cout << a*b/gcd(a,b) <<endl;
//	}
//	
//	return 0; 
//}

////将前缀字符串路径和相同路径剔除，只mkdir －p最长或者唯一路径就可以解决这个问题
//#include <iostream>
//#include <fstream>
//#include <algorithm>
//#include <string>
//#include <vector>
//using namespace std;
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		vector<string> list(n); //带头循环的双向链表
//		vector<bool> flag(n, true);//设置标志位
//		for (int i = 0; i < n; ++i) 
//			cin >> list[i];
//		sort(list.begin(), list.end()); //将类似字符串经过排序，放在一起
//		for (int i = 0; i < list.size() - 1; ++i)
//		{
//			// 1、两串相同
//			// 2、前串是后串的子串，而且后串后一位是 '/'
//			if (list[i] == list[i + 1]) 
//				flag[i] = false;
//			else if (list[i].size() < list[i + 1].size() && list[i] == list[i + 1].substr(0, list[i].size()) && list[i + 1][list[i].size()] == '/')
//				flag[i] = false;
//		}
//		for (int i = 0; i < list.size(); ++i)
//			if (flag[i]) 
//				cout << "mkdir -p " << list[i] << endl;
//		cout << endl;
//	}
//	return 0;
//}

//substr
//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	string s = "123abc";
//	string a = s.substr(2, 2);//从下标为2的位置开始，拷贝两个字符返回。
//	cout << a; //3a
//	return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	string s = "123abc";
//	string a = s.substr();//不加参数会拷贝整个s
//	cout << a; //123abc
//	return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	string s = "123abc";
//	string a = s.substr(3);//从下标为3的位置开始，拷贝剩余全部字符返回。
//	cout << a;
//	abc
//	return 0;
//}

////DFS问题 摘抄
//#include <iostream>
//#include <fstream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//struct pos 
//{
//	int x, y; 
//};
//
//int bfs(vector<vector<char> > & map, vector<vector<bool> > & visit, pos & start)
//{
//	const int dir[4][2] = { {-1,0},{1,0},{0,-1},{0,1} };
//	queue<pos> que;
//	int count = 0;
//	int m = map.size(), n = map[0].size();
//	que.push(start);
//	visit[start.x][start.y] = true; 
//	++count;
//	while (!que.empty())
//	{
//		pos cur = que.front(), next;
//		que.pop();
//		for (int i = 0; i < 4; ++i)
//		{
//			next.x = cur.x + dir[i][0];
//			next.y = cur.y + dir[i][1];
//			if (next.x >= 0 && next.x < m && next.y >= 0 && next.y < n && !visit[next.x][next.y] && map[next.x][next.y] == '.')
//			{
//				que.push(next);
//				visit[next.x][next.y] = true;
//				++count;
//			}
//		}
//	}
//	return count;
//}
//int main()
//{
//	int m, n;
//	while (cin >> m >> n && (m*n))
//	{
//		pos start;
//		vector<vector<char> > map(m, vector<char>(n));
//		vector<vector<bool> > visit(m, vector<bool>(n));
//		for (int i = 0; i < m; ++i)
//			for (int j = 0; j < n; ++j)
//			{
//				visit[i][j] = false;
//				cin >> map[i][j];
//				if (map[i][j] == '@')
//					start.x = i, start.y = j;
//			}
//		cout << bfs(map, visit, start) << endl;
//	}
//	return 0;
//}

//#include<iostream>
//#include<vector>
//using namespace std;
//
////通过vector创建的二维数组进行递归调用，把已经走过的结点标记成'1',避免访问过的结点重复计数
//void BlackCount(vector<vector<char>>& v, int x, int y, int m, int n, int& count)
//{
//	//count通过引用的方式，正好递归调用进行计数
//	if (x < 0 || y < 0 || x >= m || y >= n || v[x][y] == '1' || v[x][y] == '#')
//		return;
//	count++;
//	v[x][y] = '1';
//	BlackCount(v, x - 1, y, m, n, count);
//	BlackCount(v, x, y - 1, m, n, count);
//	BlackCount(v, x + 1, y, m, n, count);
//	BlackCount(v, x, y + 1, m, n, count);
//}
//
//int main()
//{
//	int m, n;
//	while (cin >> m >> n)
//	{
//		int x, y;
//		int count = 0;
//		vector<vector<char>> v(m, vector<char>(n, 0));
//		for (size_t i = 0; i < m; i++)
//		{
//			for (size_t j = 0; j < n; j++)
//			{
//				cin >> v[i][j];
//				if (v[i][j] == '@')
//				{
//					x = i;//x标记起始i结点
//					y = j;//y表示起始j结点
//				}
//			}
//		}
//		BlackCount(v, x, y, m, n, count);
//		cout << count << endl;
//	}
//	return 0;
//}

/*
补齐字符串，按照26进制进行计算
*/
//#include <iostream>
//#include <string>
//#include <vector>
//#include<math.h>
//using namespace std;
//
//int main() 
//{
//	//字符串只包含小写字母
//	string s1, s2;
//	int len1, len2;
//	while (cin >> s1 >> s2 >> len1 >> len2) 
//	{
//		//只包含小写字母的字符串可以看成26进制的数制
//		//将s1和s2补长到len2长度
//		s1.append(len2 - s1.size(), 'a' - 1);
//		s2.append(len2 - s2.size(), 'a' - 1);
//		vector<int> array;
//		for (int i = 0; i < len2; i++)
//			array.push_back(s2[i] - s1[i]);
//
//		int result = 0;
//		for (int i = len1; i <= len2; i++) 
//		{
//			for (int k = 0; k < i; k++) 
//				result += array[k] * pow(26, i - 1 - k);
//		}
//		//所有字符串最后都不包含是s2自身，所以最后要减1；
//		cout << result - 1 << endl;
//	}
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	string A, B;
//	while (cin >> A >> B) 
//	{
//		int aLength = A.length();
//		int bLength = B.length();
//		vector<vector<int> > dp(aLength, vector<int>(bLength, 0));
//
//		// 初始化边界
//		dp[0][0] = (A[0] == B[0]) ? 1 : 0;
//		for (int i = 1; i < aLength; i++) 
//		{
//			dp[i][0] = (A[i] == B[0]) ? 1 : 0;
//			dp[i][0] = max(dp[i - 1][0], dp[i][0]);
//		}
//		for (int j = 1; j < bLength; j++) 
//		{
//			dp[0][j] = (A[0] == B[j]) ? 1 : 0;
//			dp[0][j] = max(dp[0][j - 1], dp[0][j]);
//		}
//
//		// 计算
//		for (int i = 1; i < aLength; i++) 
//		{
//			for (int j = 1; j < bLength; j++) 
//			{
//				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//				if (A[i] == B[j]) 
//					dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + 1);
//			}
//		}
//		cout << dp[aLength - 1][bLength - 1] << endl;
//	}
//	return 0;
//}

//#include<iostream>
//#include <iomanip>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	int n, m, k;
//	while (cin >> n >> m >> k) 
//	{
//		// 用来保存蘑菇地图
//		vector<vector<int> > table((n + 1), vector<int>(m + 1));
//		// 构造蘑菇地图
//		int x, y;
//		for (int i = 0; i < k; i++) 
//		{
//			cin >> x >> y;
//			table[x][y] = 1;
//		}
//		//P[i][j]表示不碰到蘑菇走到i，j的概率
//		vector<vector<double> > P((n + 1), vector<double>(m + 1));
//		P[1][1] = 1.0; //起点概率为1
//		for (int i = 1; i <= n; i++) 
//		{
//			for (int j = 1; j <= m; j++)
//			{
//				if (!(i == 1 && j == 1))  //跳过起点
//				{
//					P[i][j] = P[i - 1][j] * (j == m ? 1 : 0.5) + P[i][j - 1] * (i == n ? 1 : 0.5); //边界的时候，概率为1
//					if (table[i][j] == 1) 
//						P[i][j] = 0; //如果该点有蘑菇，概率置为0
//				}
//			}
//		}
//		cout << fixed << setprecision(2) << P[n][m] << endl;
//	}
//}

//斐波那契
//class Solution {
//public:
//	int Fibonacci(int n) {
//		if (n == 0)
//			return 0;
//		if (n == 1 || n == 2)
//			return 1;
//
//		int fn1 = 1, fn2 = 0;
//		int fn;
//		for (int i = 2; i <= n; ++i)
//		{
//			fn = fn1 + fn2;
//			//更新状态
//			fn2 = fn1;
//			fn1 = fn;
//		}
//		return fn;
//	}
//};

//变态青蛙
//class Solution {
//public:
//	int jumpFloorII(int number) {
//		if (number <= 0)
//			return 0;
//		if (number == 1)
//			return 1;
//		int ret = 1;
//		for (int i = 2; i <= number; ++i)
//		{
//			//状态转移：F(i) = 2 * F(i - 1)
//			ret *= 2;
//		}
//		return ret;
//	}
//};

//最大连续子数组和
//class Solution {
//public:
//	int FindGreatestSumOfSubArray(vector<int> array) {
//		int len = array.size();
//		int* dp = new int[len];
//		初始化
//		dp[0] = array[0];
//		int MaxDp = dp[0];
//		for (int i = 1; i < len; ++i)
//		{
//			转移方程 F[i] = max(F(i-1) + array[i], array[i])
//			dp[i] = max(dp[i - 1] + array[i], array[i]);
//			返回最大值
//			MaxDp = max(MaxDp, dp[i]);
//		}
//		return MaxDp;
//	}
//};

//最大子序列和
//class Solution {
//public:
//	int maxSubArray(vector<int>& nums) {
//		int numSize = nums.size();
//		int TmpSum = nums[0];
//		int MaxSum = nums[0];
//		for (int i = 1; i < numSize; i++)
//		{
//			TmpSum = max(TmpSum + nums[i], nums[i]);
//			MaxSum = max(MaxSum, TmpSum);
//		}
//		return MaxSum;
//	}
//};

//分割字符串
//class Solution {
//public:
//	bool wordBreak(string s, unordered_set<string> &dict) {
//		if (s.empty())
//			return false;
//		int len = s.size();
//		vector<bool> canBreak(len + 1, false); //len+1 右F[0]辅助
//		//初始化 F(0) = true;
//		canBreak[0] = true;
//		for (int i = 1; i <= len; ++i)
//		{
//			//转移方程：F(i): j<i && [j+1, i]
//			for (int j = i - 1; j >= 0; --j)
//			{
//				if (canBreak[j] && dict.find(s.substr(j, i - j)) != dict.end())
//				{
//					canBreak[i] = true;
//					break;
//				}
//			}
//		}
//		//返回结果 F(s.size())
//		return canBreak[len];
//	}
//};

#/*include<stdio.h>

int main()
{
	long long der[21] = { 0, 0, 1 };
	int i;
	for (i = 3; i < 21; i++) 
	{
		der[i] = (i - 1) * (der[i - 2] + der[i - 1]);
	}
	int n;
	while (scanf("%d", &n) != EOF) 
	{
		printf("%lld\n", der[n]);
	}
	return 0;
}*/

//三角矩阵
//class Solution {
//public:
//	int minimumTotal(vector<vector<int> > &triangle) {
//		//初始化 F(0,0) = triangle[0][0]
//		vector<vector<int>> minPathSum(triangle); //二维数组
//		int row = triangle.size(); //只需要行数
//		for (int i = 1; i < row; ++i) //从第二行开始
//		{
//			for (int j = 0; j <= i; ++j)
//			{
//				//F(i,0)第一个数
//				if (j == 0)
//					minPathSum[i][j] = minPathSum[i - 1][j] + triangle[i][0];
//				//F(i,i)最后一个数
//				else if (i == j)
//					minPathSum[i][j] = minPathSum[i - 1][j - 1] + triangle[i][i];
//				//F(i,j)
//				else
//					minPathSum[i][j] = min(minPathSum[i - 1][j - 1], minPathSum[i - 1][j]) + triangle[i][j];
//			}
//		}
//		int ret = minPathSum[row - 1][0]; //下标均从0开始，row最小值为1
//		for (int i = 1; i < row; ++i)
//			ret = min(minPathSum[row - 1][i], ret); //从第二行开始比较
//		return ret;
//	}
//};

class Solution {
public:
	int minimumTotal(vector<vector<int> > &triangle) {
		//初始化F(row - 1, j) = triangle[row -1][j]
		vector<vector<int>> minPathSum(triangle);
		int row = minPathSum.size();
		for (int i = row - 2; i >= 0; --i) //从倒数第二行开始
		{
			for (int j = 0; j <= i; ++j)
			{
				minPathSum[i][j] = min(minPathSum[i + 1][j], minPathSum[i + 1][j + 1]) + triangle[i][j];
			}
		}
		return minPathSum[0][0];
	}
};