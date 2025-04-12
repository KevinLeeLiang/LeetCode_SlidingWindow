//
// Created by garen_lee on 2025/4/12.
/**
  ******************************************************************************
  * @file           : L713_numSubarrayProductLessThrank.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/12
  ******************************************************************************
  */
//

#include "L713_numSubarrayProductLessThanK.h"

int L713_numSubarrayProductLessThanK::numSubarrayProductLessThanK(vector<int> &nums, int k) {
    int n = nums.size();
    int res = 0;
    int prod = 1;
    int i = 0;
    for (int j = 0; j < n; ++j) {
        prod *= nums[j];
        while (i <= j && prod >= k) {
            prod /= nums[i++];
        }
        res += j - i + 1;
    }
    return res;
}

void L713_numSubarrayProductLessThanK::test() {
    vector<int> nums = {10, 5, 2, 6};
    int k = 100;
    int res = numSubarrayProductLessThanK(nums, k);
    cout << "res: " << res << endl;
    nums = {1, 2, 3};
    k = 0;
    res = numSubarrayProductLessThanK(nums, k);
    cout << "res: " << res << endl;
}