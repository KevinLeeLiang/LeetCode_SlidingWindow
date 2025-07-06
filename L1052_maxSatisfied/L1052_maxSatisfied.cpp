//
// Created by garen-lee on 2025/7/6.
/**
  ******************************************************************************
  * @file           : L1052_maxSatisfied.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/6
  ******************************************************************************
  */
//

#include "L1052_maxSatisfied.h"

int L1052_maxSatisfied::maxSatisfied(vector<int> &customers, vector<int> &grumpy, int minutes) {
    int total = 0;
    int n = customers.size();
    for (int i = 0; i < n; i++) {
        if (grumpy[i] == 0) {
            total += customers[i];
        }
    }
    int increase = 0;
    for (int i = 0; i < minutes; i++) {
        increase += customers[i] * grumpy[i];
    }
    int maxIncrease = increase;
    for (int i = minutes; i < n; i++) {
        increase = increase - customers[i - minutes] * grumpy[i - minutes] + customers[i] * grumpy[i];
        maxIncrease = max(maxIncrease, increase);
    }
    return total + maxIncrease;
}

void L1052_maxSatisfied::test() {
    vector<int> customers = {1,0,1,2,1,1,7,5};
    vector<int> grumpy = {0,1,0,1,0,1,0,1};
    cout << maxSatisfied(customers, grumpy, 3) << endl;
    customers = {1};
    grumpy = {0};
    cout << maxSatisfied(customers, grumpy, 1) << endl;
}