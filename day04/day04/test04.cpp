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
//	// ����Ǹ�������ת�������������һ��
//	if (m < 0)
//	{
//		m = 0 - m;
//		flag = true;
//	}
//
//	// �����ƻ���ɶ�Ӧ���ַ���ӵ�s
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

////ð������
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

////���ֲ���
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
//		printf("û���ҵ�!\n");
//	else
//		printf("�ҵ���\n");
//
//	system("pause");
//	return 0;
//}

//�Ƴ�Ԫ��
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

////�����뷨
//#define pow(x, y) ((x) ^ (y))
//
//int main()
//{
//	printf("%d\n", pow(2, 4));
//	system("pause");
//	return 0;
//}

///*����
//pow(x, y)ʵ������x^y����x��y�η�������x��y��Ϊ������
//�㷨�Ļ���˼���ǣ����ٳ˷��������ظ����ý����������磺
//x ^ 4����������˵Ļ�����Ҫ�Ĵγ˷���
//������������ֽ�(x ^ 2)*(x ^ 2)��ֻ��Ҫ2���γ˷���
//��Ϊx ^ 2�Ľ�����ǿ����ظ����á���������������ԳƵķֽ�ָ��y��
//Ȼ����x ^ (y / 2)��ƽ����
//
//�����㷨���£�
//1 ���yΪż����ֱ�Ӽ���Mypow(x, y / 2)*Mypow(x, y / 2)��
//2 ���yΪ��������y - 1Ϊż�����ص��˵�һ�������
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
//	if ((y & 1 )!= 0) //����
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

//����������
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
//			*num1 = left; //ȡ�±�
//			*num2 = right;
//			printf("%d %d\n", *num1, *num2);  // 1 6  //3 4
//			left++;
//			right--;
//		}
//	}
//}
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

//void Deblank(char *str)
//{
//	int flag = 0; //�ո����ã���û��ʼ����ո�
//	int p = 0;
//	int i = 0;
//	while (str[i] != '\0') //ÿ�α���һ���ַ�
//	{
//		if (!flag && str[i] == ' ')//�����ո񣬻�û��ʼ����ո�ֱ�����������ǿո��λ�� //��a�� //�ס�β�Ϳո� //��ȥ���Ӵ��м��һ���ո�
//			i++;
//		else if (!flag && str[i] != ' ')//�������ǿո񣬻�û��ʼ����ո񣬲��ǿո���ַ����¸�ֵ�����±�
//		{
//			flag = 1; //�ո����ã���ʼ����ո�
//			str[p++] = str[i++];
//		}
//		else if (flag && str[i] == ' ')//�����ո�ʼ������ //ÿ�������ַ����м��һ���ո񣬵�һ���ո񱣴棬�����Ƴ�
//		{
//			flag = 0; //������
//			str[p++] = str[i++];
//		} 
//		else //�����Ӵ�
//		{
//			str[p++] = str[i++];
//			flag = 1;
//		}
//	} 
//	if(str[p - 1] == ' ') //��β������ո� 
//		str[p - 1] = '\0';
//	else //ԭ�ַ������һλֱ��Ϊ��\0�� �޿ո�
//		str[p] = '\0';
//}
//
//int main()
//{
//	char str[] = "   as    adad    q   ";
//	Deblank(str);
//	printf("%s\n", str);
//	system("pause");
//	return 0;
//}

//#include <assert.h>
//
//void Compress(char *str)
//{
//	int count = 1; //�Ƴ��ִ���
//	int i = 0;
//	assert(str);
//
//	while (str[i] != '\0')
//	{
//		if (str[i] == str[i + 1])
//			count++;
//		else
//		{
//			if (count != 1) //ֻ����һ�ε��ַ���ֻ����ַ�
//				printf("%d",count);
//
//		printf("%c",str[i]); //һ����ͬ���ַ�������ɣ�������Ϊ1
//		count = 1;
//		} 
//		i++;
//	} 
//	printf("\n");
//} 
//int main()
//{
//	char  arr[] = "xxyyyz";
//	Compress(arr);
//
//	system("pause");
//	return 0;
//}

////1����һ�ֽⷨO��logn)
//int isPower(int n) //8
//{
//	if (n < 1)
//		return 0;
//
//	int i = 1;
//	for (i = 1; i <= n; i <<= 1) //0000 1000 0000 1000
//	{
//		if (i == n)
//			return 1;
//	} 
//	return 0;
//} 
//
////2���ڶ��ֽⷨ O(1)
//int isPower(int n)
//{
//	int m = 0;
//	if (n < 1)
//		return 0;
//
//    m = n & (n - 1); //������������ &-1����Ϊ0
//	if (m == 0)
//		return 1;
//
//	return 0;
//}
//
//int main()
//{
//	int ret = isPower(8);
//	if (ret == 1)
//		printf("��2�Ĵη�\n");
//	else
//		printf("����2�Ĵη�\n");
//
//	system("pause");
//	return 0;
//}

//��ת����
//class Solution {
//public:
//	ListNode* reverseList(ListNode* head) {
//		ListNode* newnode = NULL;
//		ListNode* cur = head;
//
//		while (cur)
//		{
//			ListNode* next = cur->next;
//			//ͷ��
//			cur->next = newnode;
//			newnode = cur;
//
//			cur = next;
//		}
//		return newnode;
//	}
//};

