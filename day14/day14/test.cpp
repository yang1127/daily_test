//#include<string>
//#include<iostream>
//
//using namespace std;
//
//string reverseString(string s) 
//{
//	if (s.empty())
//		return s; 
//	size_t start = 0;
//	size_t end = s.size() - 1;
//	while (start < end)
//	{
//		swap(s[start], s[end]);
//		++start; --end;
//	}
//	return s;
//}
//
//int main()
//{
//	string s; 
//	getline(cin,s);
//	cout<<reverseString(s)<<endl;
//
//	system("pause");
//	return 0;
//}


//����
//1.���Ĵ�����
//#include <iostream>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		string s;
//		cin >> s;
//		int size = s.length();
//		int half = size / 2;
//		int count = 0;
//		string rev(s);
//		reverse(rev.begin(), rev.end());
//		for (int i = 0; i < half; i++)
//		{
//			if (s[i] != rev[i])
//				count++;
//		}
//		cout << count << endl;
//	}	
//
//	system("pause");
//	return 0;
//}


//2.����Ⱦɫ
//#include <iostream>
//#include <algorithm>
//#include <math.h>
//
//using namespace std;
//
//int func(int n)
//{
//	for (int i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//			return i;
//	}
//	return n;
//}
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			int a, b;
//			cin >> a >> b;
//
//			if (a == 1)
//				cout << func(b) << endl;
//			else if(b == 1)
//				cout << func(a) << endl;
//			else
//			{
//				int num = min(func(a), func(b));
//				cout << num << endl;
//			}
//		}
//	}
//
//	system("pause");
//	return 0;
//}

/*
//��֦-쳲�������

class Solution {
	//��֦
private:
	unordered_map<int, int> m; //��ż�֦
public:
	int Fibonacci(int n) {
		if (n == 0 || n == 1)
			return n;
		if (n == 2)
			return 1;

		//n-2
		int ppre = 0;
		if (m.find(n - 2) == m.end())
		{
			//mû���ҵ���֦�ġ�����
			ppre = Fibonacci(n - 2); //�������Ӧ��ֵ
			m.insert({ n - 2, ppre }); //�ٲ���
		}
		else //�ҵ�
			ppre = m[n - 2];

		//n-1
		int pre = 0; //��֦ n-1���ܰ���n-2����n-1�ú�
		if (m.find(n - 1) == m.end())
		{
			pre = Fibonacci(n - 1); //�������Ӧ��ֵ
			m.insert({ n - 1, pre }); //�ٲ���
		}
		else
			pre = m[n - 1];


		return ppre + pre;
	}
};
*/


//��̬����
//class Solution {
//public:
//	int jumpFloor(int number) {
//		if (number <= 2)
//			return number;
//
//		//f(n) = f(n - 1) + f (n - 2)
//		//f(0) = 1; f(1) = 1; f(2) = 2;
//		int* dp = new int[number + 1]; //���ռ�
//		dp[0] = 1;
//		dp[1] = 1;
//		dp[2] = 1;
//		for (int i = 2; i <= number; i++)
//			dp[i] = dp[i - 1] + dp[i - 2];
//
//		return dp[number];
//	}
//};



#include <iostream>
using namespace std;

void Swap(int *p1, int *p2)
{
	int tmp = *p2;
	*p2 = *p1;
	*p1 = tmp;
}

//ð������
void BubbleSort(int *a, int n)
{
	int end = n - 1;
	while (end > 0)
	{
		for (int i = 0; i < end; i++)
		{
			if (a[i] > a[i + 1])
				Swap(&a[i], &a[i + 1]);
		}
		end--; //ð������һ�����������һ��������
	}
}

//��������
void InsertSort(int *a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		int tmp = a[end + 1]; //Ҫ�������
		while (end >= 0) //ͷ��Ҳ���Բ���
		{
			if (a[end] > tmp)
			{
				a[end + 1] = a[end];
				--end; //һֱ�ҵ����ʵ�λ��
			}
			else
				break;
		}
		a[end + 1] = tmp; //��������������λ��
	}
}

//ϣ������
void ShellSort(int *a, int n)
{
	int gap = n;
	while (gap > 1)
	{
		gap = gap / 3 + 1; //���ü���� +1�����һ���ٽ��в�������
		for (int i = 0; i < n - gap; i++)
		{
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0)
			{
				if (a[end] > tmp)
				{
					a[end + gap] = a[end];
					end = end - gap;
				}
				else
					break;
			}
			a[end + gap] = tmp;
		}
	}
}
//����
int Quicksort(int *a, int left, int right)
{
	int key = a[right]; //��key
	int key_index = right;

	while (left < right)
	{
		while (left < right && a[left] <= key)
			left++;
		while (left < right && a[right] >= key)
			right--;
		Swap(&a[left], &a[right]);

	}
	Swap(&a[left], &a[key_index]);

	return left;
}

