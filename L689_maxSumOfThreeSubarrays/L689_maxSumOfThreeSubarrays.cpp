//
// Created by garen_lee on 2025/4/12.
/**
  ******************************************************************************
  * @file           : L689_maxSumOfThreeSubarrays.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/12
  ******************************************************************************
  */
//

#include "L689_maxSumOfThreeSubarrays.h"

vector<int> L689_maxSumOfThreeSubarrays::maxSumOfThreeSubarrays(vector<int> &nums, int k) {
    vector<int> ans;
    int sum1 = 0, maxSum1 = 0, maxSum1Idx = 0;
    int sum2 = 0, maxSum12 = 0, maxSum12Idx1 = 0, maxSum12Idx2 = 0;
    int sum3 = 0, maxTotal = 0;
    for (int i = k * 2; i < nums.size(); ++i) {
        sum1 += nums[i - k * 2];
        sum2 += nums[i - k];
        sum3 += nums[i];
        if (i >= k * 3 - 1) {
            if (sum1 > maxSum1) {
                maxSum1 = sum1;
                maxSum1Idx = i - k * 3 + 1;
            }
            if (maxSum1 + sum2 > maxSum12) {
                maxSum12 = maxSum1 + sum2;
                maxSum12Idx1 = maxSum1Idx;
                maxSum12Idx2 = i - k * 2 + 1;
            }
            if (maxSum12 + sum3 > maxTotal) {
                maxTotal = maxSum12 + sum3;
                ans = {maxSum12Idx1, maxSum12Idx2, i - k + 1};
            }
            sum1 -= nums[i - k * 3 + 1];
            sum2 -= nums[i - k * 2 + 1];
            sum3 -= nums[i - k + 1];
        }
    }
    return ans;
}

void L689_maxSumOfThreeSubarrays::test() {
    vector<int> nums = {1, 2, 1, 2, 6, 7, 5, 1};
    int k = 2;
    vector<int> result = maxSumOfThreeSubarrays(nums, k);
    print_vector(result);
    nums = {1, 2, 1, 2, 1, 2, 1, 2, 1};
    k = 2;
    result = maxSumOfThreeSubarrays(nums, k);
    print_vector(result);
}