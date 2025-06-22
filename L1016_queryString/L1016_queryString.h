//
// Created by garen-lee on 2025/6/22.
/**
  ******************************************************************************
  * @file           : L1016_queryString.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/22
  ******************************************************************************
  */
//

#ifndef SLIDINGWINDOW_L1016_QUERYSTRING_H
#define SLIDINGWINDOW_L1016_QUERYSTRING_H

#include "util.h"
class L1016_queryString : public LeetcodeSlidingWindow {
private:
    bool queryString(string s, int n);
    bool help(const string& s, int k, int mi, int ma);
public:
    L1016_queryString() {}
    void test();
};


#endif //SLIDINGWINDOW_L1016_QUERYSTRING_H
