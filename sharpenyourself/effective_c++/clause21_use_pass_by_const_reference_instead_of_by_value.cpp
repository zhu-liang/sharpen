//
//  clause21_use_pass_by_const_reference_instead_of_by_value.cpp
//  sharpenyourself
//
//  Created by zl on 29/12/16.
//  Copyright © 2016年 zhu-liang. All rights reserved.
//

#include <stdio.h>
/* 在传参数值时，尽可能考虑使用引用，在返回值时，不要试图用引用在一个应当用对象的地方，哪怕这样会多一次复制构造函数，和析构函数 */
