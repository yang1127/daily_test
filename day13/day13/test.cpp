//#include<iostream>
//#include<string>
//
//using namespace std;
//
//int main()
//{
//	string a, b; 
//	while (cin >> a >> b) //���������ַ���
//	{
//		if (a.length() > b.length())
//			swap(a, b); //��ĿҪ������̴��У����ȳ��ֵ��Ǹ�����ʹ��һ����Ϊ�̴�
//
//		string c; //��������������Ӵ�
//		for (int i = 0; i < a.length(); i++)
//		{
//			for (int j = i; j < a.length(); j++)
//			{                                         //��i��ָ���ַ�����j - i + 1�ĳ���
//				string tmp = a.substr(i, j - i + 1);  //substr(start,length) ������start������start��ָ���ַ�������ʼ��length���ַ�
//													  //���û��ָ��length����ô���ص��ַ���������start����β���ַ� 
//				int d = b.find(tmp); //�ڳ������Ҷ̴��е��Ӵ�
//				if (d < 0)  ///��û���ҵ���������
//					break;
//
//				else if(c.length() < tmp.length()) //���ҵ��Ĺ����Ӵ���ȡ�����Ӵ�
//					c = tmp;
//			}
//		}
//		cout << c << endl;
//	}
//
//	system("pause");
//	return 0;
//}


//#include <iostream> 
//using namespace std;
//
//int main()
//{
//	int month; 
//	while (cin >> month)
//	{ 
//		int first = 1; 
//		int second = 1; 
//		int result; 
//		for (int i = 3; i <= month; ++i)
//		{ 
//			result = first + second;
//			first = second;
//			second = result;
//		}
//		cout << result << endl; 
//	}
//	return 0;
//}

//����λλ��ż��λǰ
//class Solution {
//public:
//	vector<int> exchange(vector<int>& nums) {
//		int left = 0;
//		int right = nums.size() - 1;
//		while (left < right)
//		{
//			while (left < right && (nums[left] & 1))  // (nums[left] & 1)��ǰλΪ����λ
//				left++;
//
//			while (left < right && !(nums[right] & 1))  // (nums[left] & 1)��ǰλΪż��λ
//				right--;
//
//			swap(nums[left], nums[right]);
//
//		}
//		return nums;
//	}
//};

//class Solution {
//public:
//	void reOrderArray(vector<int> &array) {
//		if (array.empty())
//			return;
//
//		int k = 0; //����ƶ��������λ
//		for (int i = 0; i < array.size(); i++)
//		{
//			if (array[i] & 1) //ǰ�������λ������Ҫ�ŵ�k���±괦
//			{
//				int tmp = array[i]; //�������
//				int j = i;
//				while (j > k) //��������֮ǰ������(ż������)���������һ��λ��
//				{
//					array[j] = array[j - 1]; //����
//					j--;
//				}
//				array[k++] = tmp; //���������������������ڵ�λ�ã���Ϊ�����Ǵ������ҷŵģ�û�п�Խ����������һ�������λ�ò����
//			}
//		}
//
//	}
//};

//���鳬��һ��
//class Solution {
//public:
//	int MoreThanHalfNum_Solution(vector<int> numbers) {
//
//		if (numbers.empty())
//			return 0;
//
//		sort(numbers.begin(), numbers.end()); //��С��������
//		int mid = numbers[numbers.size() / 2]; //��Ŀ�и����ֳ��ִ�����������һ�룬�������һ�����м�λ��
//		int count = 0;
//		for (int i = 0; i < numbers.size(); i++)
//		{
//			if (numbers[i] == mid)
//				count++;
//		}
//
//		//������һ���򷵻��м��������򷵻�0
//		return (count > numbers.size() / 2) ? mid : 0;
//	}
//};

