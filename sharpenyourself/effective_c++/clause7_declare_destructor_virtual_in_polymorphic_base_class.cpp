/* 如果是基类，destructor定义成虚函数 ＊／

/* 不要在构造函数中使用虚函数 ,原因如下 */

class BaseClass
{
public:
    virtual void logMessage(std::string foo) = 0;
    BaseClass(std::string msg) {
        logMessage(msg);
    }
};

class Option : public BaseClass {
    virtual void logMessage(std::string foo);
};

void Option::logMessage()
{
    cout << "Option" <<endl;
}

//when we instantiate a new option
Option A;
/* 这时候调用的是Base的logMessage()会报错 ,而不是Option
 原因是在构造基类部分的时候，派生类部分还没有被初始化 */
class BaseClass
{
public:
    void logMessage(std::string foo);
    BaseClass(std::string msg) {
        logMessage(msg);
    }
};

void BaseClass::logMessage(std::string msg)
{
    // write to file,
    // save to database
}

class Option : public BaseClass {
public:
    std::string generateMessage();
    Option() : BaseClass(generateMessage()) {
    }
};

std::string Option::generateMessage()
{
    cout << "I am option, Number 10010 " <<endl;
}


class Future : public BaseClass {
public:
    std::string generateMessage();
    Future() : BaseClass(generateMessage()) {
    }
};

std::string Future::generateMessage()
{
    cout << "I am Future, Number 10011 " <<endl;
}
//so
Future A;
Option B;
/*
 这两个对象在instantiate的时候对应的纪录都能够留下
 */


