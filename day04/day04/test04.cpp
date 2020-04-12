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
//	int flag = 0; //空格设置，还没开始处理空格
//	int p = 0;
//	int i = 0;
//	while (str[i] != '\0') //每次遍历一个字符
//	{
//		if (!flag && str[i] == ' ')//遇到空格，还没开始处理空格，直到遍历到不是空格的位置 //‘a’ //首、尾巴空格 //除去两子串中间第一个空格
//			i++;
//		else if (!flag && str[i] != ' ')//遇到不是空格，还没开始处理空格，不是空格的字符重新赋值到新下标
//		{
//			flag = 1; //空格设置，开始处理空格
//			str[p++] = str[i++];
//		}
//		else if (flag && str[i] == ' ')//遇到空格开始处理了 //每两个子字符串中间第一个空格，第一个空格保存，其余移除
//		{
//			flag = 0; //不处理
//			str[p++] = str[i++];
//		} 
//		else //遍历子串
//		{
//			str[p++] = str[i++];
//			flag = 1;
//		}
//	} 
//	if(str[p - 1] == ' ') //结尾处多余空格 
//		str[p - 1] = '\0';
//	else //原字符串最后一位直接为‘\0’ 无空格
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
//	int count = 1; //计出现次数
//	int i = 0;
//	assert(str);
//
//	while (str[i] != '\0')
//	{
//		if (str[i] == str[i + 1])
//			count++;
//		else
//		{
//			if (count != 1) //只出现一次的字符，只输出字符
//				printf("%d",count);
//
//		printf("%c",str[i]); //一个相同的字符遍历完成，重新置为1
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

////1、第一种解法O（logn)
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
////2、第二种解法 O(1)
//int isPower(int n)
//{
//	int m = 0;
//	if (n < 1)
//		return 0;
//
//    m = n & (n - 1); //二进制与运算 &-1数字为0
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
//		printf("是2的次方\n");
//	else
//		printf("不是2的次方\n");
//
//	system("pause");
//	return 0;
//}

//反转链表
//class Solution {
//public:
//	ListNode* reverseList(ListNode* head) {
//		ListNode* newnode = NULL;
//		ListNode* cur = head;
//
//		while (cur)
//		{
//			ListNode* next = cur->next;
//			//头插
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
//		int size = str.size(); //获取字符串的长度
//		for (int i = 0; i < size; i++)
//		{
//			char ch = str[i]; //取i的字符
//			switch (ch)
//			{
//			case '(':
//			case '[':
//			case '{':
//				s.push(ch); //入栈
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
//先实现一个栈
//typedef int STDataType;
//
//typedef struct Stack {
//	STDataType* _a;
//	size_t _top;
//	size_t _capacity;
//}Stack;
//
//void StackInit(Stack* ps) //初始化
//{
//	assert(ps);
//	ps->_a = NULL;
//	ps->_top = 0;
//	ps->_capacity = 0;
//}
//
//void StackDestroy(Stack* ps) //销毁
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
//void StackPush(Stack* ps, STDataType x) //入栈
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
//	ps->_a[ps->_top] = x; // 在栈顶的位置加数据
//	ps->_top++;
//}
//
//void StackPop(Stack* ps) //出栈
//{
//	assert(ps);
//	if (ps && ps->_top > 0)
//	{
//		--ps->_top;
//	}
//}
//
//STDataType StackTop(Stack* ps) //栈顶元素
//{
//	assert(ps && ps->_top > 0);
//	return ps->_a[ps->_top - 1];
//}
//
//bool StackEmpty(Stack* ps) //栈是否为空
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
//bool isValid(char * s) {  //一个字符一个字符比较
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
//			StackPush(&st, ch); //入栈
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

//栈实现队列
//实现一个栈再使用
//思路：实现两个栈，一个入栈，一个出栈
//typedef struct {
//	Stack pushST; //入栈
//	Stack popST;  //出栈
//} MyQueue;
//
//
///** Initialize your data structure here. */
//MyQueue* myQueueCreate() { //返回指针，动态开辟
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
//	if (StackEmpty(&obj->popST) == 0) //若出栈为空，再入栈里面导数据
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
//int myQueuePeek(MyQueue* obj) { //或取队头元素
//	if (StackEmpty(&obj->popST) == 0) //若出栈为空，再入栈里面导数据
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
//	return StackEmpty(&obj->pushST) + StackEmpty(&obj->popST) == 0 ? true : false;  //出、入栈均为空时，队列为空
//}
//
//
//void myQueueFree(MyQueue* obj) {
//	StackDestroy(&obj->pushST);
//	StackDestroy(&obj->popST);
//	free(obj);
//}

typedef int QUDataType;

typedef struct QueueNode {
	struct QueueNode* _next;
	QUDataType _data;
}QueueNode;

