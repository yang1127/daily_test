////�ռ����б�

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		cin.get();
//		string name;
//		for (int i = 0; i < n; i++)
//		{
//			getline(cin, name); //��ʼ��������
//			if (i != n - 1)  //��Ϊ���һ������
//			{
//				if (name.find(',') != - 1 || name.find(' ') !=  - 1) //��һ������û�е����
//					cout << '\"' << name << '\"' << ',' << " ";
//				else
//					cout << name <<  ',' <<" ";
//			}
//			else //�������һ������
//			{
//				if (name.find(',') != -1 || name.find(' ') != -1)
//					cout << '\"' << name << '\"' << endl;
//				else
//					cout << name << endl;
//			}
//		}
//	}
//
//	system("pause");
//	return 0;
//}

////������
////��һ��С����  1ֻ
////�ڶ������1ֻ  С1ֻ   ��2ֻ
////���������2  С1   ��3
////���������3  С2   ��5
////���������5   С3  ��8
////......
////1 2 3 5 8  ..... 쳲�������������
//#include <iostream> 
//using namespace std;
//
//int main()
//{
//	long long int n[91];
//	n[0] = 1;
//	n[1] = 2;
//	int day_number;
//
//	for (int i = 2; i <= 90; i++)  //������Ŀ������Χ
//	{
//		n[i] = n[i-1] + n[i- 2];
//
//	}
//	while (cin >> day_number)
//	{
//		cout << n[day_number - 1] << endl; //��Ŀ-1 ��ʼ���±�Ϊ0��ʼ
//	}
//
//	system("pause");
//	return 0;
//}

//���齱
//�����н�����
//2  50.00%

//////ͨ�ʽ  -> ��Ϊ����������
//// 1/2 + ��-1/3�� + ��1/4��+ ��-1/5��...
////���ݽ�����Ƶ�
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	double nowin = 0;
//	double p = 0.50;
//	double sum = p;
//	cin >> n;
//	for (int i = 3; i <= n; i++)
//	{
//		p /= -i; //ÿһ��
//		sum += p; //ͨ�ʽ
//	}
//
//	nowin = sum * 100;
//	printf("%0.2f%%", nowin); //������λС��
//
//	system("pause");
//	return 0;
//}



#include <iostream>
#include <iomanip> //С����
using namespace std;

int main()
{
	long long pac[21] = { 0,0,1 }, fun[21] = { 0,1,2 };// ����������Ԥ����һ��Ϊ0����������������n  // �׳�
	int n;
	for (int i = 3; i <= 20; i++)
	{
		pac[i] = (i - 1) * (pac[i - 2] + pac[i - 1]);//���ŵĵ��ƹ�ʽ 
		fun[i] = i * fun[i - 1];//�׳˵ĵ��ƹ�ʽ 
	}
	while (cin >> n)
	{
		cout << fixed << setprecision(2) << 1.0 * pac[n] / fun[n] * 100 << '%' << endl;//��100.0���ѽ�������double��������λС�� 
	}
	return 0;
}


