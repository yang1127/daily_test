////收件人列表

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
//			getline(cin, name); //开始处理名字
//			if (i != n - 1)  //不为最后一行名字
//			{
//				if (name.find(',') != - 1 || name.find(' ') !=  - 1) //在一行内若没有到最后
//					cout << '\"' << name << '\"' << ',' << " ";
//				else
//					cout << name <<  ',' <<" ";
//			}
//			else //处理最后一行名字
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

////养兔子
////第一天小兔子  1只
////第二天成熟1只  小1只   共2只
////第三天成熟2  小1   共3
////第四天成熟3  小2   共5
////第五天成熟5   小3  共8
////......
////1 2 3 5 8  ..... 斐波那契数列问题
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
//	for (int i = 2; i <= 90; i++)  //控制题目所给范围
//	{
//		n[i] = n[i-1] + n[i- 2];
//
//	}
//	while (cin >> day_number)
//	{
//		cout << n[day_number - 1] << endl; //数目-1 开始从下标为0开始
//	}
//
//	system("pause");
//	return 0;
//}

//年会抽奖
//无人中奖概率
//2  50.00%

//////通项公式  -> 改为多数组输入
//// 1/2 + （-1/3） + （1/4）+ （-1/5）...
////根据结果反推的
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
//		p /= -i; //每一项
//		sum += p; //通项公式
//	}
//
//	nowin = sum * 100;
//	printf("%0.2f%%", nowin); //保留两位小数
//
//	system("pause");
//	return 0;
//}



#include <iostream>
#include <iomanip> //小数点
using namespace std;

int main()
{
	long long pac[21] = { 0,0,1 }, fun[21] = { 0,1,2 };// 错排数量，预留第一项为0，配合下文中输入的n  // 阶乘
	int n;
	for (int i = 3; i <= 20; i++)
	{
		pac[i] = (i - 1) * (pac[i - 2] + pac[i - 1]);//错排的递推公式 
		fun[i] = i * fun[i - 1];//阶乘的递推公式 
	}
	while (cin >> n)
	{
		cout << fixed << setprecision(2) << 1.0 * pac[n] / fun[n] * 100 << '%' << endl;//用100.0来把结果处理成double，保留两位小数 
	}
	return 0;
}


