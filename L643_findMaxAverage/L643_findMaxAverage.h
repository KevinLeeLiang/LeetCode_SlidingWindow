//
// Created by garen-lee on 2025/4/6.
/**
  ******************************************************************************
  * @file           : L643_findMaxAverage.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/6
  ******************************************************************************
  */
//

#ifndef SLIDINGWINDOW_L643_FINDMAXAVERAGE_H
#define SLIDINGWINDOW_L643_FINDMAXAVERAGE_H

#include "util.h"
class L643_findMaxAverage : public LeetcodeSlidingWindow {
private:
    double findMaxAverage(vector<int> &nums, int k);
public:
    L643_findMaxAverage() {}
    void test();
};


#endif //SLIDINGWINDOW_L643_FINDMAXAVERAGE_H
