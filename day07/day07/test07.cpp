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
//};////�����ַ�������//#include <string>
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
//}////���ս�//class Bonus {
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