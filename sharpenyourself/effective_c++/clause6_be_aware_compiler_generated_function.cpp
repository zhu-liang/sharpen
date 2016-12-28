/* This is to help understand effective C++ from 
 * Scott Meyers
 * as named sharpen yourself
 */
/*
1. compiler will add silienty for us 
   with copy constructor
        copy assignment
        copy constructor
   if they are used in the code, for example, shown as follows
*/
class Foo {
    int         iVal;
    std::string strName;
};
void TestFun()
{
    Foo A;
    Foo B(A);
    B = A;
}
/* 
2. what if strName is not declared as string, instead, string& ?
Because chaning reference is not allow in C++, 
Compiler will give up generate copy assignment and copy constructor for Foo then
*/

/*
3. in the case the string is used, 
 in the compiler generated copy assignment and copy constructor, string's copy assignment and copy constructor will be used, and for basic type, int, bit by
 bit copy will be used
*/

/*
4. If we want Foo to be uncopyable, so we need to explicitly declare our own 
 copy constructor and copy assignment to prevent compiler from generating for us.
 and we can declare these two functions as private. so it cannot be used.
 shown as follows:
 */
class Foo {
    int iVal;
    std::string strName;
private:
    Foo(const Foo&);
    Foo& operator=(const Foo& );
};
/* or */
class uncopyable {
    uncopyable() {}
    ~uncopyable() {}
private:
    uncopyable(const uncopyable&);
    uncopyable& operator=(const uncopyable&);
};

/* then Foo_new 如果我们有用到拷贝Foo_new, 则编译器生成的默认拷贝构造函数会去调用uncopyable的拷贝构造函数。会失败，这样也阻止了拷贝。
 ＊／
class Foo_new private: uncopyable {
    
}

/*
5. In previous example, normally, when we write copy assignment and copy constructor, const Foo& can used to capture right value, 
   重要的事情 中文也来一遍，const引用类型可以搞定右值。
*/



