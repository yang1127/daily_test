//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	int a = 0, b = 1, c; //ʹ������������������ʵ��쳲���������
//	int min;   
//	cin >> n; 
//	min = n - a; //������С��Ϊ������ȥǰһ��
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

////΢�ź��
//class Gift {
//public:
//	int getValue(vector<int> gifts, int n) {
//		sort(gifts.begin(), gifts.end());
//		����һ���������֮���Ȼ�����м�
//		int middle = gifts[n / 2];
//		int count = 0;
//		for (int i = 0; i < n; i++)
//		{
//			ͳ�������м�����ĸ���
//			if (gifts[i] == middle)
//			{
//				count++;
//			}
//		}
//		�����������һ�룬����ڳ���һ�����
//		if (count > n / 2)
//			return middle;
//		else
//			return 0;
//	}
//};

////�����ַ�������
//#include <string>
//#include <iostream>
//#include <vector>
//using namespace std;
//int minDistance(string word1, string word2) {
//	 word��մ�֮��ı༭����Ϊword�ĳ���
//	if (word1.empty() || word2.empty()) {
//		return max(word1.size(), word2.size());
//	}
//	int len1 = word1.size();
//	int len2 = word2.size();
//	 F(i,j)��ʼ��
//	vector<vector<int> > f(1 + len1, vector<int>(1 + len2, 0));
//	for (int i = 0; i <= len1; ++i) {
//			f[i][0] = i;
//	}
//	for (int i = 0; i <= len2; ++i) {
//		f[0][i] = i;
//	}
//	for (int i = 1; i <= len1; ++i) {
//		for (int j = 1; j <= len2; ++j) {
//			 F(i,j) = min { F(i-1,j��+1, F(i,j-1) +1, F(i-1,j-1) +
//			(w1[i]==w2[j]?0:1) }
//			 �ж�word1�ĵ�i���ַ��Ƿ���word2�ĵ�j���ַ����
//			if (word1[i - 1] == word2[j - 1]) {
//				f[i][j] = 1 + min(f[i][j - 1], f[i - 1][j]);
//				 �ַ���ȣ�F(i-1,j-1)�༭���벻��
//				f[i][j] = min(f[i][j], f[i - 1][j - 1]);
//			}
//			else {
//				f[i][j] = 1 + min(f[i][j - 1], f[i - 1][j]);
//				 �ַ�����ȣ�F(i-1,j-1)�༭���� + 1
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

////���ս�
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
//				//�����������꣬�����κδ���
//				if (i == 0 && j == 0)
//					continue;
//				//��������е��ٽ�ߣ�Ҳ���ǵ�һ�У���ô��ֻ��������
//				//�����ߵ�ʱ��õ��Ҫ�������ֵ��������
//				else if (i == 0) {
//					allPrice[i][j] = allPrice[i][j - 1] + board[i][j];
//				}
//				//��������е��ٽ�ߣ�Ҳ���ǵ�һ�У���ô��ֻ��������
//				//�����ߵ�ʱ��õ��Ҫ�������ֵ��������
//				else if (j == 0) {
//					allPrice[i][j] = allPrice[i - 1][j] + board[i][j];
//				}
//				else {
//					//��ȥ�����ٽ�ߣ�ʣ�µľ��Ǽ��������ߣ�Ҳ�������ߣ�
//					//��ʱ���Ҫ�����ߵ���ǰ������п��ܵ������Ҳ�����ߵ���ǰ��
//					//����·���ĺ��ǲ�����Щ���е���õ�·�����������ˡ�
//					allPrice[i][j] = max(allPrice[i][j - 1], allPrice[i - 1][j]) + board[i][j];
//				}
//			}
//		}
//		// �������һ��������ֵ�����ͱ�ʾ�����Ͻ��ߵ����½ǵ������
//		return allPrice[length - 1][wideth - 1];
//	}
//};

