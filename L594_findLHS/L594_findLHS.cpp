//
// Created by garen-lee on 2025/3/29.
/**
  ******************************************************************************
  * @file           : L594_findLHS.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/29
  ******************************************************************************
  */
//

#include "L594_findLHS.h"

int L594_findLHS::findLHS(vector<int> &nums) {
    unordered_map<int, int> map;
    for (int num : nums) {
        map[num]++;
    }
    int maxLen = 0;
    for (auto it = map.begin(); it != map.end(); ++it) {
        int curLen = 0;
        if (map.find(it->first + 1) != map.end()) {
            curLen = map[it->first] + map[it->first + 1];
        }
        maxLen = max(maxLen, curLen);
    }
    return maxLen;
}

void L594_findLHS::test() {
    vector<int> nums = {1, 3, 2, 2, 5, 2, 3, 7};
    int result = findLHS(nums);
    cout << "result: " << result << endl;
    nums = {1, 2, 3, 4};
    result = findLHS(nums);
    cout << "result: " << result << endl;
    nums = {1, 1, 1, 1};
    result = findLHS(nums);
    cout << "result: " << result << endl;
}