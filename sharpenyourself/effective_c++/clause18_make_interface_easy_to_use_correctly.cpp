//
//  clause18_make_interface_easy_to_use_correctly.cpp
//  sharpenyourself
//
//  Created by zl on 29/12/16.
//  Copyright © 2016年 zhu-liang. All rights reserved.
//


std::tr1::shared_ptr<Investment> p1(new Investment(), getRidOfInvestment);

/* a more explicit example */

class Guardian {
private:
    std::str::shared_ptr<Mutex> mx;
public:
    Guardian(Mutex* mutex): mx(mutex, unlock) {}
};

Guardian myGuardian(new Mutex());
//这样就可以用 Guardian的生命周期来维护资源了


