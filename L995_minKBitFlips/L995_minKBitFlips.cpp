//
// Created by garen_lee on 2025/5/10.
/**
  ******************************************************************************
  * @file           : L995_minKBitFlips.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/10
  ******************************************************************************
  */
//

#include "L995_minKBitFlips.h"

int L995_minKBitFlips::minKBitFlips(vector<int> &nums, int k) {
    int n = nums.size();
    int ans = 0;
    int revCnt = 0;
    for (int i = 0; i < n; ++i) {
        if (i >= k && nums[i - k] > 1) {
            revCnt ^= 1;
            nums[i - k] -= 2;
        }
        if (nums[i] == revCnt) {
            if (i + k > n) {
                return -1;
            }
            ++ans;
            revCnt ^= 1;
            nums[i] += 2;
        }
    }
    return ans;
}

void L995_minKBitFlips::test() {
    vector<int> A = {0,1,0};
    int k = 1;
    int res = minKBitFlips(A, k);
    cout << res << endl;
    A = {1,1,0};
    k = 2;
    res = minKBitFlips(A, k);
    cout << res << endl;
    A = {0,0,0,1,0,1,1,0};
    k = 3;
    res = minKBitFlips(A, k);
    cout << res << endl;
}