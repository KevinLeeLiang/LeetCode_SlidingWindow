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
#include "L424_characterReplacement/L424_characterReplacement.h"
#include "L438_findAnagrams/L438_findAnagrams.h"
#include "L480_medianSlidingWindow/L480_medianSlidingWindow.h"
#include "L567_checkInclusion/L567_checkInclusion.h"
#include "L594_findLHS/L594_findLHS.h"
#include "L632_smallestRange/L632_smallestRange.h"
#include "L643_findMaxAverage/L643_findMaxAverage.h"
#include "L658_findClosestElements/L658_findClosetElement.h"
#include "L689_maxSumOfThreeSubarrays/L689_maxSumOfThreeSubarrays.h"
#include "L713_numSubarrayProductLessThanK/L713_numSubarrayProductLessThanK.h"
#include "L718_findLength/L718_findLength.h"
#include "L837_new21Game/L837_new21Game.h"
#include "L862_shortestSubarray/L862_shortestSubarray.h"
#include "L904_totalFruit/L904_totalFruit.h"
#include "L930_numSubarraysWithSum/L930_numSubarraysWithSum.h"
#include "L978_maxTurbulenceSize/L978_maxTurbulenceSize.h"
#include "L992_subarraysWithKDistinct/L992_subarraysWithKDistinct.h"
#include "L995_minKBitFlips/L995_minKBitFlips.h"
#include "L1004_longestOnes/L1004_longestOnes.h"
#include "L1016_queryString/L1016_queryString.h"
#include "L1031_maxSumTwoNoOverlap/L1031_maxSumTwoNoOverlap.h"
#include "L1040_numMovesStonesII/L1040_numMovesStonesII.h"
#include "L1044_longestDupSubstring/L1044_longestDupSubstring.h"
#include "L1052_maxSatisfied/L1052_maxSatisfied.h"
#include "L1156_maxRepOpt1/L1156_maxRepOpt1.h"
#include "L1208_equalSubstring/L1208_equalSubstring.h"
#include "L1234_balancedString/L1234_balancedString.h"

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
        } else if (title == "L424") {
            std::shared_ptr<L424_characterReplacement> tmp= std::make_shared<L424_characterReplacement>();
            solution_ = std::dynamic_pointer_cast<LeetcodeSlidingWindow>(tmp);
        } else if (title == "L438") {
            std::shared_ptr<L438_findAnagrams> tmp= std::make_shared<L438_findAnagrams>();
            solution_ = std::dynamic_pointer_cast<LeetcodeSlidingWindow>(tmp);
        } else if (title == "L480") {
            std::shared_ptr<L480_medianSlidingWindow> tmp= std::make_shared<L480_medianSlidingWindow>();
            solution_ = std::dynamic_pointer_cast<LeetcodeSlidingWindow>(tmp);
        } else if (title == "L567") {
            std::shared_ptr<L567_checkInclusion> tmp= std::make_shared<L567_checkInclusion>();
            solution_ = std::dynamic_pointer_cast<LeetcodeSlidingWindow>(tmp);
        } else if (title == "L594") {
            std::shared_ptr<L594_findLHS> tmp= std::make_shared<L594_findLHS>();
            solution_ = std::dynamic_pointer_cast<LeetcodeSlidingWindow>(tmp);
        } else if (title == "L632") {
            std::shared_ptr<L632_smallestRange> tmp= std::make_shared<L632_smallestRange>();
            solution_ = std::dynamic_pointer_cast<LeetcodeSlidingWindow>(tmp);
        } else if (title == "L643") {
            std::shared_ptr<L643_findMaxAverage> tmp= std::make_shared<L643_findMaxAverage>();
            solution_ = std::dynamic_pointer_cast<LeetcodeSlidingWindow>(tmp);
        } else if (title == "L658") {
            std::shared_ptr<L658_findClosetElement> tmp= std::make_shared<L658_findClosetElement>();
            solution_ = std::dynamic_pointer_cast<LeetcodeSlidingWindow>(tmp);
        } else if (title == "L689") {
            std::shared_ptr<L689_maxSumOfThreeSubarrays> tmp= std::make_shared<L689_maxSumOfThreeSubarrays>();
            solution_ = std::dynamic_pointer_cast<LeetcodeSlidingWindow>(tmp);
        } else if (title == "L713") {
            std::shared_ptr<L713_numSubarrayProductLessThanK> tmp= std::make_shared<L713_numSubarrayProductLessThanK>();
            solution_ = std::dynamic_pointer_cast<LeetcodeSlidingWindow>(tmp);
        } else if (title == "L718") {
            std::shared_ptr<L718_findLength> tmp= std::make_shared<L718_findLength>();
            solution_ = std::dynamic_pointer_cast<LeetcodeSlidingWindow>(tmp);
        } else if (title == "L837") {
            std::shared_ptr<L837_new21Game> tmp= std::make_shared<L837_new21Game>();
            solution_ = std::dynamic_pointer_cast<LeetcodeSlidingWindow>(tmp);
        } else if (title == "L862") {
            std::shared_ptr<L862_shortestSubarray> tmp= std::make_shared<L862_shortestSubarray>();
            solution_ = std::dynamic_pointer_cast<LeetcodeSlidingWindow>(tmp);
        } else if (title == "L904") {
            std::shared_ptr<L904_totalFruit> tmp= std::make_shared<L904_totalFruit>();
            solution_ = std::dynamic_pointer_cast<LeetcodeSlidingWindow>(tmp);
        } else if (title == "L930") {
            std::shared_ptr<L930_numSubarraysWithSum> tmp= std::make_shared<L930_numSubarraysWithSum>();
            solution_ = std::dynamic_pointer_cast<LeetcodeSlidingWindow>(tmp);
        } else if (title == "L978") {
            std::shared_ptr<L978_maxTurbulenceSize> tmp= std::make_shared<L978_maxTurbulenceSize>();
            solution_ = std::dynamic_pointer_cast<LeetcodeSlidingWindow>(tmp);
        } else if (title == "L992") {
            std::shared_ptr<L992_subarraysWithKDistinct> tmp= std::make_shared<L992_subarraysWithKDistinct>();
            solution_ = std::dynamic_pointer_cast<LeetcodeSlidingWindow>(tmp);
        } else if (title == "L995") {
            std::shared_ptr<L995_minKBitFlips> tmp= std::make_shared<L995_minKBitFlips>();
            solution_ = std::dynamic_pointer_cast<LeetcodeSlidingWindow>(tmp);
        } else if (title == "L1004") {
            std::shared_ptr<L1004_longestOnes> tmp= std::make_shared<L1004_longestOnes>();
            solution_ = std::dynamic_pointer_cast<LeetcodeSlidingWindow>(tmp);
        } else if (title == "L1016") {
            std::shared_ptr<L1016_queryString> tmp= std::make_shared<L1016_queryString>();
            solution_ = std::dynamic_pointer_cast<LeetcodeSlidingWindow>(tmp);
        } else if (title == "L1031") {
            std::shared_ptr<L1031_maxSumTwoNoOverlap> tmp= std::make_shared<L1031_maxSumTwoNoOverlap>();
            solution_ = std::dynamic_pointer_cast<LeetcodeSlidingWindow>(tmp);
        } else if (title == "L1040") {
            std::shared_ptr<L1040_numMovesStonesII> tmp= std::make_shared<L1040_numMovesStonesII>();
            solution_ = std::dynamic_pointer_cast<LeetcodeSlidingWindow>(tmp);
        } else if (title == "L1044") {
            std::shared_ptr<L1044_longestDupSubstring> tmp= std::make_shared<L1044_longestDupSubstring>();
            solution_ = std::dynamic_pointer_cast<LeetcodeSlidingWindow>(tmp);
        } else if (title == "L1052") {
            std::shared_ptr<L1052_maxSatisfied> tmp= std::make_shared<L1052_maxSatisfied>();
            solution_ = std::dynamic_pointer_cast<LeetcodeSlidingWindow>(tmp);
        } else if (title == "L1156") {
            std::shared_ptr<L1156_maxRepOpt1> tmp= std::make_shared<L1156_maxRepOpt1>();
            solution_ = std::dynamic_pointer_cast<LeetcodeSlidingWindow>(tmp);
        } else if (title == "L1208") {
            std::shared_ptr<L1208_equalSubstring> tmp= std::make_shared<L1208_equalSubstring>();
            solution_ = std::dynamic_pointer_cast<LeetcodeSlidingWindow>(tmp);
        } else if (title == "L1234") {
            std::shared_ptr<L1234_balancedString> tmp= std::make_shared<L1234_balancedString>();
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
