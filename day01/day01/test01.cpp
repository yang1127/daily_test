//#include <iostream>
//#include <vector>
//#include <algorithm> //sort
//using namespace std;
//
//int main()
//{
//	int n; //����n������
//	while (cin >> n)
//	{
//		vector<int> arr(3 * n); //�����СΪ 3 * n�����ܶ�Ա
//		int sum = 0; //long long int
//		for (int i = 0; i < 3 * n; i++) //��������
//		{
//			cin >> arr[i];
//		}
//
//		sort(arr.begin(), arr.end()); //������Ԫ�ؽ�������������ķ�ʽ����
//		for (int i = n; i <= 3 * n - 2; i = i + 2) //�����ˮƽֵ���ڸö���ĵڶ���ˮƽֵ
//		{                                          //��ÿ i+2 ��λ��Ϊһ��ˮƽֵ��- 2��i��2��λ�ÿ�ʼ
//			sum = sum + arr[i];
//		}
//
//		cout << sum << endl;
//	}
//}

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string s1;
//	string s2;
//	getline(cin, s1); //�����һ���ַ���
//	getline(cin, s2); //����ڶ����ַ���
//	char arr[256] = { 0 }; //��ʼ������Ԫ��Ϊ0
//	for (int i = 0; i < s2.size(); ++i) //����s2
//	{
//		arr[s2[i]]++; //��s2�е��ַ��±���Ϊ1    
//	}
//	string tmp; //����������ַ���
//	for (int i = 0; i < s1.size(); ++i)//����s1
//	{
//		if (arr[s1[i]] == 0) //�±�Ϊ0ʱ
//		{
//			tmp = tmp + s1[i];
//		}
//	}
//	cout << tmp << endl;
//
//	system("pause");
//	return 0;
//}

////����������
////���룺hello_world
////      nice_to_meet_you
////���:helloWorld
////     niceToMeetYou
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char arr[101];
//	while (cin >> arr)
//	{
//		for (int i = 0; i < 101; i++)
//		{
//			if ('a' <= arr[i] && arr[i] <= 'z' || arr[i] == '_') //Сд���벢�����»���_�ٱ���
//			{
//				if (arr[i] == '_') //���Ϊ�»���
//				{
//					++i; //���»��ߵ���һλ
//					arr[i] = arr[i] - 32; //�û��ɴ�д
//				}
//				cout << arr[i];	//����
//			}
//			else //���벻����������
//				break;
//		}
//		cout << endl;
//	}
//
//	system("pause");
//	return 0;
//}
//
//���ʵ���
//���� I am a student
//��� student a am I
//
//c����
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int strLen(char* s) //�󳤶�
//{
//	int count = 0;
//	while (*s)
//	{
//		count++;
//		s++;
//	}
//		
//	return count;
//}
//
//void reverse_s(char* s1, char* s2) 
//{
//	while (s1 < s2) //ͷβ����
//	{
//		char tmp = *s1; 
//		*s1 = *s2;
//		*s2 = tmp;
//		s1++;
//		s2--;
//	}
//}
//
//void reverse(char* s)
//{
//	//��������
//	int length = strLen(s);
//	reverse_s(s, s + length - 1);
//
//	//�ֲ�����
//	while (*s)
//	{
//		//��ȡһ�����ʽ���
//		char* temp = s;
//		while (*s != ' ' && *s != '\0')
//			s++;	
//
//		//��������
//		reverse_s(temp, s - 1);
//
//		//Ϊ�ո�����һ������
//		while (*s == ' ')
//			++s;
//	}
//}
//
//int main()
//{
//	char s[100]; //ȱ�ݣ��ռ��С���ơ�δ�ж�����Ϊ��СдӢ��
//	cin.getline(s, 100); //�ռ��Сȷ��
//		reverse(s);
//		
//	cout << s << endl;
//
//	system("pause");
//	return 0;
//}

////c++
//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//string reverse(string s)
//{
//	vector<string> v;
//	string tmp;
//	for (int i = 0; i < s.size(); i++)
//	{
//		if (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z')
//		{
//			tmp.push_back(s[i]);
//		}
//		else
//		{
//			if (tmp.size() > 0)
//				v.push_back(tmp);
//
//			tmp = "";
//		}
//	}
//
//	if (tmp.size() > 0) //���һ�����ʵ�λ��
//		v.push_back(tmp);
//
//	//�����ڲ���ת
//	string tmp1;
//	for (int i = v.size() - 1; i >= 0; i--) //����洢��ȥ
//	{
//		tmp1 = tmp1 + v[i];
//		tmp1.push_back(' ');
//	}
//
//	return tmp1;
//}
//
//
//int main()
//{
//	string s;
//	while (getline(cin, s))
//		cout << reverse(s) << endl;
//
//	system("pause");
//	return 0;
//}

