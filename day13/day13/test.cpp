//#include<iostream>
//#include<string>
//
//using namespace std;
//
//int main()
//{
//	string a, b; 
//	while (cin >> a >> b) //���������ַ���
//	{
//		if (a.length() > b.length())
//			swap(a, b); //��ĿҪ������̴��У����ȳ��ֵ��Ǹ�����ʹ��һ����Ϊ�̴�
//
//		string c; //��������������Ӵ�
//		for (int i = 0; i < a.length(); i++)
//		{
//			for (int j = i; j < a.length(); j++)
//			{                                         //��i��ָ���ַ�����j - i + 1�ĳ���
//				string tmp = a.substr(i, j - i + 1);  //substr(start,length) ������start������start��ָ���ַ�������ʼ��length���ַ�
//													  //���û��ָ��length����ô���ص��ַ���������start����β���ַ� 
//				int d = b.find(tmp); //�ڳ������Ҷ̴��е��Ӵ�
//				if (d < 0)  ///��û���ҵ���������
//					break;
//
//				else if(c.length() < tmp.length()) //���ҵ��Ĺ����Ӵ���ȡ�����Ӵ�
//					c = tmp;
//			}
//		}
//		cout << c << endl;
//	}
//
//	system("pause");
//	return 0;
//}


//#include <iostream> 
//using namespace std;
//
//int main()
//{
//	int month; 
//	while (cin >> month)
//	{ 
//		int first = 1; 
//		int second = 1; 
//		int result; 
//		for (int i = 3; i <= month; ++i)
//		{ 
//			result = first + second;
//			first = second;
//			second = result;
//		}
//		cout << result << endl; 
//	}
//	return 0;
//}
