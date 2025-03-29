//
// Created by garen-lee on 2025/3/29.
/**
  ******************************************************************************
  * @file           : L632_smallestRange.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/29
  ******************************************************************************
  */
//

#ifndef SLIDINGWINDOW_L632_SMALLESTRANGE_H
#define SLIDINGWINDOW_L632_SMALLESTRANGE_H

#include "util.h"
class L632_smallestRange : public LeetcodeSlidingWindow {
private:
    vector<int> smallestRange(vector<vector<int>>& nums);
public:
    L632_smallestRange() {}
    void test();
};


#endif //SLIDINGWINDOW_L632_SMALLESTRANGE_H
