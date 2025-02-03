//
// Created by garen-lee on 2025/2/2.
/**
  ******************************************************************************
  * @file           : L3_lengthOfLongestSubstring.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/2
  ******************************************************************************
  */
//

#ifndef SLIDINGWINDOW_L3_LENGTHOFLONGESTSUBSTRING_H
#define SLIDINGWINDOW_L3_LENGTHOFLONGESTSUBSTRING_H
#include "util.h"

class L3_lengthOfLongestSubstring : public LeetcodeSlidingWindow{
private:
    int lengthOfLongestSubstring(string s);
public:
    L3_lengthOfLongestSubstring(){}
    void test();
};


#endif //SLIDINGWINDOW_L3_LENGTHOFLONGESTSUBSTRING_H
