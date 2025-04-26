//
// Created by garen-lee on 2025/4/26.
/**
  ******************************************************************************
  * @file           : L904_totalFruit.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/26
  ******************************************************************************
  */
//

#include "L904_totalFruit.h"

int L904_totalFruit::totalFruit(vector<int> &fruits) {
    int n = fruits.size();
    if (n < 3) {
        return n;
    }
    int left = 0;
    int right = 0;
    int max_len = 0;
    unordered_map<int, int> fruit_count;
    while (right < n) {
        fruit_count[fruits[right]]++;
        while (fruit_count.size() > 2) {
            fruit_count[fruits[left]]--;
            if (fruit_count[fruits[left]] == 0) {
                fruit_count.erase(fruits[left]);
            }
            left++;
            max_len = max(max_len, right - left + 1);
            if (fruit_count.size() > 2) {
                break;
            }
        }
        right++;
    }
    max_len = max(max_len, right - left);
    return max_len;
}

void L904_totalFruit::test() {
    vector<int> fruits = {1, 2, 1};
    int result = totalFruit(fruits);
    cout << "result: " << result << endl;
    fruits = {0, 1, 2, 2};
    result = totalFruit(fruits);
    cout << "result: " << result << endl;
    fruits = {1, 2, 3, 2, 2};
    result = totalFruit(fruits);
    cout << "result: " << result << endl;
    fruits = {3, 3, 3, 1, 2, 1, 1, 2, 3, 3, 4};
    result = totalFruit(fruits);
    cout << "result: " << result << endl;
}