//
//  leetcode100_same_tree.cpp
//  sharpenyourself
//
//  Created by zl on 25/12/16.
//  Copyright © 2016年 zhu-liang. All rights reserved.
//

#include "leetcode100_same_tree.hpp"
#include <iostream>

using namespace std;
using namespace leetcode;

bool Leetcode100::isSameTree(TreeNode* p, TreeNode* q)
{
    if (p == NULL || q == NULL)
        return p == q;
    else {
        return p->val ==  q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
}

void Leetcode100::exerciseFunction()
{
    bool bRet = true/*isSameTree()*/;
    cout << bRet <<endl;
}

bool Leetcode101::isSymmetric(TreeNode* p)
{
    
}
