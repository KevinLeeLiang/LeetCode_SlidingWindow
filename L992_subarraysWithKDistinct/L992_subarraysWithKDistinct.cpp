//
// Created by garen_lee on 2025/5/10.
/**
  ******************************************************************************
  * @file           : L992_subarraysWithKDistinct.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/10
  ******************************************************************************
  */
//

#include "L992_subarraysWithKDistinct.h"

int L992_subarraysWithKDistinct::getMostDistinct(vector<int> &nums, int k) {
    unordered_map<int, int> map;
    int left = 0, right = 0, res = 0;
    while (right < nums.size()) {
        map[nums[right]]++;
        while (map.size() > k) {
            map[nums[left]]--;
            if (map[nums[left]] == 0) {
                map.erase(nums[left]);
            }
            left++;
        }
        res += right - left + 1;
        right++;
    }
    return res;
}

int L992_subarraysWithKDistinct::subarraysWithKDistinct(vector<int> &nums, int k) {
    return getMostDistinct(nums, k) - getMostDistinct(nums, k - 1);
}

void L992_subarraysWithKDistinct::test() {
    vector<int> nums = {1,2,1,2,3};
    int k = 2;
    cout << subarraysWithKDistinct(nums, k) << endl;

    nums = {1,2,1,3,4};
    k = 3;
    cout << subarraysWithKDistinct(nums, k) << endl;
}