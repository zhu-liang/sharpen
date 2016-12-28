class SampleClass {
    int iVal;
};

int returnStaticVal()
{
    //something may cause exception
    return 100;
}
void testFunc(std::tr1::shared_ptr<SampleClass> param, int iVal)
{
    
}

/* Instead of following */
testFunc(std::tr1::shared_ptr<SampleClass> (new SampleClass()), returnStaticVal());

/* Not GOOD !!!
如果调用顺序：
1. new SampleClass
2. returnStaticVal（）；
3. std::tr1::shared_ptr<SampleClass>()对象的构造函数
如果在第三步有问题，则new出来的东西没有被放进智能指针中
＊／
/* so we should use */
std::tr1::shared_ptr<SampleClass> pm(new SampleClass());
testFunc(pm, returnStaticVal());

