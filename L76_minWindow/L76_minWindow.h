//
// Created by garen-lee on 2025/2/15.
/**
  ******************************************************************************
  * @file           : L76_minWindow.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/15
  ******************************************************************************
  */
//

#ifndef SLIDINGWINDOW_L76_MINWINDOW_H
#define SLIDINGWINDOW_L76_MINWINDOW_H

#include "util.h"
class L76_minWindow : public LeetcodeSlidingWindow{
private:
    string minWindow(string s, string t);
    unordered_map<char, int> ori, cnt;
    bool check();
public:
    L76_minWindow(){}
    void test();
};


#endif //SLIDINGWINDOW_L76_MINWINDOW_H
