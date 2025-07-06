//
// Created by garen-lee on 2025/7/6.
/**
  ******************************************************************************
  * @file           : L1044_longestDupSubstring.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/6
  ******************************************************************************
  */
//

#ifndef SLIDINGWINDOW_L1044_LONGESTDUPSUBSTRING_H
#define SLIDINGWINDOW_L1044_LONGESTDUPSUBSTRING_H

#include "util.h"
class L1044_longestDupSubstring : public LeetcodeSlidingWindow {
public:
    string longestDupSubstring(string s);
    long long pow(int a, int m, int mod);
    int check(const vector<int> & arr, int m, int a1, int a2, int mod1, int mod2);
    L1044_longestDupSubstring() {}
    void test();
};


#endif //SLIDINGWINDOW_L1044_LONGESTDUPSUBSTRING_H
