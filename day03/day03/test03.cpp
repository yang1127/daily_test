////字符串中找出连续最长的数字串
//#include <iostream>
//#include <string>
//using namespace std;
//
////思路：用a去找连续的数字串，如果遇到不是数字字符，则表示一个连续的数字串结束
////则将数字串跟之前的数字串比较，如果更长，则更新更长的数字串更新到b中，即b为连续最长的数字串
//int main()
//{
//	string s; //字符串
//	string a; //找连续的数字串
//	string b; //连续最长的字符串
//	cin >> s; //输入字符串
//	for (int i = 0; i <= s.size(); i++) //遍历字符串
//	{
//		if (s[i] >= '0' && s[i] <= '9') //找数字串
//		{
//			a = a + s[i]; 
//		}
//		else
//		{
//			if (b.size() < a.size()) //比较a,b哪个数字串大
//			{
//				b = a;
//			}
//			else
//				a.clear(); //将a释放
//		}
//	}
//
//	cout << b;
//	system("pause");
//	return 0;
//}

////数组中有一个数字出现的次数超过数组长度的一半，请找出这个数字。
////例如输入一个长度为9的数组{1,2,3,2,2,2,5,4,2}。
////由于数字2在数组中出现了5次，超过数组长度的一半，因此输出2。如果不存在则输出0。
//
////思路：将数组进行排序后，若存在，则中间位置的数即为要找的数，不存在则返回0
////例如：1,2,3,2,2,2,5,4,2 排序后为1,2,2,2,2,2,3,4,5,即为2
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
////只单纯考虑这个数组如何解决

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
//	printf("%d\n", strlen(a2)); //不确定 无\0
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
//	printf("%d， %x, %d\n", p1[-1], p2[0], p3[1]);
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

//哈希
////第一个不重复出现字符
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
//第一个重复出现字符
//char firstNotRepeate(char* str)
//{
//	const int size = 256;//表示
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

////只出现一次的数字
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//
//void first_num(int* str, int len)
//{
//	assert(str); 
//	int asc[10] = { 0 }; //创建一个十个元素的数组，因为原数组元素的大小都只为0~9的元素
//	for (int i = 0; i < len; i++)
//		asc[str[i]]++;    //将原数组的元素作为新建数组的下标，并自增。如果原数组有相同元素，说明在新建数组对应的位置处的值会不断加1
//
//	printf("出现一次的两数为:\n");
//	for (int i = 0; i < len; i++)
//	{
//		if (asc[str[i]] == 1)//输出条件，只要新建数组的值仍为1，说明原数组中该元素只有一个
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
//int find_one_bit(int num) //寻找二进制中的某一位为1的位
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
//		tmp ^= arr[i];    //tmp保存的最终结果为不同的两个数字异或的结果
//	}
//	pos = find_one_bit(tmp);
//	for (int i = 0; i < size; i++)
//	{
//		if (1 & (arr[i] >> pos))  //二进制位中同一位置是否为1，用以分组数字，因为某一位为1时，由异或的结果可知必定一个数字该位为0，另一个为1 //0（0 == *p1）与任何数字异或仍为该数本身。
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
//	find_num(arr, size, &num1, &num2);  //num1，num2必须传进地址，否则只是修改了形参而并不影响主函数的值，num1，num2仍为初始化的0
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