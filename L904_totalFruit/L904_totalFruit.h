//
// Created by garen-lee on 2025/4/26.
/**
  ******************************************************************************
  * @file           : L904_totalFruit.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/26
  ******************************************************************************
  */
//

#ifndef SLIDINGWINDOW_L904_TOTALFRUIT_H
#define SLIDINGWINDOW_L904_TOTALFRUIT_H

#include "util.h"
class L904_totalFruit : public LeetcodeSlidingWindow {
private:
    int totalFruit(vector<int> &fruits);
public:
    L904_totalFruit() {}
    void test();
};


#endif //SLIDINGWINDOW_L904_TOTALFRUIT_H
