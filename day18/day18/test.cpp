////���������������ӷ�
//class Solution {
//public:
//	int Add(int num1, int num2)
//	{
//		while (num2 != 0)
//		{
//			int num3 = num1 ^ num2; //���
//			int num4 = (num1 & num2) << 1; //��������
//			num1 = num3; //�ظ����
//			num2 = num4; //�ظ���������
//		}
//		return num1; //ֱ��û�н�λ����
//	}
//};

//#include <iostream>
//#include <math.h>
//using namespace std;
//
////�����Σ�����֮�ʹ��ڵ����ߣ�����֮��ľ���ֵС�ڵ�����
//int main()
//{
//	long long int a, b, c;
//	while (cin >> a >> b >> c)
//	{
//		if ((a + b) > c && (a + c) > b && (b + c) > a
//			&& (abs(a - b) < c) && (abs(a - c) < b) && (abs(b - c) < a))
//			cout << "Yes" << endl;
//		else
//			cout << "No" << endl;
//	}
//
//    system("pause");
//	return 0;
//}

//�ⷨ����ʹ�ú�
//#include <iostream> 
//#include <string> 
//
//#define ADD(x, y) ((x) + (y))  //�������ߺ�
//#define CMP(x, y) ((x) > (y))  //�������ߺ�������߽��бȽ�
//
//int main()
//{ 
//	double a, b, c; 
//	while (std::cin >> a >> b >> c) 
//	{ 
//		//�����߽���������������бȽ� 
//		if (CMP(ADD(a, b), c) && CMP(ADD(b, c), a) && CMP(ADD(a, c), b))
//		{ 
//			std::cout << "Yes" << std::endl;
//		}
//		else 
//		{
//			std::cout << "No" << std::endl;
//		}
//    }
//
//	system("pause");
//	return 0;
//}


//#include <iostream> 
//#include <string> 
//
//using namespace std;
//
//#define ADD(x, y) ((x) + (y))  //�������ߺ�
//#define CMP(x, y) ((x) > (y))  //�������ߺ�������߽��бȽ�
//
//int main()
//{
//	double a, b, c;
//	while (cin >> a >> b >> c)
//	{
//		//�����߽���������������бȽ� 
//		if (CMP(ADD(a, b), c) && CMP(ADD(b, c), a) && CMP(ADD(a, c), b))
//			cout << "Yes" << endl;
//		else
//			cout << "No" << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//
//bool fun(vector<int> v)
//{
//	for (int j = 0; j < v.size() - 1; j++)
//	{
//		if (v[j] > v[j + 1])
//			return false;
//	}
//	return true;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int> v(n);
//	for (int i = 0; i < n; i++)
//		cin >> v[i];
//
//	fun(v);
//
//	system("pause");
//	return 0;
//}
