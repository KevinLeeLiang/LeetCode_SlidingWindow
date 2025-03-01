//
// Created by garen-lee on 2025/3/1.
/**
  ******************************************************************************
  * @file           : L239_maxSlidingWindow.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/1
  ******************************************************************************
  */
//

#ifndef SLIDINGWINDOW_L239_MAXSLIDINGWINDOW_H
#define SLIDINGWINDOW_L239_MAXSLIDINGWINDOW_H

#include "util.h"
class L239_maxSlidingWindow : public LeetcodeSlidingWindow {
private:
    vector<int> maxSlidingWindow(vector<int>& nums, int k);
public:
    L239_maxSlidingWindow() {}
    void test();

};


#endif //SLIDINGWINDOW_L239_MAXSLIDINGWINDOW_H
