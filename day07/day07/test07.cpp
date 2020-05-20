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
//};

////计算字符串问题
//#include <string>
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
//}

////年终奖
//class Bonus {
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

//#include <iostream>
//#include <cmath>
//
////long long是两个关键字拼起来的，用起来很不方便，重命名一下
//typedef long long _sint64;
//
////有理数类的声明
//class RationalNumber {
//	bool m_infinate; //处理除数为零
//	bool m_negative; //处理负数
//	_sint64 m_numerator; //分子，方便输出
//	_sint64 m_denominator; //分母
//	_sint64 m_integer; //整数部分
//	_sint64 m_numeratorAll; //记录无整数分数的分子，方便进行运算
//	_sint64 calcGCD(_sint64 a, _sint64 b); //求最大公约数的函数
//public:
//	RationalNumber(_sint64 numerator, _sint64 denominator); //构造函数
//	RationalNumber operator+(RationalNumber const& o) const; //四则运算重载
//	RationalNumber operator-(RationalNumber const& o) const;
//	RationalNumber operator*(RationalNumber const& o) const;
//	RationalNumber operator/(RationalNumber const& o) const;
//	//输出流运算符重载
//	friend std::ostream &operator<<(std::ostream &os, RationalNumber const& o);
//};
//
////有理数类每个方法的实现
//_sint64 RationalNumber::calcGCD(_sint64 a, _sint64 b)
//{
//	if (b == 0)
//	{
//		return a;
//	}
//	//辗转相除法
//	return calcGCD(b, a % b);
//}
//
//RationalNumber::RationalNumber(_sint64 numerator, _sint64 denominator)
//{
//	m_negative = false;
//	m_infinate = false;
//	//处理分母为零的情况
//	if (denominator == 0)
//	{
//		m_infinate = true;
//		return;
//	}
//
//	//这里这样写，是因为在通过计算结果进行构造过程中，有可能出现分子分母均为负的情况。
//	if (numerator < 0)
//	{
//		m_negative = !m_negative;
//	}
//
//	if (denominator < 0)
//	{
//		m_negative = !m_negative;
//	}
//	//计算整数、分子、分母。其中分母要参与下面的运算，所以不能是负的，用abs取绝对值，分子要保留原值
//	m_integer = numerator / denominator;
//	m_numerator = numerator - m_integer * denominator;
//	m_denominator = abs(denominator);
//	//约分，注意传给子函数的分子必须是正的，分母上面处理过了
//	if (m_numerator)
//	{
//		_sint64 maxtmp = calcGCD(abs(m_numerator), m_denominator);
//		if (maxtmp)
//		{
//			m_numerator /= maxtmp;
//			m_denominator /= maxtmp;
//		}
//	}
//	//计算约分后假分数版的分子，因为后续运算是不需要整数部分的，所以必须用假分数的分子算。
//	m_numeratorAll = m_numerator + m_integer * m_denominator;
//}
//
////以下为分数的加减乘除，统统使用m_numeratorAll（假分数的分子）进行运算。
//RationalNumber RationalNumber::operator+(RationalNumber const& o) const
//{
//	_sint64 numerator = (m_numeratorAll * o.m_denominator) +
//		(o.m_numeratorAll * m_denominator);
//	_sint64 denominator = m_denominator * o.m_denominator;
//	return RationalNumber(numerator, denominator);
//}
//
//RationalNumber RationalNumber::operator-(RationalNumber const& o) const
//{
//	_sint64 numerator = (m_numeratorAll * o.m_denominator) -
//		(o.m_numeratorAll * m_denominator);
//	_sint64 denominator = m_denominator * o.m_denominator;
//	return RationalNumber(numerator, denominator);
//}
//
//RationalNumber RationalNumber::operator*(RationalNumber const& o) const
//{
//	_sint64 numerator = m_numeratorAll * o.m_numeratorAll;
//	_sint64 denominator = m_denominator * o.m_denominator;
//	return RationalNumber(numerator, denominator);
//}
//
//RationalNumber RationalNumber::operator/(RationalNumber const& o) const
//{
//	_sint64 numerator = m_numeratorAll * o.m_denominator;
//	_sint64 denominator = m_denominator * o.m_numeratorAll;
//	return RationalNumber(numerator, denominator);
//}
//
//std::ostream &operator<<(std::ostream &os, RationalNumber const& o)
//{
//	//分母为0的情况就不用继续了
//	if (o.m_infinate)
//	{
//		os << "Inf";
//		return os;
//	}
//	//整数和分子为0那干脆就是0了
//	if (o.m_numerator == 0 && o.m_integer == 0)
//	{
//		os << "0";
//		return os;
//	}
//	//负数打印括号和负号
//	if (o.m_negative)
//	{
//		os << "(-";
//	}
//	//有整数就打整数
//	if (o.m_integer)
//	{
//		os << abs(o.m_integer);
//		if (o.m_numerator) //整数小数都有就打个空格隔开
//		{
//			os << " ";
//		}
//	}
//	//有分数就打分数，分母已经abs过了，这里可以不用
//	if (o.m_numerator)
//	{
//		os << abs(o.m_numerator) << '/' << o.m_denominator;
//	}
//	//负数的后半边括号
//	if (o.m_negative)
//	{
//		os << ")";
//	}
//	return os;
//}
//
//int main()
//{
//	_sint64 n1, d1, n2, d2;
//	scanf("%lld/%lld %lld/%lld", &n1, &d1, &n2, &d2);
//	RationalNumber rn1(n1, d1), rn2(n2, d2);
//	//轻松+愉快的使用函数时间
//	std::cout << rn1 << " + " << rn2 << " = " << rn1 + rn2 << '\n';
//	std::cout << rn1 << " - " << rn2 << " = " << rn1 - rn2 << '\n';
//	std::cout << rn1 << " * " << rn2 << " = " << rn1 * rn2 << '\n';
//	std::cout << rn1 << " / " << rn2 << " = " << rn1 / rn2 << '\n';
//
//	return 0;
//}

//连续最大和

//#include<iostream>
//#include<vector>
//#include <climits>
//using namespace std;
//
//int main()
//{
//      int n;
//      int num;
//      int max = 0;
//      int Max = INT_MIN; //全部为负数时，连续最大和为最大负数
//      while (cin >> n)
//      {
//		  vector<int> v;
//          for (int i = 0; i < n; i++)
//		  {
//			  cin >> num;
//              v.push_back(num);
//          }
//
//          for (int i = 0; i < n; i++)
//          {
//              if (max <= 0) //和小于等于0，没必要再计入，max从当前开始再计起
//				  max = v[i];
//              else  //和不小于0，对获得最大和有贡献
//                  max += v[i];
//
//              if (max > Max)
//                  Max = max;
//             }
//             cout << Max << endl;
//             v.clear();
//      }
//      return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main() 
//{
//	int n;
//	cin >> n;
//	vector<int> v(n);
//	for (int i = 0; i < n; ++i) 
//		cin >> v[i];
//	
//	vector<int> dp(n);    //dp[i]是以v[i]结尾的子数组的最大和
//	dp[0] = v[0];
//	int res = dp[0];
//	for (int i = 1; i < n; ++i) {
//		//dp[i] = dp[i-1]>0 ? dp[i-1]+v[i] : v[i];
//		dp[i] = max(dp[i - 1] + v[i], v[i]);
//		res = max(res, dp[i]);
//	}
//	cout << res << endl;
//	return 0;
//}