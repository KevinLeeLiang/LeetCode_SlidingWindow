//
// Created by garen-lee on 2025/2/15.
/**
  ******************************************************************************
  * @file           : L76_minWindow.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/15
  ******************************************************************************
  */
//

#include "L76_minWindow.h"

bool L76_minWindow::check() {
    for (const auto &p : ori) {
        if (cnt[p.first] < p.second) {
            return false;
        }
    }
    return true;
}

string L76_minWindow::minWindow(string s, string t) {
    this->ori.clear();
    this->cnt.clear();
    for (const auto& c : t) {
        this->ori[c] ++;
    }
    int l = 0, r = -1;
    int len = INT_MAX;
    int ansL = -1;
    while (r < (int)s.size()) {
        if (this->ori.find(s[++r]) !=  this->ori.end()) {
            this->cnt[s[r]]++;
        }
        while (this->check() && l <= r) {
            if (r - l + 1 < len) {
                len = r - l + 1;
                ansL = l;
            }
            if (this->ori.find(s[l]) != this->ori.end()) {
                this->cnt[s[l]]--;
            }
            l++;
        }
    }
    return ansL == -1 ? string() : s.substr(ansL, len);
}
void L76_minWindow::test(){
    string s = "ADOBECODEBANC";
    string t = "ABC";
    cout << minWindow(s, t) << endl;
    s = "a";
    t = "a";
    cout << minWindow(s, t) << endl;
    s = "a";
    t = "aa";
    cout << minWindow(s, t) << endl;
}