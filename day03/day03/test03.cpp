//�ַ������ҳ�����������ִ�
#include <iostream>
#include <string>
using namespace std;

//˼·����aȥ�����������ִ�������������������ַ������ʾһ�����������ִ�����
//�����ִ���֮ǰ�����ִ��Ƚϣ��������������¸��������ִ����µ�b�У���bΪ����������ִ�
int main()
{
	string s; //�ַ���
	string a; //�����������ִ�
	string b; //��������ַ���
	cin >> s; //�����ַ���
	for (int i = 0; i <= s.size(); i++) //�����ַ���
	{
		if (s[i] >= '0' && s[i] <= '9') //�����ִ�
		{
			a = a + s[i]; 
		}
		else
		{
			if (b.size() < a.size()) //�Ƚ�a,b�ĸ����ִ���
			{
				b = a;
			}
			else
				a.clear(); //��a�ͷ�
		}
	}

	cout << b;
	system("pause");
	return 0;
}

////��������һ�����ֳ��ֵĴ����������鳤�ȵ�һ�룬���ҳ�������֡�
////��������һ������Ϊ9������{1,2,3,2,2,2,5,4,2}��
////��������2�������г�����5�Σ��������鳤�ȵ�һ�룬������2����������������0��
//
////˼·���������������������ڣ����м�λ�õ�����ΪҪ�ҵ������������򷵻�0
////���磺1,2,3,2,2,2,5,4,2 �����Ϊ1,2,2,2,2,2,3,4,5,��Ϊ2
//class Solution {
//public:
//	int MoreThanHalfNum_Solution(vector<int> numbers)
//	{
//		if (numbers.empty()) 
//			return 0;
//
//		sort(numbers.begin(), numbers.end()); 
//		int middle = numbers[numbers.size() / 2];
//
//		int count = 0; 
//		for (int i = 0; i < numbers.size(); ++i)
//		{
//			if (numbers[i] == middle) 
//				++count;
//		}
//
//		return (count > numbers.size() / 2) ? middle : 0;
//	}
//};
