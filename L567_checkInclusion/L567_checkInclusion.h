//
// Created by garen_lee on 2025/3/22.
/**
  ******************************************************************************
  * @file           : L567_checkInclusion.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/22
  ******************************************************************************
  */
//

#ifndef SLIDINGWINDOW_L567_CHECKINCLUSION_H
#define SLIDINGWINDOW_L567_CHECKINCLUSION_H

#include "util.h"
class L567_checkInclusion : public LeetcodeSlidingWindow {
private:
    bool checkInclusion(string s1, string s2);
public:
    L567_checkInclusion() {}
    void test();
};


#endif //SLIDINGWINDOW_L567_CHECKINCLUSION_H