//#include <iostream>
//#include <cmath>
//
////long long�������ؼ���ƴ�����ģ��������ܲ����㣬������һ��
//typedef long long _sint64;
//
////�������������
//class RationalNumber {
//	bool m_infinate; //�������Ϊ��
//	bool m_negative; //������
//	_sint64 m_numerator; //���ӣ��������
//	_sint64 m_denominator; //��ĸ
//	_sint64 m_integer; //��������
//	_sint64 m_numeratorAll; //��¼�����������ķ��ӣ������������
//	_sint64 calcGCD(_sint64 a, _sint64 b); //�����Լ���ĺ���
//public:
//	RationalNumber(_sint64 numerator, _sint64 denominator); //���캯��
//	RationalNumber operator+(RationalNumber const& o) const; //������������
//	RationalNumber operator-(RationalNumber const& o) const;
//	RationalNumber operator*(RationalNumber const& o) const;
//	RationalNumber operator/(RationalNumber const& o) const;
//	//��������������
//	friend std::ostream &operator<<(std::ostream &os, RationalNumber const& o);
//};
//
////��������ÿ��������ʵ��
//_sint64 RationalNumber::calcGCD(_sint64 a, _sint64 b)
//{
//	if (b == 0)
//	{
//		return a;
//	}
//	//շת�����
//	return calcGCD(b, a % b);
//}
//
//RationalNumber::RationalNumber(_sint64 numerator, _sint64 denominator)
//{
//	m_negative = false;
//	m_infinate = false;
//	//�����ĸΪ������
//	if (denominator == 0)
//	{
//		m_infinate = true;
//		return;
//	}
//
//	//��������д������Ϊ��ͨ�����������й�������У��п��ܳ��ַ��ӷ�ĸ��Ϊ���������
//	if (numerator < 0)
//	{
//		m_negative = !m_negative;
//	}
//
//	if (denominator < 0)
//	{
//		m_negative = !m_negative;
//	}
//	//�������������ӡ���ĸ�����з�ĸҪ������������㣬���Բ����Ǹ��ģ���absȡ����ֵ������Ҫ����ԭֵ
//	m_integer = numerator / denominator;
//	m_numerator = numerator - m_integer * denominator;
//	m_denominator = abs(denominator);
//	//Լ�֣�ע�⴫���Ӻ����ķ��ӱ��������ģ���ĸ���洦�����
//	if (m_numerator)
//	{
//		_sint64 maxtmp = calcGCD(abs(m_numerator), m_denominator);
//		if (maxtmp)
//		{
//			m_numerator /= maxtmp;
//			m_denominator /= maxtmp;
//		}
//	}
//	//����Լ�ֺ�ٷ�����ķ��ӣ���Ϊ���������ǲ���Ҫ�������ֵģ����Ա����üٷ����ķ����㡣
//	m_numeratorAll = m_numerator + m_integer * m_denominator;
//}
//
////����Ϊ�����ļӼ��˳���ͳͳʹ��m_numeratorAll���ٷ����ķ��ӣ��������㡣
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
//	//��ĸΪ0������Ͳ��ü�����
//	if (o.m_infinate)
//	{
//		os << "Inf";
//		return os;
//	}
//	//�����ͷ���Ϊ0�Ǹɴ����0��
//	if (o.m_numerator == 0 && o.m_integer == 0)
//	{
//		os << "0";
//		return os;
//	}
//	//������ӡ���ź͸���
//	if (o.m_negative)
//	{
//		os << "(-";
//	}
//	//�������ʹ�����
//	if (o.m_integer)
//	{
//		os << abs(o.m_integer);
//		if (o.m_numerator) //����С�����оʹ���ո����
//		{
//			os << " ";
//		}
//	}
//	//�з����ʹ��������ĸ�Ѿ�abs���ˣ�������Բ���
//	if (o.m_numerator)
//	{
//		os << abs(o.m_numerator) << '/' << o.m_denominator;
//	}
//	//�����ĺ�������
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
//	//����+����ʹ�ú���ʱ��
//	std::cout << rn1 << " + " << rn2 << " = " << rn1 + rn2 << '\n';
//	std::cout << rn1 << " - " << rn2 << " = " << rn1 - rn2 << '\n';
//	std::cout << rn1 << " * " << rn2 << " = " << rn1 * rn2 << '\n';
//	std::cout << rn1 << " / " << rn2 << " = " << rn1 / rn2 << '\n';
//
//	return 0;
//}

