//
// Created by garen_lee on 2025/3/8.
/**
  ******************************************************************************
  * @file           : L395_longestSubstring.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/8
  ******************************************************************************
  */
//

#include "L395_longestSubstring.h"

int L395_longestSubstring::longestSubstring(string s, int k) {
    int ret = 0;
    int n = s.length();
    for (int t = 1; t <= 26; t++) {
        int l = 0, r = 0;
        vector<int> cnt(26, 0);
        int tot = 0;
        int less = 0;
        while (r < n) {
            cnt[s[r] - 'a']++;
            if (cnt[s[r] - 'a'] == 1) {
                tot++;
                less++;
            }
            if (cnt[s[r] - 'a'] == k) {
                less--;
            }

            while (tot > t) {
                cnt[s[l] - 'a']--;
                if (cnt[s[l] - 'a'] == k - 1) {
                    less++;
                }
                if (cnt[s[l] - 'a'] == 0) {
                    tot--;
                    less--;
                }
                l++;
            }
            if (less == 0) {
                ret = max(ret, r - l + 1);
            }
            r++;
        }
    }
    return ret;
}

void L395_longestSubstring::test() {
    string s = "aaabb";
    int k = 3;
    cout << longestSubstring(s, k) << endl;
    s = "ababbc";
    k = 2;
    cout << longestSubstring(s, k) << endl;
}