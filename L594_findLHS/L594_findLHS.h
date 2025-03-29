//
// Created by garen-lee on 2025/3/29.
/**
  ******************************************************************************
  * @file           : L594_findLHS.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/29
  ******************************************************************************
  */
//

#ifndef SLIDINGWINDOW_L594_FINDLHS_H
#define SLIDINGWINDOW_L594_FINDLHS_H

#include "util.h"
class L594_findLHS : public LeetcodeSlidingWindow {
private:
    int findLHS(vector<int> &nums);
public:
    L594_findLHS() {}
    void test();
};


#endif //SLIDINGWINDOW_L594_FINDLHS_H
