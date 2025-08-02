//
// Created by garen_lee on 2025/8/2.
/**
  ******************************************************************************
  * @file           : L1234_balancedString.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/8/2
  ******************************************************************************
  */
//

#include "L1234_balancedString.h"

int L1234_balancedString::balancedString(string s) {
    vector<int> cnt(26);
    for (char c : s) {
        cnt[idx(c)]++;
    }
    int partial = s.size() / 4;
    int res = s.size();
    auto check = [&]() {
        if (cnt[idx('Q')] > partial || cnt[idx('W')] > partial \
                || cnt[idx('E')] > partial || cnt[idx('R')] > partial) {
            return false;
        }
        return true;
    };
    if (check()) {
        return 0;
    }
    for (int l = 0, r = 0; l < s.size(); ++l) {
        while (r < s.size() && !check()) {
            cnt[idx(s[r])]--;
            ++r;
        }
        if (!check()) {
            break;
        }
        res = min(res, r - l);
        cnt[idx(s[l])]++;
    }
    return res;
}

void L1234_balancedString::test() {
    string s = "QWER";
    cout << balancedString(s) << endl;
    s = "QQWE";
    cout << balancedString(s) << endl;
    s = "QQQW";
    cout << balancedString(s) << endl;
    s = "QQQQ";
    cout << balancedString(s) << endl;
}