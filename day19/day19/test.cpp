//找假币问题
#include <iostream> 
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		if (n != 0) //输入货币数不为0
		{
			int count = 0; //设置开始找到假货币数为0
			while (n > 1)  //只要货币数大于1 进入循环开始判断
			{
				n = n / 3 + 1 - (n % 3 ^ 3) / 3;  //货币数每次计算
				count++;  //假货币数+1
			}
			cout << count << endl; //当货币数不满足>1 跳出循环
		}
	}
	return 0;
}