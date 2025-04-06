//
// Created by garen-lee on 2025/4/6.
/**
  ******************************************************************************
  * @file           : L658_findClosetElement.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/6
  ******************************************************************************
  */
//

#ifndef SLIDINGWINDOW_L658_FINDCLOSETELEMENT_H
#define SLIDINGWINDOW_L658_FINDCLOSETELEMENT_H

#include "util.h"
class L658_findClosetElement : public LeetcodeSlidingWindow {
private:
    vector<int> findClosestElements(vector<int>& arr, int k, int x);
public:
    L658_findClosetElement() {}
    void test();
};


#endif //SLIDINGWINDOW_L658_FINDCLOSETELEMENT_H
