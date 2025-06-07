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
    vector<int> res;
    deque<int> q;
    for (int i = 0; i < nums.size(); i++) {
        while (!q.empty() && q.front() < i - k + 1) {
            q.pop_front();
        }
        while (!q.empty() && nums[q.back()] < nums[i]) {
            q.pop_back();
        }
        q.push_back(i);
        if (i >= k - 1) {
            res.push_back(nums[q.front()]);
        }
    }
    return res;
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