//
// Created by garen-lee on 2025/4/6.
/**
  ******************************************************************************
  * @file           : L658_findClosetElement.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/6
  ******************************************************************************
  */
//

#include "L658_findClosetElement.h"

vector<int> L658_findClosetElement::findClosestElements(vector<int> &arr, int k, int x) {
    int right = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
    int left = right - 1;
    while (k--) {
        if (left < 0) {
            right++;
        } else if (right >= arr.size()) {
            left--;
        } else if (x - arr[left] <= arr[right] - x) {
            left--;
        } else {
            right++;
        }
    }
    return vector<int>(arr.begin() + left + 1, arr.begin() + right);
}

void L658_findClosetElement::test() {
    vector<int>arr = {1, 2, 3, 4, 5};
    int k = 4, x = 3;
    vector<int>result = findClosestElements(arr, k, x);
    print_list(create_list(result));
    arr = {1, 1, 2, 3, 4, 5};
    k = 4, x = -1;
    result = findClosestElements(arr, k, x);
    print_list(create_list(result));
}