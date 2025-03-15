//
// Created by garen-lee on 2025/3/15.
/**
  ******************************************************************************
  * @file           : L438_findAnagrams.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/15
  ******************************************************************************
  */
//

#ifndef SLIDINGWINDOW_L438_FINDANAGRAMS_H
#define SLIDINGWINDOW_L438_FINDANAGRAMS_H

#include "util.h"
class L438_findAnagrams : public LeetcodeSlidingWindow {
private:
    vector<int> findAnagrams(string s, string p);
public:
    L438_findAnagrams() {}
    void test();
};


#endif //SLIDINGWINDOW_L438_FINDANAGRAMS_H
