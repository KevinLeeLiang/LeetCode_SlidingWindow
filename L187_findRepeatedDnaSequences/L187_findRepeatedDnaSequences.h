//
// Created by garen-lee on 2025/2/15.
/**
  ******************************************************************************
  * @file           : L187_findRepeatedDnaSequences.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/15
  ******************************************************************************
  */
//

#ifndef SLIDINGWINDOW_L187_FINDREPEATEDDNASEQUENCES_H
#define SLIDINGWINDOW_L187_FINDREPEATEDDNASEQUENCES_H

#include "util.h"
class L187_findRepeatedDnaSequences : public LeetcodeSlidingWindow{
private:
    const int L = 10;
    unordered_map<char, int> bin = {{'A', 0}, {'C', 1}, {'G', 2}, {'T', 3}};
private:
    vector<string> findRepeatedDnaSequences(string s);
public:
    L187_findRepeatedDnaSequences(){}
    void test();
};


#endif //SLIDINGWINDOW_L187_FINDREPEATEDDNASEQUENCES_H
