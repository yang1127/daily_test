//ͳ�ƻ���
//#include <iostream>
//#include <string>
//using namespace std;
//
//bool plalindrome(string& s3) //�ж��Ƿ�Ϊ������
//{
//	int begin = 0;
//	int end = s3.size() - 1;
//
//	while (begin < end)
//	{
//		if (s3[begin] != s3[end])
//		{
//			return false;
//		}
//
//		begin++;
//		end--;
//	}
//	return true;
//}
//
//int main()
//{
//	string s1;
//	string s2;
//	getline(cin, s1); //A�ַ���
//	getline(cin, s2); //����B�ַ�
//	int count = 0;
//	for (int i = 0; i < s1.size(); i++) //����s1
//	{
//		string s3 = s1;
//		s3.insert(i, s2); //��s2���ַ�������s3�ַ�����
//		if (plalindrome(s3))  //����ǻ��ģ���һ��
//		{
//			count++; //���Ĵ���
//		}
//	}
//	printf("%d ", count);
//
//	system("pause");
//	return 0;
//}

//typedef struct {
//	int* _array; //����
//	int _n;     //��С
//	int _front; //��ͷ
//	int _rear;  //��β  
//} MyCircularQueue;
//
//
///** Initialize your data structure here. Set the size of the queue to be k. */
//MyCircularQueue* myCircularQueueCreate(int k) {
//	MyCircularQueue* queue = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
//	queue->_array = (int*)malloc(sizeof(int)*(k + 1));
//	queue->_n = (k + 1);
//	queue->_front = 0;
//	queue->_rear = 0;
//
//	return queue;
//}
//
//
///** Checks whether the circular queue is empty or not. */
//bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
//	return obj->_rear == obj->_front; //���Ϊ��
//}
//
//
///** Checks whether the circular queue is full or not. */
//bool myCircularQueueIsFull(MyCircularQueue* obj) {
//	return (obj->_rear + 1) % obj->_n == obj->_front ? true : false; //+1Ϊ��
//}
//
//
///** Insert an element into the circular queue. Return true if the operation is successful. */
//bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
//	if (myCircularQueueIsFull(obj) == true)
//		return false;
//
//	obj->_array[obj->_rear++] = value;
//	obj->_rear %= obj->_n;
//	return true;
//}
//
//
///** Delete an element from the circular queue. Return true if the operation is successful. */
//bool myCircularQueueDeQueue(MyCircularQueue* obj) {
//	if (myCircularQueueIsEmpty(obj) == true)
//		return false;
//
//	++obj->_front;
//	obj->_front %= obj->_n;
//	return true;
//}
//
//
///** Get the front item from the queue. */
//int myCircularQueueFront(MyCircularQueue* obj) {
//	if (myCircularQueueIsEmpty(obj) == true)
//		return -1;
//	else
//		return obj->_array[obj->_front];
//}
//
//
///** Get the last item from the queue. */
//int myCircularQueueRear(MyCircularQueue* obj) {
//	if (myCircularQueueIsEmpty(obj) == true)
//		return -1;
//	else
//		if (obj->_rear == 0)
//			return obj->_array[obj->_n - 1];
//		else
//			return obj->_array[obj->_rear - 1];
//}
//
//void myCircularQueueFree(MyCircularQueue* obj) {
//	free(obj->_array);
//	free(obj);
//}

//class MyStack {
//	std::queue<int> q;
//public:
//	/** Initialize your data structure here. */
//	MyStack() { //���췽��
//	}
//
//	/** Push element x onto stack. */
//	void push(int x) {
//		q.push(x);
//	}
//
//	/** Removes the element on top of the stack and returns that element. */
//	int pop() {
//		int n = q.size();
//		for (int i = 0; i < n - 1; i++)
//		{
//			int v = q.front();
//			q.pop();
//			q.push(v);
//		}
//		int v = q.front();
//		q.pop();
//		return v;
//	}
//
//	/** Get the top element. */
//	int top() {
//		int n = q.size();
//		for (int i = 0; i < n - 1; i++)
//		{
//			int v = q.front();
//			q.pop();
//			q.push(v);
//		}
//		int v = q.front();
//		q.pop();
//		q.push(v); //��û�г�
//		return v;
//	}
//
//	/** Returns whether the stack is empty. */
//	bool empty() {
//		return q.empty();
//	}
//};

//class MyQueue {
//	std::stack<int> s1; //��ջ
//	std::stack<int> s2; //��ջ
//
//public:
//	/** Initialize your data structure here. */
//	MyQueue() {
//	}
//
//	/** Push element x to the back of queue. */
//	void push(int x) {
//		s1.push(x);
//	}
//
//	/** Removes the element from in front of queue and returns that element. */
//	int pop() {
//		if (s2.empty()) //�����ջΪ�գ�����ջ�����ݵ����ջ���ٳ�ջ
//		{
//			int n = s1.size();
//			for (int i = 0; i < n; i++)
//			{
//				int v = s1.top();
//				s1.pop();
//				s2.push(v);
//			}
//		}
//		int v = s2.top();
//		s2.pop();
//		return v;
//	}
//
//	/** Get the front element. */
//	int peek() { //�鿴��ͷԪ��
//		if (s2.empty())
//		{
//			int n = s1.size();
//			for (int i = 0; i < n; i++)
//			{
//				int v = s1.top();
//				s1.pop();
//				s2.push(v);
//			}
//		}
//		int v = s2.top(); //����Ҫ��ջ
//		return v;
//	}
//
//	/** Returns whether the queue is empty. */
//	bool empty() {
//		return s1.empty() && s2.empty();
//	}
//};

