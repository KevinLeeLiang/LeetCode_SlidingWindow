//
// Created by garen-lee on 2025/4/19.
/**
  ******************************************************************************
  * @file           : L837_new21Game.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/19
  ******************************************************************************
  */
//

#ifndef SLIDINGWINDOW_L837_NEW21GAME_H
#define SLIDINGWINDOW_L837_NEW21GAME_H

#include "util.h"
class L837_new21Game : public LeetcodeSlidingWindow {
private:
    double new21Game(int n, int k, int maxPts);
public:
    L837_new21Game() {}
    void test();
};


#endif //SLIDINGWINDOW_L837_NEW21GAME_H
