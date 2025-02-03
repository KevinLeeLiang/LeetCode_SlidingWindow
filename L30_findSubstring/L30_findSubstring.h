//
// Created by garen-lee on 2025/2/2.
/**
  ******************************************************************************
  * @file           : L30_findSubstring.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/2
  ******************************************************************************
  */
//

#ifndef SLIDINGWINDOW_L30_FINDSUBSTRING_H
#define SLIDINGWINDOW_L30_FINDSUBSTRING_H

#include "util.h"
class L30_findSubstring : public LeetcodeSlidingWindow{
private:
    vector<int> findSubstring(string s, vector<string>& words);
public:
    L30_findSubstring(){}
    void test();

};


#endif //SLIDINGWINDOW_L30_FINDSUBSTRING_H
