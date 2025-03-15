//
// Created by garen-lee on 2025/3/15.
/**
  ******************************************************************************
  * @file           : L424_characterReplacement.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/15
  ******************************************************************************
  */
//

#include "L424_characterReplacement.h"

int L424_characterReplacement::characterReplacement(string s, int k) {
    int max_len = 0;
    int left = 0;
    int right = 0;
    vector<int>nums(26);
    while (right < s.size()) {
        int i = s[right] - 'A';
        nums[i]++;
        max_len = max(max_len, nums[i]);
        if (right - left + 1 - max_len > k) {
            int j = s[left] - 'A';
            nums[j]--;
            left++;
        }
        right++;
    }
    return right - left;
}

void L424_characterReplacement::test() {
    string s = "ABAB";
    int k = 2;
    int res = characterReplacement(s, k);
    cout << res << endl;
    s = "AABABBA";
    k = 1;
    res = characterReplacement(s, k);
    cout << res << endl;
}