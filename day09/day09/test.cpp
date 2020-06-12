//class UnusualAdd {
//public: int addAB(int A, int B)
//{
//	int sum = 0, carry = 0;
//	while (B != 0) 
//	{ 
//		sum = A^B; 
//		carry = (A&B)<<1;
//		A=sum;
//		B=carry;
//	}
//	sum; 
//}
//};

//#include<iostream> 
//using namespace std;
//
//int pathNum(int n,int m) 
//{
//	if(n > 1 && m > 1) 
//		return pathNum(n-1,m) + pathNum(n,m-1); 
//	else if(((n >= 1)&&(m == 1))||((n == 1)&&(m >= 1))) 
//		return n + m; 
//	else
//		return 0;
//}
//int main()
//{
//	int n,m; 
//	while(cin>>n>>m)
//	{
//		cout<<pathNum(n,m)<<endl;
//	}
//	
//	return 0; 
//}

////查找第K小数
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int n, nums, k;
//	while (cin >> n)
//	{
//		vector <int> v;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> nums;
//			v.push_back(nums);
//		}
//			
//		cin >> k;
//		sort(v.begin(), v.end());
//		unique(v.begin(), v.end());
//		cout << v[k - 1];
//	}
//
//	system("pause");
//	return 0;
//}

////网上答案
//#include <iostream> 
//#include <list> 
//#include <map> 
//using namespace std; 
//
//typedef struct Elem
//{
//	long key; 
//	long value; 
//}Elem; 
//
//typedef list<Elem> myList; 
//typedef map<long,myList::iterator> myMap; 
//
//class LRU
//{
//public:
//	LRU(int s):_size(s){} 
//	long get(long key)
//	{ 
//		auto it = myMap1.find(key);// 判断是否存在key值指定节点 
//		if(it==myMap1.end())
//			return -1; 
//		else
//		{
//			auto list_it = myMap1[key]; // 获取key值对应节点在链表中的位置 
//			int value = list_it->value; // 获取到对应key值的value
//			Elem elem; 
//			elem.key=key;
//			elem.value = value; 
//			myList1.erase(list_it); // 删除原节点元素 
//			myList1.push_front(elem);//向链表头部添加节点
//			myMap1[key]=myList1.begin();//更新hashmap中对应元素在链表中的新位置 
//			return myList1.begin()->value;//返回value 
//		} 
//	}
//	
//	void put(long key,long value)
//	{
//		auto it = myMap1.find(key);
//		if(it==myMap1.end())//若hashmap中未找到则直接插入
//		{  
//			if(myList1.size()==_size)//容量达到限制，则先将链表末尾最久未使用数据删除
//			{  
//				long key=myList1.back().key;//1. 先获取到末尾节点key值 
//				myMap1.erase(key);//2. 通过key值删除hashmap中元素 
//				myList1.pop_back();//3. 删除链表中末尾元素 
//			}
//			Elem elem; 
//			elem.key=key; 
//			elem.value=value; 
//			myList1.push_front(elem);//向链表头部插入新元素 
//			myMap1[key]=myList1.begin();//向hashmap中插入数据 
//		}
//		else
//		{
//			auto list_it = myMap1[key];//获取key值对应在链表中位置 
//			Elem ee; 
//			ee.key=key; 
//			ee.value=value; 
//			*list_it = ee;//更新链表中指定位置元素信息 
//		} 
//	} 
//private: 
//	int _size; 
//	myList myList1; 
//	myMap myMap1; 
//};
//
//int main() 
//{ 
//	int n, k; 
//	cin >> n >> k; 
//	LRU lru(k); 
//	char ch; 
//	int key, val; 
//	while (n-- > 0) 
//	{ 
//		cin >> ch; 
//		if (ch == '1')
//		{ 
//			if(n<=0) 
//				continue; // 需要注意栈空间为0的情况 
//			cin >> key >> val; 
//			lru.put(key, val); 
//		} 
//		else if (ch == '2') 
//		{ 
//			cin >> key; 
//			cout << lru.get(key) << endl; 
//		} 
//	}
//	system("pause");
//	return 0; 
//}

//字符串相加
class Solution {
public:
	string addStrings(string num1, string num2) 
	{
		int LSize = num1.size();
		int RSize = num2.size();

		// 以长字符串作为外部循环
		if (LSize < RSize)
		{
			num1.swap(num2);
			swap(LSize, RSize);
		}

		string strRet;
		strRet.reserve(LSize + 1);

		char cRet = 0;
		char cstep = 0;

		for (size_t i = 0; i < LSize; ++i)
		{
			cRet = num1[LSize - i - 1] - '0' + cstep;
			cstep = 0;

			if (i < RSize)
			{
				cRet += num2[RSize - i - 1] - '0';
			}

			if (cRet >= 10)
			{
				cRet -= 10;
				cstep = 1;
			}

			strRet += cRet + '0';
		}

		if (cstep)
			strRet += '1';

		reverse(strRet.begin(), strRet.end());

		return strRet;
	}
};