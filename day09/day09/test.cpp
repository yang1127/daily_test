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

//查找第K小数
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, nums, k;
	while (cin >> n)
	{
		vector <int> v;
		for (int i = 0; i < n; i++)
		{
			cin >> nums;
			v.push_back(nums);
		}
			
		cin >> k;
		sort(v.begin(), v.end());
		unique(v.begin(), v.end());
		cout << v[k - 1];
	}

	system("pause");
	return 0;
}
