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
