//
// Created by garen_lee on 2025/5/10.
/**
  ******************************************************************************
  * @file           : L992_subarraysWithKDistinct.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/10
  ******************************************************************************
  */
//

#ifndef SLIDINGWINDOW_L992_SUBARRAYSWITHKDISTINCT_H
#define SLIDINGWINDOW_L992_SUBARRAYSWITHKDISTINCT_H

#include "util.h"
class L992_subarraysWithKDistinct : public LeetcodeSlidingWindow {
private:
    int subarraysWithKDistinct(vector<int>& nums, int k) ;
    int getMostDistinct(vector<int> &nums, int k);
public:
    L992_subarraysWithKDistinct() {}
    void test() ;
};


#endif //SLIDINGWINDOW_L992_SUBARRAYSWITHKDISTINCT_H
