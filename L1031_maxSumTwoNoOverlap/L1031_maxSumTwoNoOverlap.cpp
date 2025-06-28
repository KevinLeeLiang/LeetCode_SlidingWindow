//
// Created by garen-lee on 2025/6/28.
/**
  ******************************************************************************
  * @file           : L1031_maxSumTwoNoOverlap.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/28
  ******************************************************************************
  */
//

#include "L1031_maxSumTwoNoOverlap.h"

int L1031_maxSumTwoNoOverlap::helper(vector<int>& nums, int firstLen, int secondLen) {
    int suml = accumulate(nums.begin(), nums.begin() + firstLen, 0);
    int maxSumL = suml;
    int sumr = accumulate(nums.begin() + firstLen, nums.begin() + firstLen + secondLen, 0);
    int res = maxSumL + sumr;
    for (int i = firstLen + secondLen, j = firstLen; i < nums.size(); ++i, ++j) {
        suml += nums[j] - nums[j - firstLen];
        maxSumL = max(maxSumL, suml);
        sumr += nums[i] - nums[i - secondLen];
        res = max(res, maxSumL + sumr);
    }
    return res;
}

int L1031_maxSumTwoNoOverlap::maxSumTwoNoOverlap(vector<int>& nums, int firstLen, int secondLen) {
    return max(helper(nums, firstLen, secondLen), helper(nums, secondLen, firstLen));
}

void L1031_maxSumTwoNoOverlap::test() {
    vector<int> nums = {0,6,5,2,2,5,1,9,4};
    cout << maxSumTwoNoOverlap(nums, 1, 2) << endl;
    nums = {3,8,1,3,2,1,8,9,0};
    cout << maxSumTwoNoOverlap(nums, 3, 2) << endl;
    nums = {2,1,5,6,0,9,5,0,3,8};
    cout << maxSumTwoNoOverlap(nums, 4, 3) << endl;
}