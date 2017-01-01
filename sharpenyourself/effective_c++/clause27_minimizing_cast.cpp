//
//  clause27_minimizing_cast.cpp
//  sharpenyourself
//
//  Created by zl on 31/12/16.
//  Copyright © 2016年 zhu-liang. All rights reserved.
//

#include <stdio.h>

// old style cast
(T)expression;
T(expression);

// C++ style cast or new-style
const_cast<T> (expression)
dynamic_cast<T> (expression)
reinterpret_cast<T> (expression)
static_cast<T> (expression)

// 注意下面的例子
class Window {
public:
    virtual void onResize();
};

class SpecialWindow {
public:
    virtual void onResize() {
        static_cast<Window>(*this).onResize();
        //something specialWindow would do
    }
};

// 这种做法的问题在于onResize()作用的对象是static_cast去Windows指针时创立的一个临时对象
// 不要理解static_cast 做的工作只是换了个指针什么的

// 正确做法：
class SpecialWindow {
public:
    virtual void onResize() {
    Window::onResize();
        
    }
};

// 总之，使用转型要慎重，尤其dynamic_cast

/*
 * Clause 29
 */
// 尽量避免使用handle指向对象内部，handle包括引用，指针，迭代器
// 很有可能handle比对象更长寿

/*
 * Clause 30
 */
//exception 没有看

/* 
 * Clause 31
 */
// 透彻了解inlinging的里里外外
// 包括了 handle class及 interface class，来降低编译依赖。
// handle class, pImpl
// interface class, virtual function = 0 definition

/*
 * 函数调用过程 ！！！
 */

/* 
 * Clause 32
 */
// 从32开始进入设计模式 OO yeah！
// 确保 public  继承是 is a 的关系

/* 
 * Clause 33
 */
// 避免遮掩继承而来的名称
// 在继承时，派生类中的函数名会覆盖父类中的函数，要使用父类中函数，则需要在
// 子类中使用using 或者使用转发函数

/*
 * Clause 34
 */
// 区分接口继承和实现继承
class AirPlane {
public:
    virtual void fly() = 0;
};

// 对于纯虚函数，也可以给出一份实现，作为默认实现
void AirPlane::fly()
{
    move();
}

class ModelA: public AirPlane
{
    virtual void fly();
};

void ModelA::fly()
{
    AirPlane::fly();
}

class ModelC: public AirPlane
{
    virtual void fly();
};

void ModelC::fly()
{
    //我们自己定义ModelC的飞行方式
}
//-------------------------------
// 以上方式 纯虚函数也有实现！ 但是把默认的实现方式和
// 接口定义混在一起不能把实现定义成protect了， 如下所示
//-------------------------------
class AirPlane {
public:
    virtual void fly() = 0;
protected:
    void defaultFly();
};

void AirPlane::defaultFly()
{
    move();
}

class ModelA: public AirPlane
{
    virtual void fly();
}

void  ModelA::fly()
{
    defaultFly();
}

class ModelC: public AirPlane
{
    
};
// 如果 ModelC没有定义自己的飞行函数，则不会通过编译！！！

// 相比而言，上面这种显式定义default飞行函数，在子类中需要时，再显式调用的方法比下面
// 的方法安全多了

class AirPlane {
public:
    virtual void fly();
};

void AirPlane::fly()
{
    //仅适用于当前所有飞机型号的飞行
    move();
}

class ModelNew: AirPlane
{
};

AirPlane* pModelNew = new ModelNew();
pModelNew->fly();
// 就会有严重的问题，因为基类中的飞行函数不适用于新型飞机！！！！！！！！！！！！！！！

// 总结下 ： 这就是为什么这一个小节名字是
// 区分接口继承和实现继承


/* Clause 36
 *
 */
//涉及到设计模式的问题，比较有趣，值得深究
//基本上是virtual方法的替代和std::tr1::function<int/*返回值*/(参数值)>的作用

/* Clause 37
 */
// 不要重新定义继承而来的virtual函数的默认参数，
// 因为调用虚函数表中的哪一个函数是动态绑定的，而默认参数是静态绑定，编译期间决定的
// 可以使用 NVI, non virtual interface来改变这种设计
//
class Base {
public:
    enum class COLOR{RED, BLUE, GREEN};
    virtual void draw(COLOR color = RED);
private:
    void doDraw();
};

void Base::draw()
{
    doDraw();
}

// 然后子类可以继承draw函数，并使用默认参数，同时可以重写父类中的private doDraw函数

/* Clause 38 39 */
// 还没有看

/* Clause 40 */
// 没有细看

/* Clause 41 */
//模版编程
