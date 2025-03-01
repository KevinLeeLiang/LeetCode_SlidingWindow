//
// Created by garen-lee on 2025/3/1.
/**
  ******************************************************************************
  * @file           : L220_containsNearbyAlmostDuplicate.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/1
  ******************************************************************************
  */
//

#include "L220_containsNearbyAlmostDuplicate.h"

bool L220_containsNearbyAlmostDuplicate::containsNearbyAlmostDuplicate(vector<int> &nums, int indexDiff, int valueDiff) {
    int n = nums.size();
    set<int>rec;
    for (int i = 0; i < n; ++i) {
        auto iter = rec.lower_bound(max(nums[i], INT_MIN + valueDiff) - valueDiff);
        if (iter != rec.end() && *iter <= min(nums[i], INT_MAX - valueDiff) + valueDiff) {
            return true;
        }
        rec.insert(nums[i]);
        if (i >= indexDiff) {
            rec.erase(nums[i - indexDiff]);
        }
    }
    return false;
}

void L220_containsNearbyAlmostDuplicate::test() {
    vector<int> nums = {1, 2, 3, 1};
    int indexDiff = 3;
    int valueDiff = 0;
    cout << containsNearbyAlmostDuplicate(nums, indexDiff, valueDiff) << endl;
    nums = {1,5,9,1,5,9}, indexDiff = 2, valueDiff = 3;
    cout << containsNearbyAlmostDuplicate(nums, indexDiff, valueDiff) << endl;
}