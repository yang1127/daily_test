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

//���������1�ĸ���
//class Solution {
//public:
//	int hammingWeight(uint32_t n) {
//		int count = 0;
//		while (n)
//		{
//			n = n & (n - 1);
//			count++;
//		}
//		return count;
//	}
//};

//class Solution {
//public:
//	int majorityElement(vector<int>& nums) {
//		sort(nums.begin(), nums.end());
//		int num = nums[nums.size() / 2];
//		return num;
//	}
//};

//class Solution {
//public:
//	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//		if (l1 == NULL)
//			return l2;
//
//		if (l2 == NULL)
//			return l1;
//
//		if (l1->val <= l2->val)
//		{
//			l1->next = mergeTwoLists(l1->next, l2);
//			return  l1;
//		}
//		else
//		{
//			l2->next = mergeTwoLists(l1, l2->next);
//			return l2;
//		}
//
//
//	}
//};

/*
//��������
class Solution {
public:
	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
		if (root == NULL)
			return NULL;

		if (root == p || root == q)
			return root;

		TreeNode* left = lowestCommonAncestor(root->left, p, q);
		TreeNode* right = lowestCommonAncestor(root->right, p, q);
		//p��������q������
		if (left != NULL && right != NULL)
			return root;

		//p q������
		if (left != NULL)
			return left;

		//p q������
		if (right != NULL)
			return right;

		return NULL;
	}
};
*/

/*
//�������һ���ظ���
class Solution {
public:
	int findRepeatNumber(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] == nums[i + 1])
				return nums[i];
		}
		return -1;
	}
};

//set
class Solution {
public:
	int findRepeatNumber(vector<int>& nums) {
		set<int> s;
		for (auto e : nums)
		{
			if (s.count(e) != 0) //count: set��xԪ�صĸ���
				return e;
			else
				s.insert(e);
		}
		return -1;

	}
};
*/

































































