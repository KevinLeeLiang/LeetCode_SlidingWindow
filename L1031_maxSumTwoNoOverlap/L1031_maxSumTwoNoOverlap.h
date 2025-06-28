//
// Created by garen-lee on 2025/6/28.
/**
  ******************************************************************************
  * @file           : L1031_maxSumTwoNoOverlap.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/28
  ******************************************************************************
  */
//

#ifndef SLIDINGWINDOW_L1031_MAXSUMTWONOOVERLAP_H
#define SLIDINGWINDOW_L1031_MAXSUMTWONOOVERLAP_H

#include "util.h"
class L1031_maxSumTwoNoOverlap : public LeetcodeSlidingWindow {
private:
    int helper(vector<int>& nums, int firstLen, int secondLen);
    int maxSumTwoNoOverlap(vector<int>& nums, int firstLen, int secondLen);
public:
    L1031_maxSumTwoNoOverlap() {}
    void test();
};


#endif //SLIDINGWINDOW_L1031_MAXSUMTWONOOVERLAP_H
