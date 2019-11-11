//ÅÅÐò×ÓÐòÁÐ
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n; 
	int i = 0;
	while (cin >> n)
	{
		vector<int> arr;
		arr.resize(n + 1);
		for (i = 0; i < n; i++) 
		{
			cin >> arr[i];
		}

		int tmp = 0;
		arr[n] = 0;
		int i = 0;
		while (i < n)
		{
			if (arr[i] < arr[i + 1])
			{
				while (i < n && arr[i] <= arr[i + 1])
					i++;

				tmp++;
				i++;
			}

			else if (arr[i] == arr[i + 1])
				i++;

			else
			{
				while (i < n && arr[i] >= arr[i + 1])
					i++;

				tmp++;
				i++;
			}
		}

		cout << tmp << endl;
	}

	return 0;
}


//µ¹ÖÃ×Ö·û´®
//#include <iostream>
//#include <string>
//#include <stack>
//using namespace std;
//
//int main()
//{
//	string s;
//	stack<string> st;
//	while (cin >> s)
//	{
//		st.push(s);
//		if (*(s.rbegin()) == '.')
//			break;
//	}
//
//	cout << st.top();
//	st.pop();
//	while (!st.empty())
//	{
//		cout << " " << st.top();
//		st.pop();
//	}
//
//	system("pause");
//	return 0;
//}