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

/*

//����
#include <iostream>

using namespace std;

//����ȡ��
int MidNum(int* a, int begin, int end)
{
	int mid = (begin + end) >> 1;
	if (a[begin] < a[end])
	{
		if (a[end] < a[mid])
			return end;
		else if (a[begin] < a[mid])
			return mid;
		else
			return begin;
	}
	else  // a[begin] > a[end]
	{
		if (a[begin] < a[mid])
			return begin;
		else if (a[end] > a[mid])
			return end;
		else
			return mid;
	}
}

void Swap(int* p1, int* p2)
{
	int tmp = *p2;
	*p2 = *p1;
	*p1 = tmp;
}

int Sort(int* a, int begin, int end)
{
	int mid = MidNum(a, begin, end);
	Swap(&a[mid], &a[end]);

	int key = a[end];
	while (begin < end)
	{
		while (begin < end && a[begin] <= key)
			++begin;
		a[end] = a[begin];

		while (begin < end && a[end] >= key)
			--end;
		a[begin] = a[end];
	}
	a[begin] = key;

	return begin;
}

void QuickSort(int* a, int begin, int end)
{
	if (begin >= end)
		return;

	int key_index = Sort(a, begin, end);
	QuickSort(a, begin, key_index - 1);
	QuickSort(a, key_index + 1, end);
}

int main()
{
	int a[] = { 8, 5, 2, 7, 9, 6, 1, 3 };
	QuickSort(a, 0, sizeof(a) / sizeof(a[0]) - 1);
	for (auto e : a)
	{
		cout << e << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}
*/

/*
//2020/09/10 ���ŷ�
//��ˮ����
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int w, l;
	cin >> w >> l;
	vector<int> v(l);
	for (int i = 0; i < l; i++)
	{
		cin >> v[i];
	}

	if (v.size() == 0)
		return 0;

	int left = 0;
	int right = l - 1;
	int minleft = v[left];
	int minright = v[right];
	int water = 0;
	int relwater = 0;

	while (left <= right)
	{
		minleft = min(v[left], minleft); //��ǰ�߶��������͸߶�
		int minright = min(v[right], minright);

		if (minleft < minright)
		{
			water += v[left] - minleft;
			left++;
		}
		else
		{
			water += v[right] - minright;
			right--;
		}
	}

	relwater = water * w;
	cout << relwater << endl;

	system("pause");
	return 0;
}
*/


//9.12 ����-�е�

//���Ļ���
//������
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string s;
	while (cin >> s)
	{
		int count = 0;
		int n = s.size();

		string rev(s);
		reverse(rev.begin(), rev.end());
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				string tmp1 = s.substr(i, (j - i) + 1); //substr(pos, n) pos:�Ӹ�λ���� n:�Ӵ�����
				string tmp2 = rev.substr((n - j) - 1, (j - i) + 1);
				if (tmp1 == tmp2)
					count++;
			}
		}

		cout << count << endl;
	}

	system("pause");
	return 0;
}


















