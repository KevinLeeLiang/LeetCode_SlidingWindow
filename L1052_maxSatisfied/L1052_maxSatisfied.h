//
// Created by garen-lee on 2025/7/6.
/**
  ******************************************************************************
  * @file           : L1052_maxSatisfied.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/6
  ******************************************************************************
  */
//

#ifndef SLIDINGWINDOW_L1052_MAXSATISFIED_H
#define SLIDINGWINDOW_L1052_MAXSATISFIED_H

#include "util.h"
class L1052_maxSatisfied : public LeetcodeSlidingWindow {
private:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes);
public:
    L1052_maxSatisfied() {}
    void test();
};


#endif //SLIDINGWINDOW_L1052_MAXSATISFIED_H
