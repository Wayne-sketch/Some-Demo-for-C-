#include <iostream>
using namespace std;

class T5Base {
public:
    T5Base() :value(55) {}
    virtual ~T5Base() {}
    void test1() { cout << "T5Base test1..." << endl; }
    void test3() { cout << "value is " << value << endl; }
protected:
    int value;
};
 
class T5Derived : private T5Base {
public:
    T5Derived(){this->value =10;}
    using T5Base::test1;
    using T5Base::test3;
    using T5Base::value;
    void test2() { cout << "value is " << value << endl; }
};
int main()
{
    T5Base t5base;
    t5base.test1();
    T5Derived t5derived;
    t5derived.test1();
    t5derived.test2();
    t5derived.test3();
    //t5derived.value = 10;
    //t5derived.test3();
    return 0;
}
