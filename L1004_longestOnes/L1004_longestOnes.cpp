//
// Created by garen-lee on 2025/6/22.
/**
  ******************************************************************************
  * @file           : L1004_longestOnes.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/22
  ******************************************************************************
  */
//

#include "L1004_longestOnes.h"

int L1004_longestOnes::longestOnes(vector<int>& nums, int k) {
    int left = 0, right = 0;
    int ans = 0;
    int n = nums.size();
    while (right < n) {
        if (nums[right] == 1) {
            right++;
        } else {
            if (k > 0) {
                k--;
                right ++;
            } else {
                while (nums[left] == 1 && left < right) {
                    left++;
                }
                if (nums[left] == 0) {
                    right++;
                    left++;
                } else {
                    right++;
                    left = right;
                }
            }
        }
        ans = max(ans, right - left);
    }
    return ans;
}

void L1004_longestOnes::test() {
    vector<int> nums = {1,1,1,0,0,0,1,1,1,1,0};
    int k = 2;
    int ans = longestOnes(nums, k);
    cout << ans << endl;
    nums = {0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    k = 3;
    ans = longestOnes(nums, k);
    cout << ans << endl;
}