//
// Created by garen-lee on 2025/3/1.
/**
  ******************************************************************************
  * @file           : L220_containsNearbyAlmostDuplicate.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/1
  ******************************************************************************
  */
//

#ifndef SLIDINGWINDOW_L220_CONTAINSNEARBYALMOSTDUPLICATE_H
#define SLIDINGWINDOW_L220_CONTAINSNEARBYALMOSTDUPLICATE_H

#include "util.h"
class L220_containsNearbyAlmostDuplicate : public LeetcodeSlidingWindow {
private:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff);
public:
    L220_containsNearbyAlmostDuplicate() {}
    void test();
};


#endif //SLIDINGWINDOW_L220_CONTAINSNEARBYALMOSTDUPLICATE_H
