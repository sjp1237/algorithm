#include<iostream>
#include<vector>

using namespace std;

/*
题目;
给定一个 n 个元素有序的（升序）整型数组 nums 和一个目标值 target  ，写一个函数搜索 nums 中的 target，如果目标值存在返回下标，否则返回 -1。
示例 1:

输入: nums = [-1,0,3,5,9,12], target = 9
输出: 4
解释: 9 出现在 nums 中并且下标为 4
*/



class Solution {
public:
    int search(vector<int>& nums, int target) {
        /*
        思路：
        二分查找：
        1.定义区间[left,right]
        2.如果mid指向的值等于target，返回
        3.如果mid指向的值大于target，缩短区间，[left,mid-1]
        4.如果mid指向的值小于于target，缩短区间，[mid+1,right]
        */
        int left=0,right=nums.size()-1;
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target)
            {
                right=mid-1;
            }
            else
            {
                left=mid+1;
            }
        }
    return -1;

    }
};