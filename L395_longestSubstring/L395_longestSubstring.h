//
// Created by garen_lee on 2025/3/8.
/**
  ******************************************************************************
  * @file           : L395_longestSubstring.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/8
  ******************************************************************************
  */
//

#ifndef SLIDINGWINDOW_L395_LONGESTSUBSTRING_H
#define SLIDINGWINDOW_L395_LONGESTSUBSTRING_H

#include "util.h"
class L395_longestSubstring : public LeetcodeSlidingWindow {
private:
    int longestSubstring(string s, int k);
public:
    L395_longestSubstring() {}
    void test();
};


#endif //SLIDINGWINDOW_L395_LONGESTSUBSTRING_H
