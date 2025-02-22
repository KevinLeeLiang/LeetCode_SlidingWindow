//
// Created by garen_lee on 2025/2/22.
/**
  ******************************************************************************
  * @file           : L219_containsNearbyDuplicate.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/22
  ******************************************************************************
  */
//

#ifndef SLIDINGWINDOW_L219_CONTAINSNEARBYDUPLICATE_H
#define SLIDINGWINDOW_L219_CONTAINSNEARBYDUPLICATE_H

#include "util.h"
class L219_containsNearbyDuplicate : public LeetcodeSlidingWindow {
private:
    bool containsNearbyDuplicate(vector<int>& nums, int k);
public:
    L219_containsNearbyDuplicate() {}
    void test();
};


#endif //SLIDINGWINDOW_L219_CONTAINSNEARBYDUPLICATE_H
