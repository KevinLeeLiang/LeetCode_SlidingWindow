//
// Created by garen-lee on 2025/6/28.
/**
  ******************************************************************************
  * @file           : L1040_numMovesStonesII.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/28
  ******************************************************************************
  */
//

#ifndef SLIDINGWINDOW_L1040_NUMMOVESSTONESII_H
#define SLIDINGWINDOW_L1040_NUMMOVESSTONESII_H

#include "util.h"
class L1040_numMovesStonesII : public LeetcodeSlidingWindow {
private:
    vector<int> numMovesStonesII(vector<int>& stones);
public:
    L1040_numMovesStonesII() {}
    void test();
};


#endif //SLIDINGWINDOW_L1040_NUMMOVESSTONESII_H
