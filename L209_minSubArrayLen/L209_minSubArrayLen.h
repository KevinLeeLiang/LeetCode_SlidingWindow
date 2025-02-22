//
// Created by garen_lee on 2025/2/22.
/**
  ******************************************************************************
  * @file           : L209_minSubArrayLen.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/22
  ******************************************************************************
  */
//

#ifndef SLIDINGWINDOW_L209_MINSUBARRAYLEN_H
#define SLIDINGWINDOW_L209_MINSUBARRAYLEN_H

#include "util.h"
class L209_minSubArrayLen : public LeetcodeSlidingWindow{
private:
    int minSubArrayLen(int target, vector<int>& nums);
public:
    L209_minSubArrayLen() {}
    void test();
};


#endif //SLIDINGWINDOW_L209_MINSUBARRAYLEN_H
