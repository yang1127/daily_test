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