void QuickSort(int *a, int left, int right)
{
	//����ָ�뷨������������ѡ��һ��key��ѡ�������ߣ�ѡ�ң�������
	//��ָ�������Ҵ���key��������ָ��������С��key��ֵ���ҵ���������ָ����������������key����������key��

	//ѡ����key
	//˼·����������ָ�룬��ָ�������Ҵ���key��ֵ����ָ��������С��key��ֵ���ҵ�����
	//ָ����������ָ������key��ֵ����

	if (left >= right)
		return ;

	int key_index = Quicksort(a, left, right);
	QuickSort(a, left, key_index - 1); //�����䣬�ݹ�
	QuickSort(a, key_index + 1, right); //������
}

//ѡ������
void SelectSort(int* a, int n) //ѡ������
{
	//˼·��ÿһ�δӴ����������Ԫ����ѡ����СԪ�طŵ���ʼλ�ã�ѡȡ���Ԫ�طŵ��������ֱ��ȫ�������������Ԫ�����ꡣ

	int begin = 0;
	int end = n - 1;
	int max_index, min_index; //index->ָ��
	while (begin <= end)
	{
		min_index = max_index = begin;
		for (int i = begin + 1; i < end; ++i)
		{
			if (a[i] > a[max_index])
				max_index = i; //�����Ԫ�ص�ַ����max�����ɾ�����һ�ֱȽ�
			if (a[i] < a[min_index])
				min_index = i;

			Swap(&a[i], &a[max_index]); //&
			if (max_index == begin)  //�����ֵ�ڿ�ʼʱ����Ҫ����С��ַ����������ַ���������ֵ��λ�û��г�ͻ
			{
				max_index = min_index;
			}

			Swap(&a[i], &a[min_index]); //&
		}
		--end;
		++begin;
	}
}

//������
void AdujustDown(int *a, int n, int parent)
{
	int child = parent * 2 + 1;
	while (child < n)
	{
		if (child + 1 < n && a[child] < a[child + 1])
			++child;
		if (child > parent)
		{
			Swap(&a[child], &a[parent]); //����
			parent = child; //����
			child = parent * 2 + 1;
		}
		else
			break;
	}
}

void HeapSort(int* a, int n)
{
	for (int i = (n - 2) / 2; i >= 0; i--)
		AdujustDown(a, n, i);

	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[0], &a[end]);
		AdujustDown(a, end, 0);
		--end;
	} 
}

//int main()
//{
//	int arr[] = { 1, 5, 3, 8, 7, 6 };
//	//BubbleSort(arr, sizeof(arr) / sizeof(arr[0]));
//	//InsertSort(arr, sizeof(arr) / sizeof(arr[0]));
//	//ShellSort(arr, sizeof(arr) / sizeof(arr[0]));
//	//QuickSort(arr, 0, sizeof(arr) / sizeof(arr[0]) -1);
//	//SelectSort(arr, sizeof(arr) / sizeof(arr[0]));
//	HeapSort(arr, sizeof(arr) / sizeof(arr[0]));
//
//	for (auto e : arr)
//	{
//		cout << e <<" ";
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}




//#include <iostream>
//#include <math.h>
//
//using namespace std;
//
//int main()
//{
//	int x1, x2, x3, y1, y2, y3;
//	cin >> x1 >> x2 >> x3 >> y1 >> y2 >> y3;
//	double d1, d2, d3;
//	d1 = sqrt(((x1) - (x2))*((x1) - (x2)) + ((y1) - (y2))*((y1) - (y2)));
//	d2 = sqrt(((x1) - (x3))*((x1) - (x3)) + ((y1) - (y3))*((y1) - (y3)));
//	d3 = sqrt(((x3) - (x2))*((x3) - (x2)) + ((y3) - (y2))*((y3) - (y2)));
//	if ((d1 + d2) > d3 && (d1 + d3) > d2 && (d2 + d3) > d1 && (d1 - d2) < d3 && (d1 - d3) < d2 && (d2 - d3) < d1)
//	{
//		printf("L = %.2lf", d1 + d2 + d3);	
//		double s = (d1 + d2 + d3) / 2;
//		double S = sqrt(s * (s - d1) * (s - d2) * (s - d3));
//		printf("%.2lf", (d1 + d2 + d3));	
//		cout << endl;
//		printf("%.2lf", S);
//		cout << endl;
//	}
//	else
//	{
//		printf("Impossible\n");
//	}
//	system("pause");
//	return 0;
//}

//��ָ18
///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     ListNode *next;
// *     ListNode(int x) : val(x), next(NULL) {}
// * };
// */
//class Solution {
//public:
//	ListNode* deleteNode(ListNode* head, int val) {
//		if (head == NULL)
//			return NULL;
//
//		if (head->val == val)
//			return head->next;
//
//		head->next = deleteNode(head->next, val);
//
//		return head;
//	}
//};

//��ָ58
//class Solution {
//public:
//	string reverseLeftWords(string s, int n) {
//		/*
//		string rel;
//		for (int i = n; i < s.length(); i++)
//			rel += s[i];
//
//		for (int  i = 0; i < n; i++)
//			rel += s[i];
//
//		return rel;
//		*/
//
//
//		//substr���ַ�����ȡ���ַ���
//		return s.substr(n) + s.substr(0, n);
//	}
//};

