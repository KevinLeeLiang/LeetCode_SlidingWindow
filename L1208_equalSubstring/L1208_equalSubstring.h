//
// Created by garen-lee on 2025/7/20.
/**
  ******************************************************************************
  * @file           : L1208_equalSubstring.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/20
  ******************************************************************************
  */
//

#ifndef SLIDINGWINDOW_L1208_EQUALSUBSTRING_H
#define SLIDINGWINDOW_L1208_EQUALSUBSTRING_H

#include "util.h"
class L1208_equalSubstring : public LeetcodeSlidingWindow {
private:
    int equalSubstring(string s, string t, int maxCost);
public:
    L1208_equalSubstring() {}
    void test();
};


#endif //SLIDINGWINDOW_L1208_EQUALSUBSTRING_H
