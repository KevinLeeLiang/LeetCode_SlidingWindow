//
// Created by garen-lee on 2025/5/3.
/**
  ******************************************************************************
  * @file           : L978_maxTurbulenceSize.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/3
  ******************************************************************************
  */
//

#include "L978_maxTurbulenceSize.h"

int L978_maxTurbulenceSize::maxTurbulenceSize(vector<int> &arr) {
    int n = arr.size();
    int ret = 1;
    int left = 0, right = 0;

    while (right < n - 1) {
        if (left == right) {
            if (arr[left] == arr[left + 1]) {
                left++;
            }
            right++;
        } else {
            if (arr[right - 1] < arr[right] && arr[right] > arr[right + 1]) {
                right++;
            } else if (arr[right - 1] > arr[right] && arr[right] < arr[right + 1]) {
                right++;
            } else {
                left = right;
            }
        }
        ret = max(ret, right - left + 1);
    }
    return ret;
}

void L978_maxTurbulenceSize::test() {
    vector<int>arr = {9, 4, 2, 10, 7, 8, 8, 1, 9};
    cout << maxTurbulenceSize(arr) << endl;
    arr = {4, 8, 12, 16};
    cout << maxTurbulenceSize(arr) << endl;
    arr = {100};
    cout << maxTurbulenceSize(arr) << endl;
}