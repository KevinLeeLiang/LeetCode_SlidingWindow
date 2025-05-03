//
// Created by garen-lee on 2025/5/3.
/**
  ******************************************************************************
  * @file           : L930_numSubarraysWithSum.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/3
  ******************************************************************************
  */
//

#include "L930_numSubarraysWithSum.h"

int L930_numSubarraysWithSum::numSubarraysWithSum(vector<int> &nums, int goal) {
    int n = nums.size();
    int left1 = 0;
    int left2 = 0;
    int right = 0;
    int sum1 = 0, sum2 = 0;
    int res = 0;
    while (right < n) {
        sum1 += nums[right];
        while (left1 <= right && sum1 > goal) {
            sum1 -= nums[left1];
            left1++;
        }
        sum2 += nums[right];
        while (left2 <= right && sum2 >= goal) {
            sum2 -= nums[left2];
            left2++;
        }
        res += left2 - left1;
        right++;
    }
    return res;
}


void L930_numSubarraysWithSum::test() {
    vector<int> nums = {1, 0, 1, 0, 1};
    int goal = 2;
    cout << numSubarraysWithSum(nums, goal) << endl;
    nums = {0, 0, 0, 0, 0};
    goal = 0;
    cout << numSubarraysWithSum(nums, goal) << endl;
}