//
// Created by garen_lee on 2025/2/22.
/**
  ******************************************************************************
  * @file           : L219_containsNearbyDuplicate.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/22
  ******************************************************************************
  */
//

#include "L219_containsNearbyDuplicate.h"
bool L219_containsNearbyDuplicate::containsNearbyDuplicate(vector<int> &nums, int k) {
    unordered_set<int> s;
    for (int i = 0; i < nums.size(); ++i) {
        if (i > k) {
            s.erase(nums[i - k - 1]);
        }
        if (s.count(nums[i])) {
            return true;
        }
        s.emplace(nums[i]);
    }
    return false;
}

void L219_containsNearbyDuplicate::test() {
    vector<int> nums = {1, 2, 3, 1};
    int k = 3;
    cout << containsNearbyDuplicate(nums, k) << endl;
    nums = {1, 0, 1, 1};
    k = 1;
    cout << containsNearbyDuplicate(nums, k) << endl;
    nums = {1, 2, 3, 1, 2, 3};
    k = 2;
    cout << containsNearbyDuplicate(nums, k) << endl;
    nums = {99,99};
    k = 2;
    cout << containsNearbyDuplicate(nums, k) << endl;
}