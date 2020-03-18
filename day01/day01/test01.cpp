//#include <iostream>
//#include <vector>
//#include <algorithm> //sort
//using namespace std;
//
//int main()
//{
//	int n; //输入n个队伍
//	while (cin >> n)
//	{
//		vector<int> arr(3 * n); //数组大小为 3 * n，即总队员
//		int sum = 0; //long long int
//		for (int i = 0; i < 3 * n; i++) //遍历数组
//		{
//			cin >> arr[i];
//		}
//
//		sort(arr.begin(), arr.end()); //将数组元素进行排序，以升序的方式排序
//		for (int i = n; i <= 3 * n - 2; i = i + 2) //队伍的水平值等于该队伍的第二高水平值
//		{                                          //即每 i+2 的位置为一次水平值，- 2：i从2的位置开始
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
//	getline(cin, s1); //输入第一个字符串
//	getline(cin, s2); //输入第二个字符串
//	char arr[256] = { 0 }; //初始化数组元素为0
//	for (int i = 0; i < s2.size(); ++i) //遍历s2
//	{
//		arr[s2[i]]++; //将s2中的字符下标标记为1    
//	}
//	string tmp; //最终输出的字符串
//	for (int i = 0; i < s1.size(); ++i)//遍历s1
//	{
//		if (arr[s1[i]] == 0) //下标为0时
//		{
//			tmp = tmp + s1[i];
//		}
//	}
//	cout << tmp << endl;
//
//	system("pause");
//	return 0;
//}

////骆驼命名法
////输入：hello_world
////      nice_to_meet_you
////输出:helloWorld
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
//			if ('a' <= arr[i] && arr[i] <= 'z' || arr[i] == '_') //小写输入并且有下划线_再遍历
//			{
//				if (arr[i] == '_') //如果为下划线
//				{
//					++i; //找下划线的下一位
//					arr[i] = arr[i] - 32; //置换成大写
//				}
//				cout << arr[i];	//输入
//			}
//			else //输入不满足则跳出
//				break;
//		}
//		cout << endl;
//	}
//
//	system("pause");
//	return 0;
//}
//
//单词倒排
//输入 I am a student
//输出 student a am I
//
//c语言
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int strLen(char* s) //求长度
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
//	while (s1 < s2) //头尾交换
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
//	//整体逆序
//	int length = strLen(s);
//	reverse_s(s, s + length - 1);
//
//	//局部逆序
//	while (*s)
//	{
//		//获取一个单词结束
//		char* temp = s;
//		while (*s != ' ' && *s != '\0')
//			s++;	
//
//		//单词逆序
//		reverse_s(temp, s - 1);
//
//		//为空格，找下一个单词
//		while (*s == ' ')
//			++s;
//	}
//}
//
//int main()
//{
//	char s[100]; //缺陷：空间大小限制、未判断输入为大小写英文
//	cin.getline(s, 100); //空间大小确定
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
//	if (tmp.size() > 0) //最后一个单词的位置
//		v.push_back(tmp);
//
//	//单词内部翻转
//	string tmp1;
//	for (int i = v.size() - 1; i >= 0; i--) //逆序存储进去
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