typedef struct Queue {
	QueueNode* _front; // 队头
	QueueNode* _tail; // 队尾
}Queue;


void QueueInit(Queue* pq) //初始化
{
	assert(pq);
	pq->_front = NULL;
	pq->_tail = NULL;
}


void QueueDestroy(Queue* pq) //销毁
{
	QueueNode* cur = pq->_front;
	while (cur != NULL)  //所有链表节点释放掉
	{
		QueueNode* next = cur->_next;
		free(cur);
		cur = next; //迭代
	}
	pq->_front = NULL;
	pq->_tail = NULL;
}


QueueNode* BuyQueueNode(QUDataType x) //置新节点
{
	QueueNode* node = ((QueueNode*)malloc(sizeof(QueueNode)));//新节点开辟空间
	node->_data = x; //新节点元素赋值
	node->_next = NULL;
	return node;
}


void QueuePush(Queue* pq, QUDataType x) //入队:队尾入数据
{
	QueueNode* newnode = BuyQueueNode(x);
	if (pq->_tail == NULL) //开始定义tail为空
	{
		pq->_front = pq->_tail = newnode; //队里无数据时，队头队尾的值均为新节点
	}
	else
	{
		pq->_tail->_next = newnode;
		pq->_tail = newnode;  //队里有数据，直接队尾插入新节点
	}
}


void QueuePop(Queue* pq) //出队：队头出数据，删掉队头数据，先保存下一个数据
{
	assert(pq && pq->_front != NULL);

	QueueNode* next = pq->_front->_next;
	free(pq->_front);
	pq->_front = next;

	if (pq->_front == NULL) //如果队头为空，将尾置为空，否则为野指针
	{
		pq->_tail = NULL; //队头为空，将队尾的指针指向NULL，否则为野指针
	}
}


QUDataType QueueFront(Queue* pq) //取队头的数据
{
	assert(pq && pq->_front != NULL);
	return pq->_front->_data;
}


QUDataType QueueBack(Queue* pq) //取队尾的数据
{
	assert(pq && pq->_tail != NULL);
	return pq->_tail->_data;
}


int QueueEmpty(Queue* pq) //判断队是否为空
{
	assert(pq);
	return pq->_front == NULL ? 0 : 1; //没有对头节点即为空 O(1)
	// return QueueSize(pq) == 0; //O(n)
}


int QueueSize(Queue* pq) //队列大小
{
	assert(pq);
	QueueNode* cur = pq->_front;
	size_t size = 0;
	while (cur != NULL)
	{
		++size;
		cur = cur->_next;
	}

	return size;
}

typedef struct {
	Queue _q1; //两个队列
	Queue _q2;
} MyStack;

/** Initialize your data structure here. */

MyStack* myStackCreate() {
	MyStack* st = (MyStack*)malloc(sizeof(MyStack));
	QueueInit(&st->_q2);
	QueueInit(&st->_q1); //初始化
	return st;
}

/** Push element x onto stack. */
void myStackPush(MyStack* obj, int x) {
	if (QueueEmpty(&obj->_q1) != 0) //哪个队列不为空，入栈
	{
		QueuePush(&obj->_q1, x);
	}
	else
	{
		QueuePush(&obj->_q2, x);
	}
}

/** Removes the element on top of the stack and returns that element. */
int myStackPop(MyStack* obj) {
	Queue* empty = &obj->_q1; //默认q1为空、q2不为空
	Queue* noempty = &obj->_q2;
	if (QueueEmpty(&obj->_q1) != 0)
	{
		empty = &obj->_q2;
		noempty = &obj->_q1;
	}

	while (QueueSize(noempty) > 1)
	{
		QueuePush(empty, QueueFront(noempty)); //将非空往空里面导
		QueuePop(noempty);
	}
	int front = QueueFront(noempty);
	QueuePop(noempty);
	return front;
}

/** Get the top element. */
int myStackTop(MyStack* obj) {
	Queue* empty = &obj->_q1; //默认q1为空、q2不为空
	Queue* noempty = &obj->_q2;
	if (QueueEmpty(&obj->_q1) != 0)
	{
		empty = &obj->_q2;
		noempty = &obj->_q1;
	}

	while (QueueSize(noempty) > 1)
	{
		QueuePush(empty, QueueFront(noempty));
		QueuePop(noempty);
	}
	int front = QueueFront(noempty);
	QueuePush(empty, front); //队列最后一个数据，为栈顶元素
	QueuePop(noempty);
	return front;
}

/** Returns whether the stack is empty. */
bool myStackEmpty(MyStack* obj) {
	return QueueEmpty(&obj->_q1) + QueueEmpty(&obj->_q2) == 0 ? true : false;
}

void myStackFree(MyStack* obj) {
	QueueDestroy(&obj->_q1);
	QueueDestroy(&obj->_q2);
	free(obj);
}