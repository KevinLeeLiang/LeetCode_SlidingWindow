//
// Created by garen_lee on 2025/4/12.
/**
  ******************************************************************************
  * @file           : L713_numSubarrayProductLessThrank.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/12
  ******************************************************************************
  */
//

#ifndef SLIDINGWINDOW_L713_NUMSUBARRAYPRODUCTLESSTHANK_H
#define SLIDINGWINDOW_L713_NUMSUBARRAYPRODUCTLESSTHANK_H

#include "util.h"
class L713_numSubarrayProductLessThanK : public LeetcodeSlidingWindow {
private:
    int numSubarrayProductLessThanK(vector<int>& nums, int k);
public:
    L713_numSubarrayProductLessThanK(){}
    void test();
};


#endif //SLIDINGWINDOW_L713_NUMSUBARRAYPRODUCTLESSTHANK_H
