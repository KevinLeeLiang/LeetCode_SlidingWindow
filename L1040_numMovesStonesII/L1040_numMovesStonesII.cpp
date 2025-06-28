//
// Created by garen-lee on 2025/6/28.
/**
  ******************************************************************************
  * @file           : L1040_numMovesStonesII.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/28
  ******************************************************************************
  */
//

#include "L1040_numMovesStonesII.h"

vector<int> L1040_numMovesStonesII::numMovesStonesII(vector<int> &stones) {
    int n = stones.size();
    sort(stones.begin(), stones.end());
    if (stones.back() - stones[0] == n - 1) {
        return {0, 0};
    }
    int ma = max(stones[n - 2] - stones[0] + 1, stones[n - 1] - stones[1] + 1) - (n - 1);
    int mi = n;
    for (int i = 0, j = 0; i < n && j + 1 < n; i++) {
        while (j + 1 < n && stones[j + 1] - stones[i] + 1 <= n) {
            j++;
        }
        if (j - i + 1 == n - 1 && stones[j] - stones[i] + 1 == n - 1) {
            mi = min(mi, 2);
        } else {
            mi = min(mi, n - (j - i + 1));
        }
    }
    return {mi, ma};
}

void L1040_numMovesStonesII::test() {
    vector<int> stones = {7, 4, 9};
    vector<int> res = numMovesStonesII(stones);
    print_vector(res);
    stones = {6,5,4,3,10};
    res = numMovesStonesII(stones);
    print_vector(res);
}