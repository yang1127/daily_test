////排序子序列
//#include <iostream>
//#include <vector>
//using namespace std;
////子序列非递增或者非递减
////6
////1 2 3 2 2 1
////2
//int main()
//{
//	int n; //输入的正整数
//	int i = 0;
//	while (cin >> n)
//	{
//		vector<int> arr;
//		arr.resize(n + 1); //开辟空间
//		for (i = 0; i < n; i++) //将数字放到vector数组中去
//			cin >> arr[i];
//
//		int tmp = 0; //记录子序列数
//		arr[n] = 0;
//		int i = 0;
//		while (i < n)
//		{
//			//分割子序列依据:前一个数大于等于后一个数，分割
//			if (arr[i] < arr[i + 1]) //若前者小于后者  //升序
//			{
//				while (i < n && arr[i] <= arr[i + 1]) //一直遍历直到找到前者大于等于后者
//					i++;
//
//				tmp++; //子序列+1 分割
//				i++;
//			}
//			else if (arr[i] == arr[i + 1]) //前一个等于后一个继续找下一个
//				i++;
//
//			else  //降序
//			{
//				while (i < n && arr[i] >= arr[i + 1])
//					i++;
//
//				tmp++;
//				i++;
//			}
//		}
//		cout << tmp << endl;
//	}
//	return 0;
//}

//
////倒置字符串
//#include <iostream>
//#include <string>
//#include <stack>
//using namespace std;
////i like beijing.
////bejing. like i
//int main()
//{
//	string s;
//	stack<string> st;
//
//	while (cin >> s) //输入字符串 i like beijing.
//	{
//		st.push(s); //将字符串入栈 i like beijing.
//		if (*(s.rbegin()) == '.') //反向开始 为.则输入完成 可以出栈
//			break;
//	}
//
//	cout << st.top();
//	st.pop(); //出栈
//
//	//i like 
//	while (!st.empty())
//	{
//		cout << " " << st.top(); // like  // i
//		st.pop();
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		if (i < 1)
//			continue;
//		if (i == 5)
//			break;
//		i++;
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//void ReplaceBlank(char *str, int len)
//{
//	int MLen = 0; //计算字符的个数
//	int NumBlank = 0; //计算空格的数组
//	int Index_MLen = 0;
//	int Index_new = 0;
//	int newlen = 0;
//	int i = 0; //从0号下标开始遍历
//	if (str == NULL || len <= 0)
//		return;
//
//	while(str[i] != '\0')
//	{
//		++MLen;
//		if (str[i] == ' ')
//			++NumBlank;
//		++i;
//	} 
//	newlen = MLen + NumBlank * 2;// a b c d  -> a%20b%20c%20d
//	if (newlen > len)//newlen是扩充后数组的大小，所以一定要小于len原来大小，不然放不下
//		return;
//
//	Index_MLen = MLen;
//	Index_new = newlen;
//	while (Index_MLen >= 0 && Index_new > Index_MLen)
//	{
//		if (str[Index_MLen] == ' ') //从后往前走，遇到空格，插入0 2 %
//		{
//			str[Index_new--] = '0';
//			str[Index_new--] = '2';
//			str[Index_new--] = '%';
//		} 
//		else //不是空格 将Mlen数组对应值赋给newlen
//			str[Index_new--] = str[Index_MLen];
// 
//		--Index_MLen;
//	}
//} 
//
//int main()
//{
//	char str[30] = "a b c d";
//	int len = (sizeof(str) / sizeof(str[0]));
//	ReplaceBlank(str, len);
//	printf("%s\n", str);
//
//	system("pause");
//	return 0;
//}

//非递归 斐波那契数列
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		int a = 1;
//		int b = 1;
//		int c = 0;
//		if (n == 1 || n == 2)
//			c = 1;
//		else
//		{
//			for (int i = 3; i <= n; i++)
//			{
//				c = a + b;
//				a = b;
//				b = c;
//			}
//		}
//		cout << c << endl;
//	}
//	system("pause");
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#define F(X, Y) ((X)+(Y)) 
//
//int main()
//{
//	int a = 3, b = 4;
//	printf("%d\n", F(a++, b++));
//
//	system("pause");
//	return 0;
//}

//#pragma pack(4)
//
//int main()
//{
//	struct test1
//	{
//		short a;
//	    char d;
//		long b;
//		long c;
//	};
//
//	struct test2
//	{
//		long b;
//		short c;
//		char d;
//		long a;
//	};
//
//	struct test3
//	{
//		short c;
//		long b;
//		char d;
//		long a;
//	};
//	 
//	printf("%d\n", sizeof(test1)); //12  2 2 4 4
//	printf("%d\n", sizeof(test2)); //12  4 2 2 4
//	printf("%d\n", sizeof(test3)); //16  4 4 4 4
//
//	system("pause");
//	return 0;
//}

//int fun(int x, int y)
//{
//	static int m = 0;
//	static int i = 2;
//	i += m + 1;
//	m = i + x + y;
//	return m;
//}
//
//int main()
//{
//	int j = 4;
//	int m = 1;
//	int k;
//	k = fun(j, m);
//	printf("%d", k);//8
//
//	k = fun(j, m);
//	printf("%d", k);//17
//
//	system("pause");
//	return 0;
//}

//int Numberof1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		++count;
//		n = (n - 1)&n;
//	} 
//	return count;
//}
//
//int main()
//{
//	printf("%d\n", Numberof1(2020));
//	system("pause");
//	return 0;
//}

//int Change(int *px)
//{
//	int y = 8;
//	y = y - *px;
//	px = &y;
//	return 0;
//}
//int main()
//{
//	int xx = 3;
//	int *py = &xx;  //3
//	Change(py);
//	printf("%d", *py); //3
//}
//
//#define F(r) r*r
//
//int main()
//{
//	int a = 1, b = 2;
//	int t = F(a + b); //1*1 + 2*2 = 5
//	printf("%d\n", t);
//
//	system("pause");
//	return 0;
//}

//int x = 3;
//void inc()
//{
//	static int x = 1;
//	x *= (x + 1);
//	printf("%d", x);
//	return;
//}
//
//int main()
//{
//	int i;
//	for (i = 1; i < x; i++)
//		inc();
//	
//	system("pause");
//	return 0;
//}

//int a = 1;
//void test()
//{
//	int a = 2;
//	a += 1;
//}
//
//int main()
//{
//	test();
//	printf("%d", a);
//	system("pause");
//	return 0;
//}

//#define MOD(x, y) x%y
//
//int main()
//{
//	int a = 13, b = 94;
//	printf("%d", MOD(b, a+4));
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	switch (++x)
//	{
//	case 0: 
//		++x;
//	case 1:
//		++x;
//	case 2:
//		++x;
//	}
//	printf("%d", x);
//	system("pause");
//}

void Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}


void BubbleSort(int* arr, int len)
{
	int end = len - 1;
	while (end > 0)
	{
		for (int i = 0; i < end; ++i)
		{
			if (arr[i] > arr[i + 1])
				Swap(&arr[i], &arr[i + 1]);
		}
		--end;
	}
}

void Little_k(int* arr, int len, int k)
{
	BubbleSort(arr, len);
	for (int i = 0; i < k; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}


int main()
{
	int arr[] = { 12, 45, 89, 12, 6, 9, 4 };
	int len = sizeof(arr) / sizeof(arr[0]);
	Little_k(arr, len, 3);
	system("pause");
	return 0;
}