////ƹ������
//#include<iostream>
//#include<string>
//#include<map>
//using namespace std;
//
//int main()
//{
//	string s1, s2;
//	while (cin >> s1 >> s2)
//	{
//		bool status = true;
//		map<char, int> str1, str2;
//		for (int i = 0; i < s1.size(); i++)
//			str1[s1[i]]++;
//
//		for (int j = 0; j < s2.size(); j++)
//			str2[s2[j]]++;
//
//		map<char, int>::iterator it = str2.begin();
//		while (it != str2.end())
//		{
//			if (str1[it->first] < it->second) //str1 < str2�������˳����������������
//			{
//				status = false;
//				break;
//			}
//			++it;
//		}
//
//		if (status== true )
//			cout << "Yes" << endl;
//		else
//			cout << "No" << endl;
//	}
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a;
//	cin >> a;
//	int a1 = a / 100;
//	int a2 = a / 10 % 10;
//	int a3 = a % 10;
//	int sum = a1 * a1 * a1 + a2 * a2 * a2 + a3 * a3 * a3;
//	printf("%d", sum);
//
//}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int i, j, a = 0;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (j % 2)
//				break;
//			a++;
//		}
//		a++;
//	}
//	cout << a << endl;
//	return 0;
//}

//#include <iostream>
//#include <assert.h>
//using namespace std;
//
////���������Ƿ��и�����������������������
//void Fnid_val(int *arr, int row, int col, int num)
//{
//	assert(arr); //���ж����鲻Ϊ��
//	if (row > 0 && col > 0)
//	{
//		int tmpRow = 0; //��
//		int tmpCol = col - 1; //�� 3
//		while (tmpRow < row && col >= 0)
//		{
//			if (arr[tmpRow * col + tmpCol] == num) //�պ�Ϊ����
//			{
//				printf("%d,intdex = %d\n", arr[tmpRow * col + tmpCol], tmpRow * col + tmpCol);
//				break;
//			} 
//			else if (arr[tmpRow * col + tmpCol] > num) //�м�һ��ǰ��
//			{
//				--tmpCol;
//			} 
//			else //��������һ����
//			{
//				++tmpRow;
//			}
//		}
//	}
//} 
//
//int main()
//{
//	int arr[4][4] = { 1, 2, 8, 9,	
//					  2, 4, 9, 12,
//					  4, 7, 10, 13,
//					  6, 8, 11, 15 };
//	Fnid_val((int*)arr, 4, 4, 15);
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <assert.h>
//using namespace std;
//
////���������Ƿ��и�����������������������
//void Fnid_val(int *arr, int row, int col, int num)
//{
//	assert(arr); 
//	if (row > 0 && col > 0)
//	{
//		int tmprow = 0;
//		int tmpcol = col - 1;
//		while (tmprow < row && tmpcol >= 0)
//		{
//			if (arr[tmprow * col + tmpcol] == num)
//			{
//				cout << "�ҵ���" << endl;
//				break;
//			}	
//			else if (arr[tmprow * col + tmpcol] > num)
//				--tmpcol;
//			else
//				++tmprow;
//		}
//	}
//} 
//
//int main()
//{
//	int arr[4][4] = { 1, 2, 8, 9,	
//					  2, 4, 9, 12,
//					  4, 7, 10, 13,
//					  6, 8, 11, 15 };
//	Fnid_val((int*)arr, 4, 4, 11);
//	system("pause");
//	return 0;
//}

//�ҵڶ���
//#include <iostream>
//#include <vector>
//#include  <algorithm>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		vector<int> arr(3 * n);
//		for (int i = 0; i < 3 * n; i++)
//			cin >> arr[i];
//
//		int sum = 0;
//		sort(arr.begin(), arr.end());
//		for (int i = n; i <= 3 * n - 2; i = i + 2) 
//		{
//			sum = sum + arr[i];
//		}
//		cout << sum << endl;
//	}
//	system("pause");
//	return 0;
//}

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1;
	string s2;
	getline(cin, s1);
	getline(cin, s2);
	char arr[256] = { 0 }; //��ʼ�±�Ϊ0
	for (int i = 0; i < s2.size(); i++)
	{
		arr[s2[i]]++;
	}
	string tmp;
	for (int i = 0; i < s1.size(); i++)
	{
		if (arr[s1[i]] == 0)
			tmp += s1[i];
	}
	cout << tmp << endl;
	system("pause");
	return 0;
}