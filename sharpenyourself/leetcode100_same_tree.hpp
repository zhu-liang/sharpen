//
//  leetcode100_same_tree.hpp
//  sharpenyourself
//
//  Created by zl on 25/12/16.
//  Copyright © 2016年 zhu-liang. All rights reserved.
//

#ifndef leetcode100_same_tree_hpp
#define leetcode100_same_tree_hpp

#include "function_interface.hpp"
#include <stdio.h>

namespace leetcode {
    struct TreeNode {
        int val;
        TreeNode* left;
        TreeNode* right;
        TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    };
    
    class Leetcode100 : public FunctionInterface {
        void exerciseFunction();
        bool isSameTree(TreeNode* p, TreeNode* q);
    };
    
    class Leetcode101 : public FunctionInterface {
        void exerciseFunction();
        bool isSymmetric(TreeNode* p);
    };
}
#endif /* leetcode100_same_tree_hpp */
