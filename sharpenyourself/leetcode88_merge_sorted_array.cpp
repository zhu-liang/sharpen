//
//  leetcode88_merge_sorted_array.cpp
//  sharpenyourself
//
//  Created by zl on 25/12/16.
//  Copyright © 2016年 zhu-liang. All rights reserved.
//

#include "leetcode88_merge_sorted_array.hpp"
#include <iostream>

using namespace leetcode;
using namespace std;

void Leetcode88::merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n)
{
}

void Leetcode88::exerciseFunction()
{
    vector<int> vec1 {10, 20, 30, 40};
    vector<int> vec2{10, 20, 30, 50};
    
    for (auto value: vec1)
        cout << value << "\t";
    cout <<endl;
    
    for (auto value: vec2)
        cout << value << "\t";
    cout <<endl;
    cout << "after merge" <<endl;
    
    vector<int>::iterator iter1 = vec1.begin();
    vector<int>::iterator iter2 = vec2.begin();
    
    for(iter2 = vec2.begin() ; iter2 != vec2.end(); iter2++)
    {
        for(iter1 = vec1.begin(); iter1 != vec1.end(); iter1++)
        {
            if(*iter1 >= *iter2) {
                vec1.insert(iter1, *iter2);
                break;
            }
        }
    }
    
    for (auto value: vec1)
        cout << value << "\t";
    cout <<endl;
}
