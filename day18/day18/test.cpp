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