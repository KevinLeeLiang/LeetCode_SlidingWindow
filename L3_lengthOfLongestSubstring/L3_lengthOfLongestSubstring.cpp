//
// Created by garen-lee on 2025/2/2.
/**
  ******************************************************************************
  * @file           : L3_lengthOfLongestSubstring.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/2
  ******************************************************************************
  */
//

#include "L3_lengthOfLongestSubstring.h"
int L3_lengthOfLongestSubstring::lengthOfLongestSubstring(string s) {
    unordered_set<char> hash;
    int left = 0, right = 0;
    int res = 0;
    while (right < s.size()) {
        if (hash.find(s[right]) == hash.end()) {
            hash.insert(s[right]);
            res = max(res, right - left + 1);
            right++;
        } else {
            hash.erase(s[left]);
            left++;
        }
    }
    return res;
}

void L3_lengthOfLongestSubstring::test() {
    string s;
    s = "abcabcbb";
    cout << lengthOfLongestSubstring(s) << endl;
    s = "bbbbb";
    cout << lengthOfLongestSubstring(s) << endl;
    s = "pwwkew";
    cout << lengthOfLongestSubstring(s) << endl;
}