//�Ż�
//class Solution {
//public:
//	int MoreThanHalfNum_Solution(vector<int> numbers) {
//		if (numbers.size() == 0)
//			return 0;
//
//		int number = numbers[0]; //��ʼ��Ϊ��һ����
//		int times = 1; //������Ϊ1
//		for (int i = 1; i < numbers.size(); i++)
//		{
//			if (times == 0) //times--�ᵽ0�� ����ʱ��ֵ���¸���number��times��Ϊ1���ٿ��Ҳ�ͬ��������
//			{
//				number = numbers[i];
//				times = 1;
//			}
//
//			if (numbers[i] == number) //��ȴ���++
//				times++;
//			else
//				times--; //���ȴ���--
//		}
//
//		//������뱾��������������timesһ��>0, ����number����ľ���׼Ŀ�꣬���ǻ���Ҫȷ��
//		int count = 0;
//		for (int i = 0; i < numbers.size(); i++)
//		{
//			if (numbers[i] == number)
//				count++;
//		}
//
//		return (count > numbers.size() / 2) ? number : 0;
//	}
//};

//�ո��滻

//class Solution {
//public:
//	void replaceSpace(char *str, int length) {
//		int count = 0; //ͳ�ƿո���
//		char *start = str; //��Ԫ��
//		while (*start)
//		{
//			if (isspace(*start)) //isspace() �ж��Ƿ�Ϊ�ո�
//				count++;
//			start++;
//		}
//
//		char *old_index = str + length; //C++�ַ���Ҫ����'\0'
//		char *new_index = str + length + 2 * count;
//		while (old_index >= str && new_index >= str) //�¡����±���ڵ�����Ԫ���±�
//		{
//			if (!isspace(*old_index)) //��Ϊ�ո񣬾���ǰ�ƶ�
//			{
//				*new_index = *old_index;
//				old_index--; //�±��ƶ�
//				new_index--;
//			}
//			else //Ϊ�ո��滻%20
//			{
//				*new_index-- = '0';
//				*new_index-- = '2';
//				*new_index-- = '%';
//				old_index--;
//			}
//		}
//	}
//};//�����������//class Solution {
//public:
//	vector<int> printListFromTailToHead(ListNode* head) {
//		//stack
//		stack<int> s; //���������뵽ջ��
//		vector<int> v; //���淴�����������
//
//		while (head)
//			s.push(head->val); //����ջ��
//
//		while (!s.empty())
//		{
//			v.push_back(s.top());
//			s.pop();
//		}
//		return v;
//	}
//};

//class Solution {
//public:
//	vector<int> printListFromTailToHead(ListNode* head) {
//		vector<int> v;
//		while (head)
//		{
//			v.push_back(head->val);
//			head = head->next;
//		}
//
//		reverse(v.begin(), v.end());
//
//		return v;
//	}
//};

/**
* Definition for binary tree
* struct TreeNode {
* int val;
* TreeNode *left;
* TreeNode *right;
* TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/
class Solution {
public:
	TreeNode* reConstructBinaryTreeCore(vector<int> pre, int preStart, int preEnd, vector<int>
		vin, int vinStart, int vinEnd) {
		if (preStart > preEnd || vinStart > vinEnd) 
				return nullptr;
		
		TreeNode *root = new TreeNode(pre[preStart]);
		for (auto i = vinStart; i <= vinEnd; i++) //�����������У��Ҹ��ڵ㣬���Խ����黮��Ϊ������
		{
			if (pre[preStart] == vin[i]) 
			{
				//ǰ��ĵ�һ���ڵ㣬��root���ܽ����򻮷�Ϊ������
				//һ����������ǰ���У�����ô������Ԫ�صĸ����ǲ����
				//��ʵ�ʱ�����ʱ��ǰ���У�������������ֱ�����ʽ���������Ľڵ㶼����һ���
				//���������ص���Ҫ������±�����
				//��������������ȷ���������Ľڵ�����ǣ�i - vinStart (û�д�0��ʼŶ)
				//���ԣ���Ҫ��preStart+1������i - vinStart��Ԫ�أ�������������ǰ������
				root->left = reConstructBinaryTreeCore(pre, preStart + 1, i - vinStart + preStart, vin, vinStart, i - 1);
				root->right = reConstructBinaryTreeCore(pre, i - vinStart + preStart + 1, preEnd, vin, i + 1, vinEnd);
				break;
			}
		}
		return root;
	}

	TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin) 
	{
		if (pre.empty() || vin.empty()) 
			return nullptr;
		
		return reConstructBinaryTreeCore(pre, 0, pre.size() - 1, vin, 0, vin.size() - 1);
	}
};