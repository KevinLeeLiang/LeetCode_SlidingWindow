//
// Created by garen_lee on 2025/2/22.
/**
  ******************************************************************************
  * @file           : L209_minSubArrayLen.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/22
  ******************************************************************************
  */
//

#include "L209_minSubArrayLen.h"

int L209_minSubArrayLen::minSubArrayLen(int target, vector<int> &nums) {
    int l = 0, r = 0;
    int sum = 0;
    int ans = INT_MAX;
    while ( r < nums.size()) {
        sum += nums[r];
        while (sum >= target) {
            ans = min(ans, r - l + 1);
            sum -= nums[l];
            l++;
        }
        r++;
    }
     return ans == INT_MAX ? 0 : ans;
}


void L209_minSubArrayLen::test() {
    vector<int> nums = {2,3,1,2,4,3};
    int target = 7;
    cout << minSubArrayLen(target, nums) << endl;
    nums = {1,4,4};
    target = 4;
    cout << minSubArrayLen(target, nums) << endl;
    nums = {1,1,1,1,1,1,1,1};
    target = 11;
    cout << minSubArrayLen(target, nums) << endl;
}