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

//��ϣ
////��һ�����ظ������ַ�
//char firstNotRepeate(char* str)
//{
//	const int size = 256;
//	int hashTable[size];
//	if (str == NULL) 
//		return '\0';
//
//	for (int i = 0; i < size; i++) 
//		hashTable[i] = 0;
//
//	char *pHashKey = str;
//	while (*(pHashKey) != '\0')
//		hashTable[*(pHashKey++)]++;
//
//	pHashKey = str;
//	while (*(pHashKey) != '\0')
//	{
//		if (hashTable[*(pHashKey)] == 1)
//		{
//			printf("%c\n", *(pHashKey));
//			break;
//		} 
//		pHashKey++;
//	} 
//	return '\0';
//}
//
//int main()
//{
//	char str[] = "abaccdeff";
//	firstNotRepeate(str);
//
//	system("pause");
//	return 0;
//}
//
//��һ���ظ������ַ�
//char firstNotRepeate(char* str)
//{
//	const int size = 256;//��ʾ
//	int hashTable[size];
//	if (str == NULL)
//		return '\0';
//
//	for (int i = 0; i < size; i++)
//		hashTable[i] = 0;
//
//	char *pHashKey = str;
//	while (*(pHashKey) != '\0')
//		hashTable[*(pHashKey++)]++;
//
//	pHashKey = str;
//	while (*(pHashKey) != '\0')
//	{
//		if (hashTable[*(pHashKey)] == 2)
//		{
//			printf("%c\n", *(pHashKey));
//			break;
//		}
//		pHashKey++;
//	}
//	return '\0';
//}
//
//int main()
//{
//	char str[] = "qywyertdd";
//	firstNotRepeate(str);
//
//	system("pause");
//	return 0;
//}

////ֻ����һ�ε�����
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//
//void first_num(int* str, int len)
//{
//	assert(str); 
//	int asc[10] = { 0 }; //����һ��ʮ��Ԫ�ص����飬��Ϊԭ����Ԫ�صĴ�С��ֻΪ0~9��Ԫ��
//	for (int i = 0; i < len; i++)
//		asc[str[i]]++;    //��ԭ�����Ԫ����Ϊ�½�������±꣬�����������ԭ��������ͬԪ�أ�˵�����½������Ӧ��λ�ô���ֵ�᲻�ϼ�1
//
//	printf("����һ�ε�����Ϊ:\n");
//	for (int i = 0; i < len; i++)
//	{
//		if (asc[str[i]] == 1)//���������ֻҪ�½������ֵ��Ϊ1��˵��ԭ�����и�Ԫ��ֻ��һ��
//			printf("%d ", str[i]);
//	}
//}
//
//int main()
//{
//	int str[] = { 5, 1, 3, 5, 7, 1, 3, 9 };
//	int len = sizeof(str) / sizeof(str[0]);
//	first_num(str, len);
//
//	printf("\n");
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include<stdlib.h>
//
//int find_one_bit(int num) //Ѱ�Ҷ������е�ĳһλΪ1��λ
//{
//	int bit = 0;
//	while (num)
//	{
//		if (num & 1 == 1)
//			return bit;
//		bit++;
//		num = num >> 1;
//	}
//	return -1;
//}
//
//void find_num(int arr[], int size, int *p1, int *p2)
//{
//	int tmp = 0;
//	int pos = 0;
//	for (int i = 0; i < size; i++)
//	{
//		tmp ^= arr[i];    //tmp��������ս��Ϊ��ͬ�������������Ľ��
//	}
//	pos = find_one_bit(tmp);
//	for (int i = 0; i < size; i++)
//	{
//		if (1 & (arr[i] >> pos))  //������λ��ͬһλ���Ƿ�Ϊ1�����Է������֣���ΪĳһλΪ1ʱ�������Ľ����֪�ض�һ�����ָ�λΪ0����һ��Ϊ1 //0��0 == *p1�����κ����������Ϊ��������
//			*p1 ^= arr[i];
//		else
//			*p2 ^= arr[i];
//	}
//}
//
//int main()
//{
//	int arr[] = { 5, 1, 3, 5, 7, 1, 3, 9 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int num1 = 0;
//	int num2 = 0;
//	find_num(arr, size, &num1, &num2);  //num1��num2���봫����ַ������ֻ���޸����βζ�����Ӱ����������ֵ��num1��num2��Ϊ��ʼ����0
//	printf("%d %d\n", num1, num2);
//
//	system("pause");
//	return 0;
//}

//int fun(char *s)
//{
//	char *p = s;
//	while (*p != '\0')
//		p++;
//
//	return (p - s);
//}
//
//int main()
//{
//	printf("%d\n", fun("goodbey!"));
//	system("pause");
//	return 0;
//}

int main()
{
	unsigned char a = 0xA5;
	unsigned char b = ~a >> 4 + 1;
	printf("%d\n", a);
	printf("%d\n", b);
	system("pause");
	return 0;
}