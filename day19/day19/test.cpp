//�Ҽٱ�����
#include <iostream> 
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		if (n != 0) //�����������Ϊ0
		{
			int count = 0; //���ÿ�ʼ�ҵ��ٻ�����Ϊ0
			while (n > 1)  //ֻҪ����������1 ����ѭ����ʼ�ж�
			{
				n = n / 3 + 1 - (n % 3 ^ 3) / 3;  //������ÿ�μ���
				count++;  //�ٻ�����+1
			}
			cout << count << endl; //��������������>1 ����ѭ��
		}
	}
	return 0;
}