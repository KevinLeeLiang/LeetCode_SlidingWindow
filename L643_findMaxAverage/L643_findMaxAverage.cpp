//
// Created by garen-lee on 2025/4/6.
/**
  ******************************************************************************
  * @file           : L643_findMaxAverage.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/6
  ******************************************************************************
  */
//

#include "L643_findMaxAverage.h"

double L643_findMaxAverage::findMaxAverage(vector<int>& nums, int k) {
    double max_sum = 0;
    for (int i = 0; i < k; i++) {
        max_sum += nums[i];
    }
    double sum = max_sum;
    for (int i = k; i < nums.size(); i++) {
        sum += nums[i] - nums[i - k];
        max_sum = max(max_sum, sum);
    }
    return max_sum / k;
}

void L643_findMaxAverage::test(){
    vector<int> nums = {1,12,-5,-6,50,3};
    int k = 4;
    double res = findMaxAverage(nums, k);
    cout << res << endl;
    nums = {5};
    k = 1;
    res = findMaxAverage(nums, k);
    cout << res << endl;
    nums = {0,4,0,3,2};
    k = 1;
    res = findMaxAverage(nums, k);
    cout << res << endl;
}