//#include<iostream>
//#include<string>
//
//using namespace std;
//
//int main()
//{
//	string a, b; 
//	while (cin >> a >> b) //输入两个字符串
//	{
//		if (a.length() > b.length())
//			swap(a, b); //题目要求输出短串中，最先出现的那个，即使第一个串为短串
//
//		string c; //两个串中最长公共子串
//		for (int i = 0; i < a.length(); i++)
//		{
//			for (int j = i; j < a.length(); j++)
//			{                                         //从i所指的字符处，j - i + 1的长度
//				string tmp = a.substr(i, j - i + 1);  //substr(start,length) 包含从start（包括start所指的字符）处开始的length个字符
//													  //如果没有指定length，那么返回的字符串包含从start到结尾的字符 
//				int d = b.find(tmp); //在长串中找短串中的子串
//				if (d < 0)  ///若没有找到，则跳出
//					break;
//
//				else if(c.length() < tmp.length()) //在找到的公共子串中取最大的子串
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

//奇数位位于偶数位前
//class Solution {
//public:
//	vector<int> exchange(vector<int>& nums) {
//		int left = 0;
//		int right = nums.size() - 1;
//		while (left < right)
//		{
//			while (left < right && (nums[left] & 1))  // (nums[left] & 1)当前位为奇数位
//				left++;
//
//			while (left < right && !(nums[right] & 1))  // (nums[left] & 1)当前位为偶数位
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
//		int k = 0; //存放移动后的奇数位
//		for (int i = 0; i < array.size(); i++)
//		{
//			if (array[i] & 1) //前面的奇数位，后面要放到k的下标处
//			{
//				int tmp = array[i]; //保存该数
//				int j = i;
//				while (j > k) //将该奇数之前的内容(偶数序列)，整体后移一个位置
//				{
//					array[j] = array[j - 1]; //后移
//					j--;
//				}
//				array[k++] = tmp; //将奇数保存在它将来改在的位置，因为我们是从左往右放的，没有跨越奇数，所以一定是相对位置不变的
//			}
//		}
//
//	}
//};

//数组超过一半
//class Solution {
//public:
//	int MoreThanHalfNum_Solution(vector<int> numbers) {
//
//		if (numbers.empty())
//			return 0;
//
//		sort(numbers.begin(), numbers.end()); //从小到大排序
//		int mid = numbers[numbers.size() / 2]; //题目有个数字出现次数超过数组一半，即这个数一定在中间位置
//		int count = 0;
//		for (int i = 0; i < numbers.size(); i++)
//		{
//			if (numbers[i] == mid)
//				count++;
//		}
//
//		//若大于一半则返回中间数，否则返回0
//		return (count > numbers.size() / 2) ? mid : 0;
//	}
//};

//优化
//class Solution {
//public:
//	int MoreThanHalfNum_Solution(vector<int> numbers) {
//		if (numbers.size() == 0)
//			return 0;
//
//		int number = numbers[0]; //开始置为第一个数
//		int times = 1; //次数置为1
//		for (int i = 1; i < numbers.size(); i++)
//		{
//			if (times == 0) //times--会到0， 将此时的值重新赋予number，times置为1，再开找不同的两个数
//			{
//				number = numbers[i];
//				times = 1;
//			}
//
//			if (numbers[i] == number) //相等次数++
//				times++;
//			else
//				times--; //不等次数--
//		}
//
//		//如果输入本身满足条件，则times一定>0, 并且number保存的就是准目标，但是还需要确认
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

//空格替换

//class Solution {
//public:
//	void replaceSpace(char *str, int length) {
//		int count = 0; //统计空格数
//		char *start = str; //首元素
//		while (*start)
//		{
//			if (isspace(*start)) //isspace() 判断是否为空格
//				count++;
//			start++;
//		}
//
//		char *old_index = str + length; //C++字符串要考虑'\0'
//		char *new_index = str + length + 2 * count;
//		while (old_index >= str && new_index >= str) //新、旧下标大于等于首元素下标
//		{
//			if (!isspace(*old_index)) //不为空格，均往前移动
//			{
//				*new_index = *old_index;
//				old_index--; //下标移动
//				new_index--;
//			}
//			else //为空格，替换%20
//			{
//				*new_index-- = '0';
//				*new_index-- = '2';
//				*new_index-- = '%';
//				old_index--;
//			}
//		}
//	}
//};//逆向输出链表//class Solution {
//public:
//	vector<int> printListFromTailToHead(ListNode* head) {
//		//stack
//		stack<int> s; //将链表置入到栈中
//		vector<int> v; //保存反序输出的链表
//
//		while (head)
//			s.push(head->val); //置入栈中
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
		for (auto i = vinStart; i <= vinEnd; i++) //在中序序列中，找根节点，可以将数组划分为两部分
		{
			if (pre[preStart] == vin[i]) 
			{
				//前序的第一个节点，是root，能将中序划分为两部分
				//一棵树，无论前，中，后怎么遍历，元素的个数是不变的
				//在实际遍历的时候，前，中，后序遍历，各种遍历方式左右子树的节点都是在一起的
				//所以这里重点是要想清楚下标问题
				//根据中序，我们能确认左子树的节点个数是：i - vinStart (没有从0开始哦)
				//所以，需要从preStart+1，连续i - vinStart个元素，就是左子树的前序序列
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