//��������

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
//      int Max = INT_MIN; //ȫ��Ϊ����ʱ����������Ϊ�����
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
//              if (max <= 0) //��С�ڵ���0��û��Ҫ�ټ��룬max�ӵ�ǰ��ʼ�ټ���
//				  max = v[i];
//              else  //�Ͳ�С��0���Ի�������й���
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
//	vector<int> dp(n);    //dp[i]����v[i]��β�������������
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

////��С������
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a, b;
//	int c = 0;
//	while (cin >> a >> b)
//	{
//		while (++c)
//		{
//			if (c % a == 0 && c % b == 0)
//			{
//				cout << c << endl;
//				break;
//			}
//		}
//		c = 0;
//	}
//	system("pause");
//	return 0;
//}

//��ת�ַ���
//class Solution {
//public:
//	void reverseString(vector<char>& s) {
//		if (s.empty())
//			return;
//
//		int start = 0;
//		int end = s.size() - 1;
//		while (start < end)
//		{
//			swap(s[start], s[end]);
//			start++;
//			end--;
//		}
//	}
//};

//�ַ����е�һ��Ψһ�ַ�
//class Solution {
//public:
//	int firstUniqChar(string s) {
//		int count[256] = { 0 };
//		for (int i = 0; i < s.size(); i++) //// ͳ��ÿ���ַ����ֵĴ���
//			count[s[i]] += 1;
//
//
//		for (int i = 0; i < s.size(); i++) //��ֻ����һ�ε��ַ�
//		{
//			if (count[s[i]] == 1) //��һ�����ظ������±�
//				return i;
//		}
//		return -1; //�����ڣ�����-1
//	}
//};

////�ַ������һ�����ʵĳ���
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string s;
//	while (getline(cin, s))
//	{
//		size_t tmp = s.rfind(" "); //�Ӻ���ǰ�ַ����е�һ���ո�λ��
//		cout << s.size() - tmp - 1 << endl; //s.size() �ܴ�С -tmp ���һ������+�ո��С -1 ���һ�����ʴ�С
//		 
//	}
//	system("pause");
//	return 0;
//}


//�����ַ���
//��ͨ�����
//class Solution {
//	bool IsNumberOrLetter(char c)
//	{
//		if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
//			return true;
//		return false;
//	}
//public:
//	bool isPalindrome(string s) {
//		if (s.empty())
//			return true;
//
//		int begin = 0;
//		int end = s.size() - 1;
//		while (begin < end)
//		{
//			while (begin < end) //��ǰ������һ�������ַ�������ĸ
//			{
//				if (IsNumberOrLetter(s[begin]))
//					break;
//				++begin;
//			}
//
//			while (begin < end)//�Ӻ���ǰ��һ�������ַ�������ĸ
//			{
//				if (IsNumberOrLetter(s[end]))
//					break;
//				--end;
//			}
//
//			if (begin < end) //���begint��endλ���ַ��Ƿ���Ȼ��Ƿ����ִ�С�����
//			{
//				if ((s[begin] + 32 - 'a') % 32 != (s[end] + 32 - 'a') % 32)
//					return false;
//				++begin;
//				--end;
//			}
//		}
//		return true;
//	}
//};

////���ú������
//class Solution {
//public:
//	bool isPalindrome(string s) {
//		string str = ""; //����һ�����ַ���
//
//		//��s�ַ��������������֡���ĸ�Ҵ�дתΪСд����ĸ������str�ַ�����
//		for (auto c : s) //C++11 auto�÷�
//		{
//			if (isalnum(c)) //isalnum()���Ƿ�Ϊ��ĸ��������
//				str += tolower(c); //tolower()����ĸ��дתСд
//		}
//
//		//��βָ�����str�ַ������ж��Ƿ����
//		for (int i = 0, j = str.size() - 1; i < j; i++, j--)
//		{
//			if (str[i] != str[j])
//				return false;
//		}
//		return true;
//	}
//};
