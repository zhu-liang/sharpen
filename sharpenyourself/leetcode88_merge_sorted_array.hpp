//
//  leetcode88_merge_sorted_array.hpp
//  sharpenyourself
//
//  Created by zl on 25/12/16.
//  Copyright © 2016年 zhu-liang. All rights reserved.
//

#ifndef leetcode88_merge_sorted_array_hpp
#define leetcode88_merge_sorted_array_hpp

#include "function_interface.hpp"
#include <stdio.h>
#include <vector>

namespace leetcode {
    class Leetcode88: public FunctionInterface {
        void exerciseFunction();
        void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n);
    };
}
#endif /* leetcode88_merge_sorted_array_hpp */
