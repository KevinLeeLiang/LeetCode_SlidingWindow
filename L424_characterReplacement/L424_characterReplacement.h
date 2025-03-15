//
// Created by garen-lee on 2025/3/15.
/**
  ******************************************************************************
  * @file           : L424_characterReplacement.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/15
  ******************************************************************************
  */
//

#ifndef SLIDINGWINDOW_L424_CHARACTERREPLACEMENT_H
#define SLIDINGWINDOW_L424_CHARACTERREPLACEMENT_H

#include "util.h"
class L424_characterReplacement : public LeetcodeSlidingWindow {
private:
    int characterReplacement(string s, int k);
public:
    L424_characterReplacement() {}
    void test();
};


#endif //SLIDINGWINDOW_L424_CHARACTERREPLACEMENT_H
