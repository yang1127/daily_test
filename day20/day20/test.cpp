//ͳ�����Ӹ���
//˼·��N�����Ӿ����ܱ�N��������
//�ʿ��Ա���1��N֮����������֣��ж��Ƿ��ܱ�N����������ܱ�������������1��
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		int count = 0; //ͳ�����Ӹ���
		for (int i = 2; i <= sqrt(n); i++) //�������Ƿ�������
		{
			if (n % i == 0)
			{
				while (n % i == 0)
				{
					n = n / i; //����
				}
				count++;  //���������1
			}
		}
		if (n != 1)
			count++;

		cout << count << endl;
	}

	system("pause");
	return 0;
}
