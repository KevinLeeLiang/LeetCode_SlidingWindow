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
class test_factory {
private:
    void buildSolution(string title) {
        if (title == "L3") {
            std::shared_ptr<L3_lengthOfLongestSubstring> tmp= std::make_shared<L3_lengthOfLongestSubstring>();
            solution_ = std::dynamic_pointer_cast<LeetcodeSlidingWindow>(tmp);
        } else if (title == "L30") {
            std::shared_ptr<L30_findSubstring> tmp= std::make_shared<L30_findSubstring>();
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
