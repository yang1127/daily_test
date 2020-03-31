////排序子序列
//#include <iostream>
//#include <vector>
//using namespace std;
////子序列非递增或者非递减
////6
////1 2 3 2 2 1
////2
//int main()
//{
//	int n; //输入的正整数
//	int i = 0;
//	while (cin >> n)
//	{
//		vector<int> arr;
//		arr.resize(n + 1); //开辟空间
//		for (i = 0; i < n; i++) //将数字放到vector数组中去
//			cin >> arr[i];
//
//		int tmp = 0; //记录子序列数
//		arr[n] = 0;
//		int i = 0;
//		while (i < n)
//		{
//			//分割子序列依据:前一个数大于等于后一个数，分割
//			if (arr[i] < arr[i + 1]) //若前者小于后者  //升序
//			{
//				while (i < n && arr[i] <= arr[i + 1]) //一直遍历直到找到前者大于等于后者
//					i++;
//
//				tmp++; //子序列+1 分割
//				i++;
//			}
//			else if (arr[i] == arr[i + 1]) //前一个等于后一个继续找下一个
//				i++;
//
//			else  //降序
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
////倒置字符串
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
//	while (cin >> s) //输入字符串 i like beijing.
//	{
//		st.push(s); //将字符串入栈 i like beijing.
//		if (*(s.rbegin()) == '.') //反向开始 为.则输入完成 可以出栈
//			break;
//	}
//
//	cout << st.top();
//	st.pop(); //出栈
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
//	int MLen = 0; //计算字符的个数
//	int NumBlank = 0; //计算空格的数组
//	int Index_MLen = 0;
//	int Index_new = 0;
//	int newlen = 0;
//	int i = 0; //从0号下标开始遍历
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
//	if (newlen > len)//newlen是扩充后数组的大小，所以一定要小于len原来大小，不然放不下
//		return;
//
//	Index_MLen = MLen;
//	Index_new = newlen;
//	while (Index_MLen >= 0 && Index_new > Index_MLen)
//	{
//		if (str[Index_MLen] == ' ') //从后往前走，遇到空格，插入0 2 %
//		{
//			str[Index_new--] = '0';
//			str[Index_new--] = '2';
//			str[Index_new--] = '%';
//		} 
//		else //不是空格 将Mlen数组对应值赋给newlen
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