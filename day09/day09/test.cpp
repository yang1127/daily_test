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

////���ҵ�KС��
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

////���ϴ�
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
//		auto it = myMap1.find(key);// �ж��Ƿ����keyֵָ���ڵ� 
//		if(it==myMap1.end())
//			return -1; 
//		else
//		{
//			auto list_it = myMap1[key]; // ��ȡkeyֵ��Ӧ�ڵ��������е�λ�� 
//			int value = list_it->value; // ��ȡ����Ӧkeyֵ��value
//			Elem elem; 
//			elem.key=key;
//			elem.value = value; 
//			myList1.erase(list_it); // ɾ��ԭ�ڵ�Ԫ�� 
//			myList1.push_front(elem);//������ͷ����ӽڵ�
//			myMap1[key]=myList1.begin();//����hashmap�ж�ӦԪ���������е���λ�� 
//			return myList1.begin()->value;//����value 
//		} 
//	}
//	
//	void put(long key,long value)
//	{
//		auto it = myMap1.find(key);
//		if(it==myMap1.end())//��hashmap��δ�ҵ���ֱ�Ӳ���
//		{  
//			if(myList1.size()==_size)//�����ﵽ���ƣ����Ƚ�����ĩβ���δʹ������ɾ��
//			{  
//				long key=myList1.back().key;//1. �Ȼ�ȡ��ĩβ�ڵ�keyֵ 
//				myMap1.erase(key);//2. ͨ��keyֵɾ��hashmap��Ԫ�� 
//				myList1.pop_back();//3. ɾ��������ĩβԪ�� 
//			}
//			Elem elem; 
//			elem.key=key; 
//			elem.value=value; 
//			myList1.push_front(elem);//������ͷ��������Ԫ�� 
//			myMap1[key]=myList1.begin();//��hashmap�в������� 
//		}
//		else
//		{
//			auto list_it = myMap1[key];//��ȡkeyֵ��Ӧ��������λ�� 
//			Elem ee; 
//			ee.key=key; 
//			ee.value=value; 
//			*list_it = ee;//����������ָ��λ��Ԫ����Ϣ 
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
//				continue; // ��Ҫע��ջ�ռ�Ϊ0����� 
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

//�ַ������
class Solution {
public:
	string addStrings(string num1, string num2) 
	{
		int LSize = num1.size();
		int RSize = num2.size();

		// �Գ��ַ�����Ϊ�ⲿѭ��
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