class Gift {
public:
	int getValue(vector<int> gifts, int n) {
		// write code here
		if (gifts.size() == 0 || n <= 0 ) //为空时
			return 0;

		int result = gifts[0]; //数组中的一个数
		int times = 1;         //次数
		for (int i = 1; i < n; ++i) //遍历数组
		{
			if (times == 0)  //次数为0时，保存下一个数字，次数设为1
			{
				result = gifts[0];
				times = 1;
			}

			else if (gifts[i] == result) //遍历到下一个数，与之前保存的数一致，次数加1
				times++;

			else   //遍历到下一个数，与之前保存的数不同，次数减1
				times--;
		}

		//判断该数出现的次数在数组中是否超过一半
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
