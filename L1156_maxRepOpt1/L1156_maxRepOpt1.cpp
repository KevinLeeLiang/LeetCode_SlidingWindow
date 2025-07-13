//
// Created by garen-lee on 2025/7/13.
/**
  ******************************************************************************
  * @file           : L1156_maxRepOpt1.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/13
  ******************************************************************************
  */
//

#include "L1156_maxRepOpt1.h"

int L1156_maxRepOpt1::maxRepOpt1(string s) {
    unordered_map<char, int> cnt;
    for (char c : s) {
        cnt[c]++;
    }
    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
        int j = i;
        while (j < s.size() && s[j] == s[i]) {
            j++;
        }
        int cur_cnt = j - i;
        if (cur_cnt < cnt[s[i]] && (j < s.size() || i > 0)) {
            ans = max(ans, cur_cnt + 1);
        }
        int k = j + 1;
        while (k < s.size() && s[k] == s[i]) {
            k++;
        }
        ans = max(ans, min(k - i, cnt[s[i]]));
        i = j;
    }
    return ans;
}


void L1156_maxRepOpt1::test() {
    string s = "ababa";
    int ans = maxRepOpt1(s);
    cout << ans << endl;
    s = "aaabaaa";
    ans = maxRepOpt1(s);
    cout << ans << endl;
    s = "aaaaaa";
    ans = maxRepOpt1(s);
    cout << ans << endl;
    s = "abcdef";
    ans = maxRepOpt1(s);
    cout << ans << endl;
}