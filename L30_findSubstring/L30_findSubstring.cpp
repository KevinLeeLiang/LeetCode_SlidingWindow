//
// Created by garen-lee on 2025/2/2.
/**
  ******************************************************************************
  * @file           : L30_findSubstring.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/2
  ******************************************************************************
  */
//

#include "L30_findSubstring.h"
vector<int> L30_findSubstring::findSubstring(string s, vector<string>& words) {
    vector<int> res;
    int m = words.size(), n = words[0].size(), ls = s.size();;
    for (int i = 0; i < n && i + m * n <= ls; ++i) {
        unordered_map<string, int> differ;
        for (int j = 0; j < m; ++j) {
            ++differ[s.substr(i + j * n, n)];
        }
        for (string &word: words) {
            if (--differ[word] == 0) {
                differ.erase(word);
            }
        }
        for (int start = i; start < ls - m * n + 1; start += n) {
            if (start != i) {
                string word = s.substr(start + (m - 1) * n, n);
                if (++differ[word] == 0) {
                    differ.erase(word);
                }
                word = s.substr(start - n, n);
                if (--differ[word] == 0) {
                    differ.erase(word);
                }
            }
            if (differ.empty()) {
                res.emplace_back(start);
            }
        }
    }
    return res;
}

void L30_findSubstring::test() {
    string s = "barfoothefoobarman";
    vector<string> words = {"foo","bar"};
    vector<int> res = findSubstring(s, words);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    s = "wordgoodgoodgoodbestword";
    words = {"word","good","best","word"};
    res = findSubstring(s, words);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    s = "barfoofoobarthefoobarman";
    words = {"bar","foo","the"};
    res = findSubstring(s, words);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
}