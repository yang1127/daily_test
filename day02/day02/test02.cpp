////����������
//#include <iostream>
//#include <vector>
//using namespace std;
////�����зǵ������߷ǵݼ�
////6
////1 2 3 2 2 1
////2
//int main()
//{
//	int n; //�����������
//	int i = 0;
//	while (cin >> n)
//	{
//		vector<int> arr;
//		arr.resize(n + 1); //���ٿռ�
//		for (i = 0; i < n; i++) //�����ַŵ�vector������ȥ
//			cin >> arr[i];
//
//		int tmp = 0; //��¼��������
//		arr[n] = 0;
//		int i = 0;
//		while (i < n)
//		{
//			//�ָ�����������:ǰһ�������ڵ��ں�һ�������ָ�
//			if (arr[i] < arr[i + 1]) //��ǰ��С�ں���  //����
//			{
//				while (i < n && arr[i] <= arr[i + 1]) //һֱ����ֱ���ҵ�ǰ�ߴ��ڵ��ں���
//					i++;
//
//				tmp++; //������+1 �ָ�
//				i++;
//			}
//			else if (arr[i] == arr[i + 1]) //ǰһ�����ں�һ����������һ��
//				i++;
//
//			else  //����
//			{
//				while (i < n && arr[i] >= arr[i + 1])
//					i++;
//
//				tmp++;
//				i++;
//			}
//		}
//		cout << tmp << endl;
//	}
//	return 0;
//}

//
////�����ַ���
//#include <iostream>
//#include <string>
//#include <stack>
//using namespace std;
////i like beijing.
////bejing. like i
//int main()
//{
//	string s;
//	stack<string> st;
//
//	while (cin >> s) //�����ַ��� i like beijing.
//	{
//		st.push(s); //���ַ�����ջ i like beijing.
//		if (*(s.rbegin()) == '.') //����ʼ Ϊ.��������� ���Գ�ջ
//			break;
//	}
//
//	cout << st.top();
//	st.pop(); //��ջ
//
//	//i like 
//	while (!st.empty())
//	{
//		cout << " " << st.top(); // like  // i
//		st.pop();
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		if (i < 1)
//			continue;
//		if (i == 5)
//			break;
//		i++;
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//void ReplaceBlank(char *str, int len)
//{
//	int MLen = 0; //�����ַ��ĸ���
//	int NumBlank = 0; //����ո������
//	int Index_MLen = 0;
//	int Index_new = 0;
//	int newlen = 0;
//	int i = 0; //��0���±꿪ʼ����
//	if (str == NULL || len <= 0)
//		return;
//
//	while(str[i] != '\0')
//	{
//		++MLen;
//		if (str[i] == ' ')
//			++NumBlank;
//		++i;
//	} 
//	newlen = MLen + NumBlank * 2;// a b c d  -> a%20b%20c%20d
//	if (newlen > len)//newlen�����������Ĵ�С������һ��ҪС��lenԭ����С����Ȼ�Ų���
//		return;
//
//	Index_MLen = MLen;
//	Index_new = newlen;
//	while (Index_MLen >= 0 && Index_new > Index_MLen)
//	{
//		if (str[Index_MLen] == ' ') //�Ӻ���ǰ�ߣ������ո񣬲���0 2 %
//		{
//			str[Index_new--] = '0';
//			str[Index_new--] = '2';
//			str[Index_new--] = '%';
//		} 
//		else //���ǿո� ��Mlen�����Ӧֵ����newlen
//			str[Index_new--] = str[Index_MLen];
// 
//		--Index_MLen;
//	}
//} 
//
//int main()
//{
//	char str[30] = "a b c d";
//	int len = (sizeof(str) / sizeof(str[0]));
//	ReplaceBlank(str, len);
//	printf("%s\n", str);
//
//	system("pause");
//	return 0;
//}