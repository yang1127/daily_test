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

//��ȫ��

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
//				for (int j = 2; j <= sqrt(i); j++)//��Լ��
//				{
//					if (i % j == 0) 
//					{
//						if (i / j == j) //����Լ����ͬ��ֻ��Ҫ��һ������
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
//	//�ɵ�λ���λ���
//	int i = num1.size() - 1;
//	int j = num2.size() - 1;
//	string result = "";
//
//	//��ǰλ����ӽ��
//	int carry = 0;
//	while (i >= 0 || j >= 0) 
//	{
//		if (i >= 0) 
//			carry += num1[i] - '0';
//		if (j >= 0) 
//			carry += num2[j] - '0';
//
//		//��ǰΪ�����ֵ������10
//		result += (char)(carry % 10 + '0');
//
//		//�������10,���Ͻ�һλ
//		carry /= 10;
//
//		i--;
//		j--;
//	}
//
//	//�����֮��������н�λ�����ټ�1
//	if (carry == 1) 
//		result += '1';
//
//	//��������
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
//	// word��մ�֮��ı༭����Ϊword�ĳ���
//	if (word1.empty() || word2.empty()) {
//		return max(word1.size(), word2.size());
//	}
//	int len1 = word1.size();
//	int len2 = word2.size();
//	// F(i,j)��ʼ��
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
//			// F(i,j) = min { F(i-1,j��+1, F(i,j-1) +1, F(i-1,j-1) +
//			//(w1[i]==w2[j]?0:1) }
//			// �ж�word1�ĵ�i���ַ��Ƿ���word2�ĵ�j���ַ����
//			if (word1[i - 1] == word2[j - 1]) 
//			{
//				f[i][j] = 1 + min(f[i][j - 1], f[i - 1][j]);
//				// �ַ���ȣ�F(i-1,j-1)�༭���벻��
//				f[i][j] = min(f[i][j], f[i - 1][j - 1]);
//			}
//			else
//			{
//				f[i][j] = 1 + min(f[i][j - 1], f[i - 1][j]);
//				// �ַ�����ȣ�F(i-1,j-1)�༭���� + 1
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

////���ʼ�
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

////�ֲ�
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

////����
//// ���� hash �������ĸ������֮���ת������. ע�⴦���Сд�����.
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
//		// sta ���������ʾ��ǰ�Ƿ����� B �е����� A ���д���, ������Ŀ������ A ��.
//		bool sta = true;
//		// strdata ������ A �е���. key Ϊ�������, value Ϊ�����Ŀ
//		// resdata ������ B �е���. key Ϊ�������, value Ϊ�����Ŀ
//		map<char, int> strdata, resdata;
//		// ͳ�����������е����������Ŀ
//		for (auto c : str)
//			strdata[c]++;
//		for (auto c : res)
//			resdata[c]++;
//		// �� B ���б����������, �� A �е�ͬ���������Ŀ�Ա�.
//		for (map<char, int>::iterator it = resdata.begin(); it != resdata.end(); it++)
//		{
//			// ֻҪ��һ������Ŀ����������, ���� sta ���Ϊ false
//			// ��֮, ����������������ܹ���������, ���ܱ���Ϊ true
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

