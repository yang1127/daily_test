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

////错误想法
//#define pow(x, y) ((x) ^ (y))
//
//int main()
//{
//	printf("%d\n", pow(2, 4));
//	system("pause");
//	return 0;
//}

///*函数
//pow(x, y)实现运算x^y，即x的y次方，这里x和y都为整数。
//算法的基本思想是，减少乘法次数，重复利用结算结果，例如：
//x ^ 4，如果逐个相乘的话，需要四次乘法。
//如果我们这样分解(x ^ 2)*(x ^ 2)就只需要2两次乘法，
//因为x ^ 2的结果我们可以重复利用。所以我们最好做对称的分解指数y，
//然后求x ^ (y / 2)的平方。
//
//具体算法如下：
//1 如果y为偶数，直接计算Mypow(x, y / 2)*Mypow(x, y / 2)；
//2 如果y为奇数，则y - 1为偶数，回到了第一种情况。
//*/
//
//int Mypow(int x, int y)
//{
//	int result = 0;
//	int tmp = 0;
//	if (y == 1) 
//		return x;
//
//	tmp = Mypow(x, y / 2);
//	if ((y & 1 )!= 0) //奇数
//	{
//		result = x * tmp * tmp;
//	}
//	else
//	{
//		result = tmp * tmp;
//	} 
//	return result;
//}
//
//int main()
//{
//	printf("%d\n", Mypow(2, 3));
//	system("pause");
//	return 0;
//}

//void foo(int b[][3])
//{
//	++b;
//	b[1][1] = 9;
//}
//
//int main()
//{
//	int a[3][3] = { {1, 2, 3},{4, 5, 6},{7, 8, 9} };
//	foo(a);
//	printf("%d\n", a[2][1]);
//
//	system("pause");
//	return 0;
//}

//有序的情况下
//void SumK(int* arr, int len, int k, int* num1, int* num2)
//{
//	int left = 0;
//	int right = len - 1;
//	int sum = 0;
//
//	while (left < right)
//	{
//		sum = arr[left] + arr[right];
//		if (sum < k)
//			left++;
//		else if (sum > k)
//			right--;
//		else
//		{
//			*num1 = left; //取下标
//			*num2 = right;
//			printf("%d %d\n", *num1, *num2);  // 1 6  //3 4
//			left++;
//			right--;
//		}
//	}
//}
//
//
//int main()
//{
//	int arr[] = { 3, 6, 9, 12, 14, 18, 20, 26,  30};
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int num1 = 0 , num2 = 0;
//	SumK(arr, len, 26, &num1, &num2);
//
//	system("pause");
//	return 0;
//}