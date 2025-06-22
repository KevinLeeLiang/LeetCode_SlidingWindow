//
// Created by garen-lee on 2025/6/22.
/**
  ******************************************************************************
  * @file           : L1004_longestOnes.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/22
  ******************************************************************************
  */
//

#ifndef SLIDINGWINDOW_L1004_LONGESTONES_H
#define SLIDINGWINDOW_L1004_LONGESTONES_H

#include "util.h"
class L1004_longestOnes : public LeetcodeSlidingWindow {
private:
    int longestOnes(vector<int>& nums, int k);
public:
    L1004_longestOnes() {}
    void test();
};


#endif //SLIDINGWINDOW_L1004_LONGESTONES_H
