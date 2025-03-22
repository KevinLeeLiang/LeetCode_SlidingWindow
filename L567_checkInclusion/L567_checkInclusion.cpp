//
// Created by garen_lee on 2025/3/22.
/**
  ******************************************************************************
  * @file           : L567_checkInclusion.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/22
  ******************************************************************************
  */
//

#include "L567_checkInclusion.h"

bool L567_checkInclusion::checkInclusion(string s1, string s2) {
    int n = s1.size();
    int m = s2.size();
    if (m < n) {
        return false;
    }
    vector<int> cnt1(26, 0);
    vector<int> cnt2(26, 0);
    for (int i = 0; i < n; i++) {
        cnt1[s1[i] - 'a']++;
        cnt2[s2[i] - 'a']++;
    }
    if (cnt1 == cnt2) {
        return true;
    }
    for (int i = n; i < m; i++) {
        if (cnt1 == cnt2) {
            return true;
        }
        cnt2[s2[i] - 'a']++;
        cnt2[s2[i - n] - 'a']--;
    }
    return false;
}

void L567_checkInclusion::test() {
    string s1 = "ab";
    string s2 = "eidbaooo";
    cout << checkInclusion(s1, s2) << endl;
    s1 = "ab";
    s2 = "eidboaoo";
    cout << checkInclusion(s1, s2) << endl;
}