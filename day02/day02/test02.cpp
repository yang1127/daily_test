////����������
//#include <iostream>
//#include <vector>
//using namespace std;
////�����зǵ������߷ǵݼ�
////6
////1 2 3 2 2 1
////2
//int main()
//{
//	int n; //�����������
//	int i = 0;
//	while (cin >> n)
//	{
//		vector<int> arr;
//		arr.resize(n + 1); //���ٿռ�
//		for (i = 0; i < n; i++) //�����ַŵ�vector������ȥ
//			cin >> arr[i];
//
//		int tmp = 0; //��¼��������
//		arr[n] = 0;
//		int i = 0;
//		while (i < n)
//		{
//			//�ָ�����������:ǰһ�������ڵ��ں�һ�������ָ�
//			if (arr[i] < arr[i + 1]) //��ǰ��С�ں���  //����
//			{
//				while (i < n && arr[i] <= arr[i + 1]) //һֱ����ֱ���ҵ�ǰ�ߴ��ڵ��ں���
//					i++;
//
//				tmp++; //������+1 �ָ�
//				i++;
//			}
//			else if (arr[i] == arr[i + 1]) //ǰһ�����ں�һ����������һ��
//				i++;
//
//			else  //����
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
////�����ַ���
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
//	while (cin >> s) //�����ַ��� i like beijing.
//	{
//		st.push(s); //���ַ�����ջ i like beijing.
//		if (*(s.rbegin()) == '.') //����ʼ Ϊ.��������� ���Գ�ջ
//			break;
//	}
//
//	cout << st.top();
//	st.pop(); //��ջ
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
//	int MLen = 0; //�����ַ��ĸ���
//	int NumBlank = 0; //����ո������
//	int Index_MLen = 0;
//	int Index_new = 0;
//	int newlen = 0;
//	int i = 0; //��0���±꿪ʼ����
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
//	if (newlen > len)//newlen�����������Ĵ�С������һ��ҪС��lenԭ����С����Ȼ�Ų���
//		return;
//
//	Index_MLen = MLen;
//	Index_new = newlen;
//	while (Index_MLen >= 0 && Index_new > Index_MLen)
//	{
//		if (str[Index_MLen] == ' ') //�Ӻ���ǰ�ߣ������ո񣬲���0 2 %
//		{
//			str[Index_new--] = '0';
//			str[Index_new--] = '2';
//			str[Index_new--] = '%';
//		} 
//		else //���ǿո� ��Mlen�����Ӧֵ����newlen
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

//�ǵݹ� 쳲���������
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