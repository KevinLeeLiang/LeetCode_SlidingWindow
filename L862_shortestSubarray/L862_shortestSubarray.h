//
// Created by garen-lee on 2025/4/26.
/**
  ******************************************************************************
  * @file           : L862_shortestSubarray.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/26
  ******************************************************************************
  */
//

#ifndef SLIDINGWINDOW_L862_SHORTESTSUBARRAY_H
#define SLIDINGWINDOW_L862_SHORTESTSUBARRAY_H

#include "util.h"
class L862_shortestSubarray : public LeetcodeSlidingWindow {
private:
    int shortestSubarray(vector<int>& nums, int k);
public:
    L862_shortestSubarray() {}
    void test();
};


#endif //SLIDINGWINDOW_L862_SHORTESTSUBARRAY_H
