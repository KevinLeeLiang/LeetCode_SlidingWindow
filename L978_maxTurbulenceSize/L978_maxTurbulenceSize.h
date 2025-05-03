//
// Created by garen-lee on 2025/5/3.
/**
  ******************************************************************************
  * @file           : L978_maxTurbulenceSize.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/3
  ******************************************************************************
  */
//

#ifndef SLIDINGWINDOW_L978_MAXTURBULENCESIZE_H
#define SLIDINGWINDOW_L978_MAXTURBULENCESIZE_H

#include "util.h"
class L978_maxTurbulenceSize : public LeetcodeSlidingWindow {
private:
    int maxTurbulenceSize(vector<int>& arr);
public:
    L978_maxTurbulenceSize() {}
    void test();
};


#endif //SLIDINGWINDOW_L978_MAXTURBULENCESIZE_H