//class MinStack {
//	std::stack<int> stack;
//	std::stack<int> min;
//public:
//	/** initialize your data structure here. */
//	MinStack() {
//
//	}
//
//	void push(int x) {
//		stack.push(x);
//		if (min.empty() || x < min.top()) //СջΪ�ջ��߲�������С��Сջջ��Ԫ�أ�����x
//		{
//			min.push(x);
//		}
//		else
//		{
//			min.push(min.top()); //����ջ֮ǰ��С�����ݣ�stackջ�����ݣ�ֻҪջ��Ԫ�ش���minջ��ջ��Ԫ�أ�minջ������min��ջ��Ԫ��
//		}
//	}
//
//	void pop() { //����ջ����ջ
//		min.pop();
//		stack.pop();
//	}
//
//	int top() {
//		return stack.top(); //��stack��ջ��Ԫ��
//	}
//
//	int getMin() {
//		return min.top();
//	}
//};

//class MyCircularQueue {
//	int *array;
//	int capacity;
//	int front;
//	int rear;
//	int size;
//public:
//	/** Initialize your data structure here. Set the size of the queue to be k. */
//	MyCircularQueue(int k) {
//		array = (int*)malloc(sizeof(int) * k);
//		capacity = k;
//		front = 0;
//		rear = 0;
//		size = 0;
//	}
//
//	/** Insert an element into the circular queue. Return true if the operation is successful. */
//	bool enQueue(int value) {
//		if (size >= capacity)
//			return false;
//
//		array[rear] = value;
//		rear = (rear + 1) % capacity;
//		size++;
//		return true;
//	}
//
//	/** Delete an element from the circular queue. Return true if the operation is successful. */
//	bool deQueue() {
//		if (size == 0)
//			return false;
//
//		front = (front + 1) % capacity;
//		size--;
//		return true;
//	}
//
//
//	/** Get the front item from the queue. */
//	int Front() {
//		if (size == 0)
//			return -1;
//
//		return array[front];
//	}
//
//	/** Get the last item from the queue. */
//	int Rear() {
//		if (size == 0)
//			return -1;
//
//		int index = (rear + capacity - 1) % capacity; //��ǰѭ��
//		return array[index];
//	}
//
//	/** Checks whether the circular queue is empty or not. */
//	bool isEmpty() {
//		return size == 0;
//	}
//
//	/** Checks whether the circular queue is full or not. */
//	bool isFull() {
//		return size == capacity;
//	}
//};

//class Solution {
//public:
//	ListNode* deleteDuplication(ListNode* pHead)
//	{
//		if (pHead == NULL || pHead->next == NULL) //��֤���������������ڵ�
//			return pHead;
//
//		struct ListNode *node = (ListNode *)malloc(sizeof(ListNode));
//		node->next = pHead;
//
//		struct ListNode *prev = node;
//		struct ListNode *cur = pHead;
//		struct ListNode *next = pHead->next;
//		while (next != NULL)
//		{
//			if (cur->val == next->val)
//			{
//				while (next != NULL && cur->val == next->val) //���ظ�Ԫ��
//					next = next->next;
//
//				prev->next = next; //ɾ��(prev, next)֮�����нڵ�
//				cur = next;
//
//				if (next != NULL)
//					next = next->next;
//			}
//			else
//			{
//				prev = cur;
//				cur = cur->next;
//				next = next->next;
//			}
//		}
//		return node->next;
//	}
//};

//class Solution {
//public:
//	ListNode* deleteDuplication(ListNode* pHead)
//	{
//		if (pHead == NULL || pHead->next == NULL) //��֤���������������ڵ�
//			return pHead;
//
//		struct ListNode *prev = NULL;
//		struct ListNode *cur = pHead;
//		struct ListNode *next = pHead->next;
//		while (next != NULL)
//		{
//			if (cur->val == next->val)
//			{
//				while (next != NULL && cur->val == next->val) //���ظ�Ԫ��
//					next = next->next;
//
//				if (prev != NULL)
//					prev->next = next; //��ȥ�ظ�Ԫ�غ�
//				else
//					pHead = next; //������ͷΪ�ظ�Ԫ��ʱ
//
//				cur = next;
//
//				if (next != NULL)
//					next = next->next;
//			}
//			else
//			{
//				prev = cur;
//				cur = cur->next;
//				next = next->next;
//			}
//		}
//		return pHead;
//	}
//};