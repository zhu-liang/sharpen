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
#include "leetcode_67_add_binary.hpp"
#include "leetcode_83_rm_duplicate_from_sorted_list.hpp"
#include "leetcode88_merge_sorted_array.hpp"
#include "leetcode100_same_tree.hpp"

using namespace std;
using namespace leetcode;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    FunctionInterface* instance = new LeetcodeXXX();
    instance->exerciseFunction();
    
    instance = new Leetcode12();
    instance->exerciseFunction();
    
    instance = new Leetcode67();
    instance->exerciseFunction();
    
    instance = new Leetcode83();
    instance->exerciseFunction();
    
    instance = new Leetcode88();
    instance->exerciseFunction();
    
    instance = new Leetcode100();
    instance->exerciseFunction();
    return 0;
}
