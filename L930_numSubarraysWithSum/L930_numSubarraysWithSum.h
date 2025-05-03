//
// Created by garen-lee on 2025/5/3.
/**
  ******************************************************************************
  * @file           : L930_numSubarraysWithSum.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/3
  ******************************************************************************
  */
//

#ifndef SLIDINGWINDOW_L930_NUMSUBARRAYSWITHSUM_H
#define SLIDINGWINDOW_L930_NUMSUBARRAYSWITHSUM_H

#include "util.h"
class L930_numSubarraysWithSum : public LeetcodeSlidingWindow {
private:
    int numSubarraysWithSum(vector<int>& nums, int goal);
public:
    L930_numSubarraysWithSum() {}
    void test();
};


#endif //SLIDINGWINDOW_L930_NUMSUBARRAYSWITHSUM_H
