//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a, b, c, d;
//	cin >> a >> b >> c >> d;
//	int A = (a + c) / 2;
//	int C = (d - b) / 2;
//	int B1 = (c - a) / 2;
//	int B2 = (b + d) / 2;
//	if (B1 != B2)
//		cout << "No";
//	else
//		cout << A << " " << B1 << " " << C;
//
//	return 0;
//}

//#include <iostream>
//#include<string>
//#include<algorithm>
//
//using namespace std;
//int main()
//{
//	string s, table = "0123456789ABCDEF";
//	int m, n;
//	cin >> m >> n;
//	bool flag = false;
//
//	// 如果是负数，则转成正数，并标记一下
//	if (m < 0)
//	{
//		m = 0 - m;
//		flag = true;
//	}
//
//	// 按进制换算成对应的字符添加到s
//	while (m)
//	{
//		s += table[m%n];
//		m /= n;
//	}
//
//	if (flag)
//		s += '-';
//
//	reverse(s.begin(), s.end());
//	cout << s << endl;
//
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>

////冒泡排序
//void BubbleSort(int* arr, int len)
//{
//	int end = len - 1;
//	while (end > 1)
//	{
//		for (int i = 1; i <= end; ++i)
//		{
//			if (arr[i - 1] > arr[i])
//			{
//				int tmp = arr[i];
//				arr[i] = arr[i - 1];
//				arr[i - 1] = tmp;
//			}
//		}
//		--end;
//	}
//
//}
//
//void print(int* arr, int len)
//{
//	for (int i = 0; i < len; ++i)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[] = { 1, 9, 8, 7, 5, 4, 3, 1, 6, 2 };
//	BubbleSort(arr, sizeof(arr) / sizeof(arr[0]));
//	print(arr, sizeof(arr) / sizeof(arr[0]));
//
//	system("pause");
//	return 0;
//}

////二分查找
//int BinaryFind(int* arr, int len, int x)
//{
//	int left = 0;
//	int right = len - 1; 
//	int mid;
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2; 
//		if (arr[mid] < x)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > x)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int ret = BinaryFind(arr, len, 9);
//	if (ret == -1)
//		printf("没有找到!\n");
//	else
//		printf("找到了\n");
//
//	system("pause");
//	return 0;
//}

//移除元素
//int removeElement(int* nums, int numsSize, int val) {
//	int index = 0; 
//	for (int i = 0; i < numsSize; i++) 
//	{
//		if (nums[i] != val) 
//		{
//			nums[index] = nums[i]; 
//			++index;
//		}
//	}
//	return index; 
//}

