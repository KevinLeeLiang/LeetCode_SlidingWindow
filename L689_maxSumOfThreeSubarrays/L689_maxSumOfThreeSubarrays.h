//
// Created by garen_lee on 2025/4/12.
/**
  ******************************************************************************
  * @file           : L689_maxSumOfThreeSubarrays.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/12
  ******************************************************************************
  */
//

#ifndef SLIDINGWINDOW_L689_MAXSUMOFTHREESUBARRAYS_H
#define SLIDINGWINDOW_L689_MAXSUMOFTHREESUBARRAYS_H

#include "util.h"
class L689_maxSumOfThreeSubarrays : public LeetcodeSlidingWindow {
private:
    vector<int> maxSumOfThreeSubarrays(vector<int> &nums, int k) ;
public:
    L689_maxSumOfThreeSubarrays(){}
    void test();
};


#endif //SLIDINGWINDOW_L689_MAXSUMOFTHREESUBARRAYS_H
