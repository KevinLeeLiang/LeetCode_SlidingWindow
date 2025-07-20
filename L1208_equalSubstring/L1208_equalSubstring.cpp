//
// Created by garen-lee on 2025/7/20.
/**
  ******************************************************************************
  * @file           : L1208_equalSubstring.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/20
  ******************************************************************************
  */
//

#include "L1208_equalSubstring.h"

int L1208_equalSubstring::equalSubstring(string s, string t, int maxCost) {
    int n = s.size();
    vector<int> diff(n, 0);
    for (int i = 0; i < n; i++) {
        diff[i] = abs(s[i] - t[i]);
    }
    int maxLength = 0;
    int start = 0;
    int end = 0;
    int sum = 0;
    while (end < n) {
        sum += diff[end];
        while (sum > maxCost) {
            sum -= diff[start];
            start++;
        }
        maxLength = max(maxLength, end - start + 1);
        end++;
    }
    return maxLength;
}

void L1208_equalSubstring::test() {
    string s = "abcd";
    string t = "bcdf";
    int maxCost = 3;
    int ret = equalSubstring(s, t, maxCost);
    cout << ret << endl;
    s = "abcd";
    t = "cdef";
    maxCost = 3;
    ret = equalSubstring(s, t, maxCost);
    cout << ret << endl;
    s = "abcd";
    t = "acde";
    maxCost = 0;
    ret = equalSubstring(s, t, maxCost);
    cout << ret << endl;
}