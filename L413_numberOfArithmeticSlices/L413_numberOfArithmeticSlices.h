//
// Created by garen_lee on 2025/3/8.
/**
  ******************************************************************************
  * @file           : L413_numberOfArithmeticSlices.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/8
  ******************************************************************************
  */
//

#ifndef SLIDINGWINDOW_L413_NUMBEROFARITHMETICSLICES_H
#define SLIDINGWINDOW_L413_NUMBEROFARITHMETICSLICES_H

#include "util.h"
class L413_numberOfArithmeticSlices : public LeetcodeSlidingWindow {
private:
    int numberOfArithmeticSlices(vector<int>& nums);
public:
    L413_numberOfArithmeticSlices() {}
    void test();
};


#endif //SLIDINGWINDOW_L413_NUMBEROFARITHMETICSLICES_H
