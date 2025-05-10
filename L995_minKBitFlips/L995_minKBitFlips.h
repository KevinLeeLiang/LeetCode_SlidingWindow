//
// Created by garen_lee on 2025/5/10.
/**
  ******************************************************************************
  * @file           : L995_minKBitFlips.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/10
  ******************************************************************************
  */
//

#ifndef SLIDINGWINDOW_L995_MINKBITFLIPS_H
#define SLIDINGWINDOW_L995_MINKBITFLIPS_H

#include "util.h"
class L995_minKBitFlips : public LeetcodeSlidingWindow {
private:
    int minKBitFlips(vector<int>& nums, int k);
public:
    L995_minKBitFlips() {}
    void test();
};


#endif //SLIDINGWINDOW_L995_MINKBITFLIPS_H
