//
// Created by garen-lee on 2025/4/19.
/**
  ******************************************************************************
  * @file           : L718_findLength.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/19
  ******************************************************************************
  */
//

#ifndef SLIDINGWINDOW_L718_FINDLENGTH_H
#define SLIDINGWINDOW_L718_FINDLENGTH_H

#include "util.h"
class L718_findLength : public LeetcodeSlidingWindow {
    int findLength(vector<int>& nums1, vector<int>& nums2);
public:
    L718_findLength() {};
    void test();
};


#endif //SLIDINGWINDOW_L718_FINDLENGTH_H
