//
// Created by garen-lee on 2025/3/15.
/**
  ******************************************************************************
  * @file           : L438_findAnagrams.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/15
  ******************************************************************************
  */
//

#include "L438_findAnagrams.h"



vector<int> L438_findAnagrams::findAnagrams(string s, string p) {
    unordered_map<char, int>map;
    for (char c : p) {
        map[c]++;
    }
    int left = 0, right = 0;
    int count = map.size();
    vector<int> result;
    while (right < s.size()) {
        char c = s[right];
        if (map.count(c)) {
            map[c]--;
        }
        if (map.find(c) != map.end()) {
            if (map[c] == 0) {
                count--;
            }
        }
        if (right - left + 1 == p.size()) {
            if (count == 0) {
                result.push_back(left);
            }
            char c1 = s[left];
            if (map.count(c1)) {
                map[c1]++;
            }
            if (map[c1] == 1) {
                count++;
            }
            left++;
        }
        right++;
    }
    return result;
}

void L438_findAnagrams::test() {
   string s = "cbaebabacd";
   string p = "abc";
   vector<int> result = findAnagrams(s, p);
   print_vector(result);
   s = "abab";
   p = "ab";
   result = findAnagrams(s, p);
   print_vector(result);
}