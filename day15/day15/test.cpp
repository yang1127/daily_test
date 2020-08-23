/*
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
*/

/*
//�������򷵻�����
class Solution {
public:
	vector<int> reversePrint(ListNode* head) {
		stack<int> st;
		vector<int> v;
		while (head)
		{
			st.push(head->val);
			head = head->next;
		}

		while (!st.empty())
		{
			v.push_back(st.top());
			st.pop();
		}

		return v;
	}
};

//��������
class Solution {
public:
	vector<int> reversePrint(ListNode* head) {
		vector<int> v;
		while (head)
		{
			v.push_back(head->val);
			head = head->next;
		}

		reverse(v.begin(), v.end());
		return v;

	}
};
*/

/*
//��ת����
class Solution {
public:
	ListNode* reverseList(ListNode* head) {
		//ͷ��
		ListNode* cur = head;
		ListNode* newnode = NULL;


		//NUll
		//1->NULL
		//2->1->NULL
		//3->2->1->NULL
		while (cur)
		{
			ListNode* next = cur->next;
			cur->next = newnode;

			newnode = cur;
			cur = next;
		}
		return newnode;
	}
};
*/

/*
//�����������ĵ�k��ڵ�
class Solution {
public:
	vector<int> v;
	void Middle(TreeNode* root)
	{
		if (root == NULL)
			return;

		Middle(root->left);
		v.push_back(root->val);
		Middle(root->right);
	}

	int kthLargest(TreeNode* root, int k) {
		//�� �������������� k ��Ľڵ㡱 ��ת��Ϊ�� �������������������ĵ� k ���ڵ�
		Middle(root);

		return v[v.size() - k];
	}
};
*/






































































