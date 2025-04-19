//
// Created by garen-lee on 2025/4/19.
/**
  ******************************************************************************
  * @file           : L718_findLength.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/19
  ******************************************************************************
  */
//

#include "L718_findLength.h"

int L718_findLength::findLength(vector<int>& nums1, vector<int>& nums2) {
    int n = nums1.size(), m = nums2.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    int ans = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (nums1[i - 1] == nums2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            ans = max(ans, dp[i][j]);
        }
    }
    return ans;
}

void L718_findLength::test() {
    vector<int> nums1 = {1, 2, 3, 2, 1};
    vector<int> nums2 = {3, 2, 1, 4, 7};
    int result = findLength(nums1, nums2);
    cout << "result: " << result << endl;
    nums1 = {0, 0, 0, 0, 0};
    nums2 = {0, 0, 0, 0, 0};
    result = findLength(nums1, nums2);
    cout << "result: " << result << endl;
}