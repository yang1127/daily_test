//统计因子个数
//思路：N的因子就是能被N整除的数
//故可以遍历1到N之间的所有数字，判断是否能被N整除，如果能被整除，则结果加1。
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		int count = 0; //统计因子个数
		for (int i = 2; i <= sqrt(n); i++) //遍历看是否能整除
		{
			if (n % i == 0)
			{
				while (n % i == 0)
				{
					n = n / i; //除尽
				}
				count++;  //若整除则加1
			}
		}
		if (n != 1)
			count++;

		cout << count << endl;
	}

	system("pause");
	return 0;
}
