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
