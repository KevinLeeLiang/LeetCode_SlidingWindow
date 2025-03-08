//
// Created by garen_lee on 2025/3/8.
/**
  ******************************************************************************
  * @file           : L413_numberOfArithmeticSlices.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/8
  ******************************************************************************
  */
//

#include "L413_numberOfArithmeticSlices.h"

int L413_numberOfArithmeticSlices::numberOfArithmeticSlices(vector<int> &nums) {
    int n = nums.size();
    if (n < 3) {
        return 0;
    }
    int res = 0;
    vector<int> dp(n, 0);
    for (int i = 2; i < n; i++) {
        if (nums[i] - nums[i - 1] == nums[i - 1] - nums[i - 2]) {
            dp[i] = dp[i - 1] + 1;
        }
    }
    for (int i = 0; i < n; i++) {
        res += dp[i];
    }
    return res;
}

void L413_numberOfArithmeticSlices::test() {
    vector<int> nums = {1, 2, 3, 4};
    cout << numberOfArithmeticSlices(nums) << endl;
    nums = {1};
    cout << numberOfArithmeticSlices(nums) << endl;
}