//
//  main.cpp
//  sharpenyourself
//
//  Created by zl on 15/12/16.
//  Copyright © 2016年 zhu-liang. All rights reserved.
//

#include <iostream>
#include "function_interface.hpp"
#include "leetcode_XXX.hpp"
#include "leetcode_12_interger_to_roman.hpp"

using namespace std;
using namespace leetcode;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    FunctionInterface* instance = new LeetcodeXXX();
    instance->exerciseFunction();
    
    instance = new Leetcode12();
    instance->exerciseFunction();
    return 0;
}
