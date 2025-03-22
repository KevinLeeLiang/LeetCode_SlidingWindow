//
// Created by garen_lee on 2025/3/22.
/**
  ******************************************************************************
  * @file           : L480_medianSlidingWindow.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/22
  ******************************************************************************
  */
//

#include "L480_medianSlidingWindow.h"

vector<double> L480_medianSlidingWindow::medianSlidingWindow(vector<int> &nums, int k) {
    L480::DualHeap dh(k);
    for (int i = 0; i < k; ++i) {
        dh.insert(nums[i]);
    }
    vector<double> ans = {dh.getMedian()};
    for (int i = k; i < nums.size(); ++i) {
        dh.insert(nums[i]);
        dh.erase(nums[i - k]);
        ans.push_back(dh.getMedian());
    }
    return ans;
}

void L480_medianSlidingWindow::test() {
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    vector<double> result = medianSlidingWindow(nums, k);
    print_vector(result);
}