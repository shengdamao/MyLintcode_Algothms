/* Binary_Search.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//描述

给定一个排序的整数数组（升序）和一个要查找的整数target，用O(logn)的时间查找到target第一次出现的下标（从0开始），如果target不存在于数组中，返回 - 1。
您在真实的面试中是否遇到过这个题？
样例

在数组[1, 2, 3, 3, 4, 5, 10] 中二分查找3，返回2。
挑战

如果数组中的整数个数超过了2 ^ 32，你的算法是否会出错？*/



#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int binarySearch(vector<int> &nums, int target) {
	int R = nums.size();
	int L = 0;
	int mid;

	while (L < R) {
		if (nums[L] == target)
			return L;
		if (nums[R] == target)
			return R;

		mid = (L + R) / 2;
		if (nums[mid] == target)
		{
			while (nums[mid - 1] == target)
				mid--;
			return mid;
		}
		else if (nums[mid] < target)
			L = mid + 1;
		else if (nums[mid] > target)
			R = mid - 1;
	}

	return -1;

}


int main()
{
    std::cout << "Hello World!\n"; 
}
