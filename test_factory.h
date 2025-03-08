//
// Created by garen-lee on 2025/2/2.
/**
  ******************************************************************************
  * @file           : test_factory.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/2
  ******************************************************************************
  */
//

#ifndef SLIDINGWINDOW_TEST_FACTORY_H
#define SLIDINGWINDOW_TEST_FACTORY_H
#include <memory>
#include "L3_lengthOfLongestSubstring/L3_lengthOfLongestSubstring.h"
#include "L30_findSubstring/L30_findSubstring.h"
#include "L76_minWindow/L76_minWindow.h"
#include "L187_findRepeatedDnaSequences/L187_findRepeatedDnaSequences.h"
#include "L209_minSubArrayLen/L209_minSubArrayLen.h"
#include "L219_containsNearbyDuplicate/L219_containsNearbyDuplicate.h"
#include "L220_containsNearbyAlmostDuplicate/L220_containsNearbyAlmostDuplicate.h"
#include "L239_maxSlidingWindow/L239_maxSlidingWindow.h"
#include "L395_longestSubstring/L395_longestSubstring.h"
#include "L413_numberOfArithmeticSlices/L413_numberOfArithmeticSlices.h"
using namespace std;
class test_factory {
private:
    void buildSolution(string title) {
        if (title == "L3") {
            std::shared_ptr<L3_lengthOfLongestSubstring> tmp= std::make_shared<L3_lengthOfLongestSubstring>();
            solution_ = std::dynamic_pointer_cast<LeetcodeSlidingWindow>(tmp);
        } else if (title == "L30") {
            std::shared_ptr<L30_findSubstring> tmp= std::make_shared<L30_findSubstring>();
            solution_ = std::dynamic_pointer_cast<LeetcodeSlidingWindow>(tmp);
        } else if (title == "L76") {
            std::shared_ptr<L76_minWindow> tmp= std::make_shared<L76_minWindow>();
            solution_ = std::dynamic_pointer_cast<LeetcodeSlidingWindow>(tmp);
        } else if (title == "L187") {
            std::shared_ptr<L187_findRepeatedDnaSequences> tmp= std::make_shared<L187_findRepeatedDnaSequences>();
            solution_ = std::dynamic_pointer_cast<LeetcodeSlidingWindow>(tmp);
        } else if (title == "L209") {
            std::shared_ptr<L209_minSubArrayLen> tmp= std::make_shared<L209_minSubArrayLen>();
            solution_ = std::dynamic_pointer_cast<LeetcodeSlidingWindow>(tmp);
        } else if (title == "L219") {
            std::shared_ptr<L219_containsNearbyDuplicate> tmp= std::make_shared<L219_containsNearbyDuplicate>();
            solution_ = std::dynamic_pointer_cast<LeetcodeSlidingWindow>(tmp);
        } else if (title == "L220") {
            std::shared_ptr<L220_containsNearbyAlmostDuplicate> tmp= std::make_shared<L220_containsNearbyAlmostDuplicate>();
            solution_ = std::dynamic_pointer_cast<LeetcodeSlidingWindow>(tmp);
        } else if (title == "L239") {
            std::shared_ptr<L239_maxSlidingWindow> tmp= std::make_shared<L239_maxSlidingWindow>();
            solution_ = std::dynamic_pointer_cast<LeetcodeSlidingWindow>(tmp);
        } else if (title == "L395") {
            std::shared_ptr<L395_longestSubstring> tmp= std::make_shared<L395_longestSubstring>();
            solution_ = std::dynamic_pointer_cast<LeetcodeSlidingWindow>(tmp);
        } else if (title == "L413") {
            std::shared_ptr<L413_numberOfArithmeticSlices> tmp= std::make_shared<L413_numberOfArithmeticSlices>();
            solution_ = std::dynamic_pointer_cast<LeetcodeSlidingWindow>(tmp);
        }
    }
public:
    test_factory(string title) {
        cout << "test " << title << endl;
        buildSolution(title);
    }
    void test() {
        solution_->test();
    }
    ~test_factory() {}

private:
    std::shared_ptr<LeetcodeSlidingWindow> solution_;
};
#endif //SLIDINGWINDOW_TEST_FACTORY_H
