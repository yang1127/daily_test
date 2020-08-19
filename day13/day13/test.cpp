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
//class Solution {
//public:
//	TreeNode* reConstructBinaryTreeCore(vector<int> pre, int preStart, int preEnd, vector<int>
//		vin, int vinStart, int vinEnd) {
//		if (preStart > preEnd || vinStart > vinEnd) 
//				return nullptr;
//		
//		TreeNode *root = new TreeNode(pre[preStart]);
//		for (auto i = vinStart; i <= vinEnd; i++) //在中序序列中，找根节点，可以将数组划分为两部分
//		{
//			if (pre[preStart] == vin[i]) 
//			{
//				//前序的第一个节点，是root，能将中序划分为两部分
//				//一棵树，无论前，中，后怎么遍历，元素的个数是不变的
//				//在实际遍历的时候，前，中，后序遍历，各种遍历方式左右子树的节点都是在一起的
//				//所以这里重点是要想清楚下标问题
//				//根据中序，我们能确认左子树的节点个数是：i - vinStart (没有从0开始哦)
//				//所以，需要从preStart+1，连续i - vinStart个元素，就是左子树的前序序列
//				root->left = reConstructBinaryTreeCore(pre, preStart + 1, i - vinStart + preStart, vin, vinStart, i - 1);
//				root->right = reConstructBinaryTreeCore(pre, i - vinStart + preStart + 1, preEnd, vin, i + 1, vinEnd);
//				break;
//			}
//		}
//		return root;
//	}
//
//	TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin) 
//	{
//		if (pre.empty() || vin.empty()) 
//			return nullptr;
//		
//		return reConstructBinaryTreeCore(pre, 0, pre.size() - 1, vin, 0, vin.size() - 1);
//	}
//};/*//3元组class Solution {
public:
	vector<vector<int>> threeSum(vector<int>& nums) {
		vector<vector<int>> v; //存放满足三元组的集合
		sort(nums.begin(), nums.end()); //排序
		for (int i = 0; i < nums.size(); i++)
		{
			// a + b + c = 0
			//a = nums[i], b = nums[left], c = nums[right]
			int left = i + 1;
			int right = nums.size() - 1;

			if (nums[i] > 0) //已经从小到大排好序了，若第一个数大于0则无法满足
				return v;

			if (i > 0 && nums[i] == nums[i - 1]) //去重a：将指针置为最后一个重复的数
				continue;

			while (right > left)
			{
				if (nums[i] + nums[left] + nums[right] > 0) //大于right--
					right--;
				else if (nums[i] + nums[left] + nums[right] < 0) //小于left++
					left++;
				else
				{
					v.push_back(vector<int> {nums[i], nums[left], nums[right]});

					//去重b、c, 防止除去0、0、0这种情况
					while (right > left && nums[left] == nums[left + 1])
						left++;
					while (right > left && nums[right - 1] == nums[right])
						right--;

					left++;
					right--;
				}
			}
		}
		return v;
	}
};*//*//删除排序数组中的重复项class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		if (nums.size() == 0)
			return 0;

		//双指针
		int i = 0;
		for (int j = 1; j < nums.size(); j++)
		{
			if (nums[j] != nums[i])
			{
				i++; //先加再赋值，否则i指向下一个位置，不是现在比较的数
				nums[i] = nums[j];
			}
		}
		return i + 1; // 包括开始的值个数
	}
};*//*//杨辉三角class Solution {
public:
public:
	vector<vector<int>> generate(int numRows) {
		vector<vector<int> > v(numRows);
		for (int i = 0; i < numRows; i++) //边置为1
		{
			v[i] = vector<int>(i + 1, 0); //先初始化为0
			v[i][0] = 1;
			v[i][i] = 1;
		}

		if (numRows <= 2)
			return v;

		for (int i = 2; i < numRows; i++)
		{
			for (int j = 1; j < v[i].size() - 1; j++) //首、尾已经置为1
			{
				v[i][j] = v[i - 1][j - 1] + v[i - 1][j];
			}
		}
		return v;
	}
};*//*
状态：
 F(i, j): 前i个物品放入大小为j的背包中所获得的最大价值
 状态递推：对于第i个商品，有一种例外，装不下，两种选择，放或者不放
 如果装不下：此时的价值与前i-1个的价值是一样的
 F(i,j) = F(i-1,j)
 如果可以装入：需要在两种选择中找最大的
 F(i, j) = max{F(i-1,j), F(i-1, j - A[i]) + V[i]}
 F(i-1,j): 表示不把第i个物品放入背包中， 所以它的价值就是前i-1个物品放入大小为j的背包的最大价值
 F(i-1, j - A[i]) + V[i]：表示把第i个物品放入背包中，价值增加V[i],但是需要腾出j - A[i]的大小放
 第i个商品
 初始化：第0行和第0列都为0，表示没有装物品时的价值都为0
 F(0,j) = F(i,0) = 0
 返回值：F(n,m)
*/

/*
class Solution {
public:
	int backPackII(int m, vector<int> A, vector<int> V) {
		if (A.empty() || V.empty() || m < 1) {
			return 0;
		}
		//多加一行一列，用于设置初始条件
		const int N = A.size() + 1;
		const int M = m + 1;
		vector<vector<int> > result;
		result.resize(N);

		//初始化所有位置为0，第一行和第一列都为0，初始条件
		for (int i = 0; i != N; ++i) {
			result[i].resize(M, 0);
		}

		for (int i = 1; i < N; ++i) {
			for (int j = 1; j != M; ++j) {
				//第i个商品在A中对应的索引为i-1: i从1开始
				//如果第i个商品大于j,说明放不下， 所以(i,j)的最大价值和(i-1,j)相同
				if (A[i - 1] > j) {
					result[i][j] = result[i - 1][j];
				}
				//如果可以装下，分两种情况，装或者不装
				//如果不装，则即为(i-1, j)
				//如果装，需要腾出放第i个物品大小的空间： j - A[i-1],装入之后的最大价值即为(i - 1,
				//j - A[i - 1]) + 第i个商品的价值V[i - 1]
				//最后在装与不装中选出最大的价值
				else {
					int newValue = result[i - 1][j - A[i - 1]] + V[i - 1];
					result[i][j] = max(newValue, result[i - 1][j]);
				}
			}
		}
		//返回装入前N个商品，物品大小为m的最大价值
		return result[N - 1][m];
	}
};*/
//《程序员的自我修养》
#include <stdio.h>  
#include <stdlib.h>  

int count = 0;
void *p = NULL;

int main(int argc, char *argv[])
{
	int blocksize[4] = { 1024 * 1024 * 1024, 1024 * 1024, 1024, 1 };
	int i, j;
	for (i = 0; i < 4; ++i)
	{
		for (j = 1; ; ++j)
		{
			if (NULL == (p = malloc(count + blocksize[i])))
			{
				printf("%d\n", j); break;
			}
			count += blocksize[i];
			free(p);
		}
	}
	printf("mallocmaxmemory:%d\n", count);
	return 0;
}