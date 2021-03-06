/*735. Replace With Greatest From Right

给一整数数组, 用当前元素之后数组中的最大元素来替换当前元素(右侧的最大元素). 因为最后一个元素的右边没有元素了, 所以用 -1 来替换这个值. 举个例子, 如果数组为 [16,17,4,3,5,2], 那么它就需要修改为 [17,5,5,5,2,-1].
您在真实的面试中是否遇到过这个题？
样例

给出数组 nums = [16,17,4,3,5,2], 改变数组为 [17,5,5,5,2,-1], 你需要在原地实现。

*/

#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

	int max(vector<int> nums, int k)
	{
		int len = nums.size();
		int pos = k;
		for (int i = k + 1; i < len; i++)
		{
			if (nums[pos] < nums[i])
				pos = i;
		}
		return nums[pos];
	}
	/**
	 * @param nums: An array of integers.
	 * @return: nothing
	 */
	void arrayReplaceWithGreatestFromRight(vector<int> &nums) {
		int len = nums.size();

		for (int i = 0; i < len - 1; i++) {

			nums[i] = max(nums, i + 1);
		}
		nums[len - 1] = -1;
	}
};

int main()
{
    std::cout << "Different type of the Recursion. \n"; 
}

