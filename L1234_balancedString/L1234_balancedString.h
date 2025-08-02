//
// Created by garen_lee on 2025/8/2.
/**
  ******************************************************************************
  * @file           : L1234_balancedString.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/8/2
  ******************************************************************************
  */
//

#ifndef SLIDINGWINDOW_L1234_BALANCEDSTRING_H
#define SLIDINGWINDOW_L1234_BALANCEDSTRING_H

#include "util.h"
class L1234_balancedString : public LeetcodeSlidingWindow {
private:
    int idx(const char& c) {
        return c - 'A';
    }
    int balancedString(string s);
public:
    L1234_balancedString() {}
    void test();
};


#endif //SLIDINGWINDOW_L1234_BALANCEDSTRING_H
