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

/*
//两个链表的第一个公共节点
class Solution {
public:
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
		if (headA == NULL || headB == NULL)
			return NULL;

		//思路：求出两个链表长度，长链表先走两链表差值，两个链表再同时遍历，有相等值终止，即为第一个公共节点
		ListNode* curA = headA;
		ListNode* curB = headB;
		int lengthA = 0, lengthB = 0; //链表长度
		while (curA)
		{
			curA = curA->next;
			lengthA++;
		}
		while (curB)
		{
			curB = curB->next;
			lengthB++;
		}

		int gap = abs(lengthA - lengthB); //求两个链表差值
		ListNode* Long = headA;
		ListNode* Short = headB;
		if (lengthA < lengthB) //让长链表为最长的链表
		{
			Long = headB;
			Short = headA;
		}
		while (gap--) //长链表先走差值
		{
			Long = Long->next;
		}
		while (Long != Short)
		{
			Long = Long->next;
			Short = Short->next;
		}
		return Long;
	}
};
*/

/*
//只出现一次的字符
class Solution {
public:
	char firstUniqChar(string s) {
		unordered_map<char, int> m;
		for (auto e : s)
		{
			m[e]++;
		}

		for (auto e : s)
		{
			if (m[e] == 1)
				return e;
		}
		return ' ';

	}
};
*/
/*
//两数和
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> v; //存放输出数据
		int start = 0;
		int end = nums.size() - 1;
		for (int i = 0; i < nums.size(); i++)
		{
			//思路：首尾指针法，递增数组，若和大于target,则尾指针向前移动；若和小于target，则首指针向后移动，相等返回
			int num = nums[start] + nums[end];
			if (num == target)
			{
				v.push_back(nums[start]);
				v.push_back(nums[end]);
				return v;
			}
			else if (num > target)
			{
				--end;
			}
			else
			{
				++start;
			}
		}
		return v;
	}
};
*/

/*
//连续和
class Solution {
public:
	vector<vector<int>> findContinuousSequence(int target) {

		//滑动窗口：
		//里要有一个区间的概念，这里的区间是(1, 2, 3, ..., target / 2) 
		//target / 2：少含有两个数，例如15，15/2为7，即最后一组左边界为7，排除只为15的值
		//滑动窗口模板，i是窗口左边界，j是窗口右边界，窗口中的值一定是连续值
		//当窗口中数字和小于target时，j右移; 大于target时，i右移; 等于target时为一组解
		vector<vector<int>> v; //存放最后数据
		int i = 1;
		int j = 1;
		int sum = 0;
		while (i <= target / 2)
		{
			if (sum < target) //右窗口向右移动
			{
				sum += j;
				j++;
			}
			else if (sum > target) //左窗口向右移动
			{
				sum -= i;
				i++;
			}
			else
			{
				vector<int> tmp;
				for (int k = i; k < j; k++)
					tmp.push_back(k);

				v.push_back(tmp);

				sum -= i; //重新再设置下一次窗口
				i++;
			}
		}
		return v;
	}
};
*/

/*
class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		//动态规划
		int dp(nums[0]); //初始状态
		int num = dp;
		for (int i = 1; i < nums.size(); i++)
		{
			dp = max(dp + nums[i], nums[i]); //状态转移方程
			num = max(dp, num);
		}

		return num;
	}
};

class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		int num = nums[0];
		int sum = 0;
		for (int i = 0; i < nums.size(); i++)
		{
			if (sum < 0) //比较之前和与当前值大小
				sum = nums[i];
			else
				sum += nums[i];

			if (sum > num)
				num = sum;
		}
		return num;
	}
};
*/


/*
//约瑟夫环
class Solution {
public:
	int lastRemaining(int n, int m) {
		//约瑟夫环
		//递推公式：f(N,M)=(f(N−1,M)+M)%n
		int p = 0;
		for (int i = 2; i <= n; i++)
		{
			p = (p + m) % i;
		}
		return p;
	}
};
*/

































































