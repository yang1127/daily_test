class Gift {
public:
	int getValue(vector<int> gifts, int n) {
		// write code here
		if (gifts.size() == 0 || n <= 0 ) //Ϊ��ʱ
			return 0;

		int result = gifts[0]; //�����е�һ����
		int times = 1;         //����
		for (int i = 1; i < n; ++i) //��������
		{
			if (times == 0)  //����Ϊ0ʱ��������һ�����֣�������Ϊ1
			{
				result = gifts[0];
				times = 1;
			}

			else if (gifts[i] == result) //��������һ��������֮ǰ�������һ�£�������1
				times++;

			else   //��������һ��������֮ǰ���������ͬ��������1
				times--;
		}

		//�жϸ������ֵĴ������������Ƿ񳬹�һ��
		int count = 0;
		for (int i = 0; i < n; ++i)
		{
			if (gifts[i] == result)
				++count;
		}

		if (count >= n / 2)
		{
			return result;
		}
		else
			return 0;
	}
};
