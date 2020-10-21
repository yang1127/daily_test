////�Ҽٱ�����
//#include <iostream> 
//using namespace std;
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		if (n != 0) //�����������Ϊ0
//		{
//			int count = 0; //���ÿ�ʼ�ҵ��ٻ�����Ϊ0
//			while (n > 1)  //ֻҪ����������1 ����ѭ����ʼ�ж�
//			{
//				n = n / 3 + 1 - (n % 3 ^ 3) / 3;  //������ÿ�μ���
//				count++;  //�ٻ�����+1
//			}
//			cout << count << endl; //��������������>1 ����ѭ��
//		}
//	}
//	return 0;
//}


//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s;
//	cin >> s;
//	int count = 0;
//	for (int i = 0; i < s.size(); i++)
//	{
//		if (s[i] != s[i + 1])
//			count++;
//	}
//
//	float rel = (float)s.size() / (float)count;
//
//	printf("%.2f", (float)rel);
//
//	cout << endl;
//	system("pause");
//	return 0;
//}

#include <iostream>
#include <vector>

using namespace std;

int v[100];

int fun(int v[], int n)
{
	int left = 1, right = n;
	int count = 0;
	while (left < right)
	{
		if (v[left] < v[right])
		{
			v[left + 1] += v[left];
			count++;
			left++;
		}
		else if (v[left] == v[right])
		{
			left++;
			right--;
		}
		else
		{
			v[right - 1] += v[right];
			count++;
			right--;
		}
	}
	return count;
}

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> v[i];

	cout << fun(v, n) << endl;

	system("pause");
	return 0;
}