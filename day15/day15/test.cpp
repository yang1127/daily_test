/*
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
*/

/*
//链表逆序返回数组
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

//逆序数组
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
//反转链表
class Solution {
public:
	ListNode* reverseList(ListNode* head) {
		//头插
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
//二叉搜索树的第k大节点
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
		//求 “二叉搜索树第 k 大的节点” 可转化为求 “此树的中序遍历倒序的第 k 个节点
		Middle(root);

		return v[v.size() - k];
	}
};
*/

//计算二进制1的个数
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
//公共祖先
class Solution {
public:
	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
		if (root == NULL)
			return NULL;

		if (root == p || root == q)
			return root;

		TreeNode* left = lowestCommonAncestor(root->left, p, q);
		TreeNode* right = lowestCommonAncestor(root->right, p, q);
		//p在左数、q在右树
		if (left != NULL && right != NULL)
			return root;

		//p q在左树
		if (left != NULL)
			return left;

		//p q在右树
		if (right != NULL)
			return right;

		return NULL;
	}
};
*/

/*
//任意输出一个重复数
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
			if (s.count(e) != 0) //count: set中x元素的个数
				return e;
			else
				s.insert(e);
		}
		return -1;

	}
};
*/

































































