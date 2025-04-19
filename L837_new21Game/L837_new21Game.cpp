//
// Created by garen-lee on 2025/4/19.
/**
  ******************************************************************************
  * @file           : L837_new21Game.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/19
  ******************************************************************************
  */
//

#include "L837_new21Game.h"

double L837_new21Game::new21Game(int n, int k, int maxPts) {
    if (k == 0) {
        return 1.0;
    }
    vector<double> dp(k + maxPts);
    for (int i = k; i <= n && i < k + maxPts; ++i) {
        dp[i] = 1.0;
    }
    dp[k - 1] = 1.0 * min(n - k + 1, maxPts) / maxPts;
    for (int i = k - 2; i >= 0; --i) {
        dp[i] = dp[i + 1] - (dp[i + maxPts + 1] - dp[i + 1]) / maxPts;
    }
    return dp[0];
}

void L837_new21Game::test() {
    int n = 10;
    int k = 1;
    int maxPts = 10;
    cout << new21Game(n, k, maxPts) << endl;
    n = 6, k = 1, maxPts = 10;
    cout << new21Game(n, k, maxPts) << endl;
    n = 21, k = 17, maxPts = 10;
    cout << new21Game(n, k, maxPts) << endl;
}