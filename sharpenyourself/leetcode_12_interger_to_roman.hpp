//
//  leetcode_12_interger_to_roman.hpp
//  sharpenyourself
//
//  Created by zl on 16/12/16.
//  Copyright © 2016年 zhu-liang. All rights reserved.
//

#ifndef leetcode_12_interger_to_roman_hpp
#define leetcode_12_interger_to_roman_hpp

#include "function_interface.hpp"
#include <stdio.h>
#include <string>

namespace leetcode {
    class Leetcode12 : public FunctionInterface{
        void exerciseFunction();
        std::string intToRoman(int num);
    };
}//namespace leetcode
#endif /* leetcode_12_interger_to_roman_hpp */
