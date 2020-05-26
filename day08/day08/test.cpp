//#include<iostream>
//#include<vector>
//#include<string>
//
//using namespace std;
//int main()
//{
//	int n;
//	cin>>n; 
//	vector<string> v;
//	v.resize(n); 
//	for(auto& str : v) 
//		cin>>str;
//	bool lenSym = true, lexSym = true; 
//	for(size_t i = 1; i < v.size(); ++i) 
//	{ 
//		if(v[i-1].size() >= v[i].size())
//		{ 
//			lenSym = false; break;
//		} 
//	}
//
//	for(size_t i = 1; i < v.size(); ++i) 
//	{ 
//		if(v[i-1] >= v[i]) 
//		{ 
//			lexSym = false; break; 
//		}
//	}
//	if (lenSym&& lexSym) 
//		cout<<"both"<<endl; 
//
//	else if (!lenSym && lexSym)
//		cout<<"lexicographically"<<endl;
//
//	else if (lenSym && !lexSym)
//		cout << "lengths" << endl; 
//
//	else if (!lenSym && !lexSym) 
//		cout << "none" << endl; 
//
//	return 0; 
//}

//#include<iostream> 
//
//using namespace std;
//
//int gcd(int a, int b)
//{
//	int r;
//	while(r = a%b)
//	{ 
//		a = b;
//		b = r;
//	}
//	return b;
//}
//
//int main() 
//{
//	int a,b;
//	while(cin >> a >> b)
//	{ 
//		cout << a*b/gcd(a,b) <<endl;
//	}
//	
//	return 0; 
//}

//#include <iostream>
//#include <fstream>
//#include <algorithm>
//#include <string>
//#include <vector>
//using namespace std;
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		vector<string> list(n);
//		vector<bool> flag(n, true);
//		for (int i = 0; i < n; ++i) cin >> list[i];
//		sort(list.begin(), list.end()); //将类似字符串经过排序，放在一起
//		for (int i = 0; i < list.size() - 1; ++i)
//		{
//			// 1、两串相同
//			// 2、前串是后串的子串，而且后串后一位是 '/'
//			if (list[i] == list[i + 1]) flag[i] = false;
//			else if (list[i].size() < list[i + 1].size() && \
//				list[i] == list[i + 1].substr(0, list[i].size()) && list[i + 1]
//				[list[i].size()] == '/')
//				flag[i] = false;
//		}
//		for (int i = 0; i < list.size(); ++i)
//			if (flag[i]) cout << "mkdir -p " << list[i] << endl;
//		cout << endl;
//	}
//	return 0;
//}
////DFS问题
//#include <iostream>
//#include <fstream>
//#include <vector>
//#include <queue>
//using namespace std;
//struct pos { int x, y; };
//int bfs(vector<vector<char> > & map, vector<vector<bool> > & visit, pos & start)
//{
//	const int dir[4][2] = { {-1,0},{1,0},{0,-1},{0,1} };
//	queue<pos> que;
//	int count = 0;
//	int m = map.size(), n = map[0].size();
//	que.push(start);
//	visit[start.x][start.y] = true; ++count;
//	while (!que.empty())
//	{
//		pos cur = que.front(), next;
//		que.pop();
//		for (int i = 0; i < 4; ++i)
//		{
//			next.x = cur.x + dir[i][0];
//			next.y = cur.y + dir[i][1];
//			if (next.x >= 0 && next.x < m && next.y >= 0 && next.y < n && \
//				!visit[next.x][next.y] && map[next.x][next.y] == '.')
//			{
//				que.push(next);
//				visit[next.x][next.y] = true;
//				++count;
//			}
//		}
//	}
//	return count;
//}
//int main()
//{
//	int m, n;
//	while (cin >> m >> n && (m*n))
//	{
//		pos start;
//		vector<vector<char> > map(m, vector<char>(n));
//		vector<vector<bool> > visit(m, vector<bool>(n));
//		for (int i = 0; i < m; ++i)
//			for (int j = 0; j < n; ++j)
//			{
//				visit[i][j] = false;
//				cin >> map[i][j];
//				if (map[i][j] == '@')
//					start.x = i, start.y = j;
//			}
//		cout << bfs(map, visit, start) << endl;
//	}
//	return 0;
//}

/*
补齐字符串，按照26进制进行计算
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define N 1000007
#include<iostream>
#include<string>
#include<vector>
#include<math.h>
using namespace std;
int main() {
	//字符串只包含小写字母
	string s1, s2;
	int len1, len2;
	while (cin >> s1 >> s2 >> len1 >> len2) {
		//只包含小写字母的字符串可以看成26进制的数制
		//将s1和s2补长到len2长度
		s1.append(len2 - s1.size(), 'a');
		s2.append(len2 - s2.size(), (char)('z' + 1));
		vector<int> array;
		for (int i = 0; i < len2; i++) {
			array.push_back(s2[i] - s1[i]);
		}
		int result = 0;
		for (int i = len1; i <= len2; i++) {
			for (int k = 0; k < i; k++) {
				result += array[k] * pow(26, i - 1 - k);
			}
		}
		//所有字符串最后都不包含是s2自身，所以最后要减1；
		cout << result - 1 << endl;
	}
	return 0;
}