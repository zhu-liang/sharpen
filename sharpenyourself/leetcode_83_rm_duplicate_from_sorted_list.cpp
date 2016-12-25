//
//  leetcode_83_rm_duplicate_from_sorted_list.cpp
//  sharpenyourself
//
//  Created by zl on 25/12/16.
//  Copyright © 2016年 zhu-liang. All rights reserved.
//
#include "leetcode_83_rm_duplicate_from_sorted_list.hpp"
#include <iostream>

using namespace std;
using namespace leetcode;

ListNode* Leetcode83::deleteDuplicate(ListNode* head)
{
    if(head == NULL)
        return NULL;
    
    ListNode* p1 = head;
    ListNode* p2 = p1->next;
    
    while(true) {
        while (p2 != NULL && p2->val == p1->val) {
            p2 = p2->next;
        }
    
        p1->next = p2;
        if(p2==NULL)
            return head;
        else {
            p1 = p2;
            p2 = p1->next;
        }
    }
}

void Leetcode83::exerciseFunction()
{
    ListNode node1(1);
    ListNode node2(1);
    ListNode node3(2);
    ListNode node4(3);
    ListNode node5(3);
    node1.next = (ListNode*)&node2;
    node2.next = (ListNode*)&node3;
    node3.next = (ListNode*)&node4;
    node4.next = (ListNode*)&node5;
    
    ListNode* pRet = deleteDuplicate((ListNode*)&node1);
    while(true)
    {
        cout << pRet->val << "\t";
        if(pRet->next == NULL)
            break;
        else
            pRet = pRet->next;
    }
    cout <<endl;
}
