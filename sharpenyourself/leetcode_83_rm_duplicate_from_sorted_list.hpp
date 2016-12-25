//
//  leetcode_83_rm_duplicate_from_sorted_list.hpp
//  sharpenyourself
//
//  Created by zl on 25/12/16.
//  Copyright © 2016年 zhu-liang. All rights reserved.
//

#ifndef leetcode_83_rm_duplicate_from_sorted_list_hpp
#define leetcode_83_rm_duplicate_from_sorted_list_hpp

#include <stdio.h>
#include "function_interface.hpp"

namespace leetcode {
    
    struct ListNode {
        int val;
        ListNode* next;
        ListNode(int x) : val(x), next(NULL)
        {
        }
    };
    
    class Leetcode83 : public FunctionInterface {
        void exerciseFunction();
        ListNode* deleteDuplicate(ListNode* head);
    };
}

#endif /* leetcode_83_rm_duplicate_from_sorted_list_hpp */
