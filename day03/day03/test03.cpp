////�ַ������ҳ�����������ִ�
//#include <iostream>
//#include <string>
//using namespace std;
//
////˼·����aȥ�����������ִ�������������������ַ������ʾһ�����������ִ�����
////�����ִ���֮ǰ�����ִ��Ƚϣ��������������¸��������ִ����µ�b�У���bΪ����������ִ�
//int main()
//{
//	string s; //�ַ���
//	string a; //�����������ִ�
//	string b; //��������ַ���
//	cin >> s; //�����ַ���
//	for (int i = 0; i <= s.size(); i++) //�����ַ���
//	{
//		if (s[i] >= '0' && s[i] <= '9') //�����ִ�
//		{
//			a = a + s[i]; 
//		}
//		else
//		{
//			if (b.size() < a.size()) //�Ƚ�a,b�ĸ����ִ���
//			{
//				b = a;
//			}
//			else
//				a.clear(); //��a�ͷ�
//		}
//	}
//
//	cout << b;
//	system("pause");
//	return 0;
//}

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

#include <stdio.h>
#include <stdlib.h>
#include <string>
////ֻ�����������������ν��

//int main()
//{
//	int arr[] = { 1, 2, 3, 2, 2, 2, 5, 4, 2 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int count = 0;
//
//	for (int i = 0; i < len; i++)
//	{
//		for (int j = 0; j < len; j++)
//		{
//			if (arr[i] == arr[j])
//				count++;
//		}
//		if (count > len / 2)
//		{
//			printf("%d\n", arr[i]);
//			break;
//		}	
//		else
//			count = 0;
//	}
//
//	system("pause");
//	return 0;
//}


//int main()
//{
//	char a1[] = "abcdefg";
//	char a2[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g' };
//	printf("%d\n", sizeof(a1)); //8
//	printf("%d\n", sizeof(a2)); //7
//
//	printf("%d\n", strlen(a1)); //7
//	printf("%d\n", strlen(a2)); //��ȷ�� ��\0
//
//	char s[] = "\\123456\123456\t";
//	printf("%d\n", strlen(s)); //12
//
// 	system("pause");
//	return 0;
//}

//int main()
//{
//	int s = 0, n;
//	for (n = 0; n < 4; n++)
//	{
//		switch (n)
//		{
//		default: s += 4;
//		case 1: s += 1;
//		case 2: s += 2;
//		case 3: s += 3;
//		}
//	}
//	printf("%d", s);
//
// 	system("pause");
//	return 0;
//}

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* p1 = (int*)(&a + 1);
//	int* p2 = (int*)((int)a + 1);
//	int* p3 = (int*)(a + 1);
//	printf("%d�� %x, %d\n", p1[-1], p2[0], p3[1]);
//
// 	system("pause");
//	return 0;
//}

//int MAX_Arry(int* arr, int sz)
//{
//	int MAX = arr[0];
//	int sum = arr[0];
//	if (arr == NULL || sz <= 1)
//		return 0;
//	for (int i = 1; i < sz; i++)
//	{
//		if (sum < 0)
//			sum = arr[i];
//		else
//			sum += arr[i];
//
//		if(sum > MAX)
//			MAX = sum;
//	} 
//	return MAX;
//} 
//int main()
//{
//	int arr[] = { 1, -2, 3, 10, -4, 7, 2, -5 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", MAX_Arry(arr, len));
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//		a[i] = (char)(-1 - i);
//	printf("%d\n", strlen(a));
//	system("pause");
//	return 0;
//}

char firstNotRepeate(char* str)
{
	const int size = 256;//��ʾ
	int hashTable[size];
	if (str == NULL) 
		return '\0';

	for (int i = 0; i < size; i++) 
		hashTable[i] = 0;

	char *pHashKey = str;
	while (*(pHashKey) != '\0')
		hashTable[*(pHashKey++)]++;

	pHashKey = str;
	while (*(pHashKey) != '\0')
	{
		if (hashTable[*(pHashKey)] == 1)
		{
			printf("%c\n", *(pHashKey));
			break;
		} 
		pHashKey++;
	} 
	return '\0';
}

int main()
{
	char str[] = "abaccdeff";
	firstNotRepeate(str);

	system("pause");
	return 0;
}