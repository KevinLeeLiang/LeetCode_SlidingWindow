//
// Created by garen-lee on 2025/3/1.
/**
  ******************************************************************************
  * @file           : L239_maxSlidingWindow.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/1
  ******************************************************************************
  */
//

#include "L239_maxSlidingWindow.h"

vector<int> L239_maxSlidingWindow::maxSlidingWindow(vector<int> &nums, int k) {
    int n = nums.size();
    priority_queue<pair<int, int>> q;
    for (int i = 0; i < k; ++i) {
        q.emplace(nums[i], i);
    }
    vector<int> ans = {q.top().first};
    for (int i = k; i < n; ++i) {
        q.emplace(nums[i], i);
        while (q.top().second <= i - k) {
            q.pop();
        }
        ans.push_back(q.top().first);
    }
    return ans;
}

void L239_maxSlidingWindow::test() {
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    vector<int> res = maxSlidingWindow(nums, k);
    print_vector(res);
    nums = {1};
    k = 1;
    res = maxSlidingWindow(nums, k);
    print_vector(res);
    nums = {1, 3, -1, -3, -2, 3, 6, 7};
    k = 3;
    res = maxSlidingWindow(nums, k);
    print_vector(res);
}