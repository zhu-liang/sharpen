//
//  leetcode_67_add_binary.cpp
//  sharpenyourself
//
//  Created by zl on 25/12/16.
//  Copyright © 2016年 zhu-liang. All rights reserved.
//

#include "leetcode_67_add_binary.hpp"
#include <string>
#include <iostream>

using namespace std;
using namespace leetcode;

void Leetcode67::exerciseFunction()
{
    string strResult = addBinary("11", "1");
    cout << strResult << endl;
}

string Leetcode67::addBinary(string a, string b)
{
    int iLenA = a.length();
    int iLenB = b.length();
    
    int iLen = iLenA < iLenB ? iLenB : iLenA;
    string strResult(iLen+1, '0');
    int iCarry = 0;
    int iPosition = 0;
    int iLeft = 0;
    int iRight = 0;
    
    for(int i = 1; i <= iLen ; i++)
    {
        iLeft = iLenA-i >=0 ? a[iLenA-i] - '0': 0;
        iRight = iLenB -i >= 0 ? b[iLenB-i] - '0': 0;
        //48 is ascii code for '0'
        iPosition = iLeft  + iRight + iCarry ;
        iCarry = iPosition/ 2;
        int iTemp = iPosition % 2 + '0';
        strResult[iLen + 1 - i] = iTemp;
    }
    
    if (iCarry!=0) {
        strResult[0] = '1';
        return strResult;
    } else
    {
        string newResult(strResult, 1, iLen);
        return newResult;
    }
}
