//����
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int num;
//	int num1 = 0;
//	int sum = 0;
//	cin >> num;
//
//	while (num > 1)
//	{
//		num1 = num % 10;
//		num = num / 10;
//		sum = num + num1;
//
//		if (sum < 10)
//		{
//			cout << sum << endl;
//			break;
//		}
//		else
//		{
//			num = sum;
//			sum = 0;
//		}
//	}
//
//	system("pause");
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
//	int i;
//	int sum;
//
//	while (1)
//	{
//		cin >> s;
//		if (s[0] == '0')
//			break;
//
//		for (i = 0, sum = 0; s[i] != '\0'; i++)
//		{
//			sum += s[i] - '0';
//		}
//
//		cout << (sum - 1) % 9 + 1 << endl;
//	}
//	
//	system("pause");
//	return 0;
//}

/*
//���ظ���Ӵ�
class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		//��ϣ+����ָ��
		unordered_map<char, int> hash;
		int length = 0;

		for (int i = 0, j = 0; j < s.size(); j++)
		{
			hash[s[j]]++; //����ϣ����s[j]�ļ��� + 1, ��hash[s[j]] ++, ά����ָ������ƶ�
			while (hash[s[j]] > 1)
			{
				hash[s[i++]]--; //��ָ�������ƶ�������ָ����ָ������ļ���-1
			}
			length = max(length, j - i + 1);
		}
		return length;
	}
};
*/

/*
class Solution {
public:
	int longestConsecutive(vector<int>& nums) {
		unordered_set<int> un_set;
		for (auto e : nums)
		{
			un_set.insert(e);  //�ŵ���ϣ�У�ȥ��
		}

		int maxlength = 0, length = 0;
		for (auto e : un_set) //����un_set
		{
			if (!(un_set.count(e - 1))) //�ж��������ǰһ���Ƿ��ڹ�ϣ��
			{
				length = 1;
				int num = e;

				while (un_set.count(num + 1)) //�Ҹ���Ϊ��ʼ����������У�������ĳ�����ڹ�ϣ�У�����ֹ
				{
					num += 1;
					length += 1;
				}
			}
			maxlength = max(maxlength, length);
		}
		return maxlength;
	}
};
*/