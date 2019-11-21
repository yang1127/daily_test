//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	int a = 0, b = 1, c; //ʹ������������������ʵ��쳲���������
//	int min;   
//	cin >> n; 
//	min = n - a; //������С��Ϊ������ȥǰһ��
//	while (1)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		if ((n- c) < min && (n - c) >= 0)
//		{
//			min = n - c;
//		}
//		if ((n - c) < 0)
//		{
//			if (fabs(n - c) < min)
//			{
//				min = fabs(n - c);
//			}
//			break;
//		}
//	}
//
//	cout << min << endl;
//	return 0;
//}

class Parenthesis {
public: 
	bool chkParenthesis(string A, int n) { 
		stack<char> sc;
		for (auto ele : A)
		{ 
            switch (ele) 
			{ 
			    case '(':
					sc.push(ele); 
				    break;
				case ')':
				{
				    if (sc.empty() || sc.top() != '(')
				        return false;
				    else
				        sc.pop(); 
				}
				break;
			default:
				return false; 
			} 
		}
		return true;
	} 
};