//class Solution {
//public:
//	bool isValid(string str) {
//		std::stack<char> s;
//		int size = str.size(); //��ȡ�ַ����ĳ���
//		for (int i = 0; i < size; i++)
//		{
//			char ch = str[i]; //ȡi���ַ�
//			switch (ch)
//			{
//			case '(':
//			case '[':
//			case '{':
//				s.push(ch); //��ջ
//				break;
//			case ')':
//			case ']':
//			case '}':
//			{
//				if (s.empty())
//					return false;
//				char left = s.top();
//				s.pop();
//				if (!((left == '(' && ch == ')') || (left == '[' && ch == ']') || (left == '{' && ch == '}')))
//					return false;
//				break;
//			}
//			}
//		}
//		if (!s.empty())
//			return false;
//		return true;
//	}
//};

//C
//��ʵ��һ��ջ
//typedef int STDataType;
//
//typedef struct Stack {
//	STDataType* _a;
//	size_t _top;
//	size_t _capacity;
//}Stack;
//
//void StackInit(Stack* ps) //��ʼ��
//{
//	assert(ps);
//	ps->_a = NULL;
//	ps->_top = 0;
//	ps->_capacity = 0;
//}
//
//void StackDestroy(Stack* ps) //����
//{
//	assert(ps);
//	if (ps->_a != NULL)
//	{
//		free(ps->_a);
//		ps->_a = NULL;
//		ps->_capacity = ps->_top = 0;
//	}
//}
//
//void StackPush(Stack* ps, STDataType x) //��ջ
//{
//	assert(ps);
//	if (ps->_top == ps->_capacity)
//	{
//		size_t newcapacity = ps->_capacity == 0 ? 2 : ps->_capacity * 2;
//		ps->_a = (STDataType*)realloc(ps->_a, newcapacity * sizeof(STDataType));
//		ps->_capacity = newcapacity;
//	}
//
//
//	ps->_a[ps->_top] = x; // ��ջ����λ�ü�����
//	ps->_top++;
//}
//
//void StackPop(Stack* ps) //��ջ
//{
//	assert(ps);
//	if (ps && ps->_top > 0)
//	{
//		--ps->_top;
//	}
//}
//
//STDataType StackTop(Stack* ps) //ջ��Ԫ��
//{
//	assert(ps && ps->_top > 0);
//	return ps->_a[ps->_top - 1];
//}
//
//bool StackEmpty(Stack* ps) //ջ�Ƿ�Ϊ��
//{
//	assert(ps);
//	return ps->_top == 0 ? 0 : 1;
//}
//
//size_t StackSize(Stack* ps)
//{
//	assert(ps);
//	return ps->_top;
//}
//
//bool isValid(char * s) {  //һ���ַ�һ���ַ��Ƚ�
//	Stack st;
//	StackInit(&st);
//	char* p = s;
//	while (*p != 0)
//	{
//		char ch = *p;
//		switch (ch)
//		{
//		case '(':
//		case '[':
//		case '{':
//			StackPush(&st, ch); //��ջ
//			break;
//		case ')':
//		case ']':
//		case '}':
//		{
//			if (StackEmpty(&st) == 0)
//				return false;
//
//			char left = StackTop(&st);
//			if ((left == '(' && ch == ')') || (left == '[' && ch == ']') || (left == '{' && ch == '}'))
//				StackPop(&st);
//			else
//				return false;
//		}
//		default:
//			break;
//		}
//		p++;
//	}
//	if (StackEmpty(&st) == 0)
//		return true;
//	else
//		return false;
//}

//ջʵ�ֶ���
//ʵ��һ��ջ��ʹ��
//˼·��ʵ������ջ��һ����ջ��һ����ջ
//typedef struct {
//	Stack pushST; //��ջ
//	Stack popST;  //��ջ
//} MyQueue;
//
//
///** Initialize your data structure here. */
//MyQueue* myQueueCreate() { //����ָ�룬��̬����
//	MyQueue* queue = (MyQueue*)malloc(sizeof(MyQueue));
//	StackInit(&queue->pushST);
//	StackInit(&queue->popST);
//
//	return queue;
//}
//
//
///** Push element x to the back of queue. */
//void myQueuePush(MyQueue* obj, int x) {
//	StackPush(&obj->pushST, x);
//}
//
//
///** Removes the element from in front of queue and returns that element. */
//int myQueuePop(MyQueue* obj) {
//	if (StackEmpty(&obj->popST) == 0) //����ջΪ�գ�����ջ���浼����
//	{
//		while (StackEmpty(&obj->pushST) != 0)
//		{
//			StackPush(&obj->popST, StackTop(&obj->pushST));
//			StackPop(&obj->pushST);
//		}
//	}
//	int top = StackTop(&obj->popST);
//	StackPop(&obj->popST);
//	return top;
//}
//
//
///** Get the front element. */
//int myQueuePeek(MyQueue* obj) { //��ȡ��ͷԪ��
//	if (StackEmpty(&obj->popST) == 0) //����ջΪ�գ�����ջ���浼����
//	{
//		while (StackEmpty(&obj->pushST) != 0)
//		{
//			StackPush(&obj->popST, StackTop(&obj->pushST));
//			StackPop(&obj->pushST);
//		}
//	}
//	return StackTop(&obj->popST);
//}
//
//
///** Returns whether the queue is empty. */
//bool myQueueEmpty(MyQueue* obj) {
//	return StackEmpty(&obj->pushST) + StackEmpty(&obj->popST) == 0 ? true : false;  //������ջ��Ϊ��ʱ������Ϊ��
//}
//
//
//void myQueueFree(MyQueue* obj) {
//	StackDestroy(&obj->pushST);
//	StackDestroy(&obj->popST);
//	free(obj);
//}