//
//  leetcode_67_add_binary.hpp
//  sharpenyourself
//
//  Created by zl on 25/12/16.
//  Copyright © 2016年 zhu-liang. All rights reserved.
//

#ifndef leetcode_67_add_binary_hpp
#define leetcode_67_add_binary_hpp

#include "function_interface.hpp"
#include <stdio.h>
#include <string>

namespace leetcode {
    class Leetcode67: public FunctionInterface {
        void exerciseFunction();
        std::string addBinary(std::string a, std::string b);
    };
}
#endif /* leetcode_67_add_binary_hpp */
