#include <iostream>
using namespace std;
class base
{
public:
    void test()
    {
        cout << "base::test()" << endl;
    }
    void test(double)
    {
        cout << "base::test(double)" << endl;
    }
    void test(int)
    {
        cout << "base::test(int)" << endl;
    }
};
class derived : public base
{
public:
    virtual void test()
    {
        cout << "derived::test()" << endl;
    }
    using base::test;
};
 
int main(int argc, char **argv)
{
    derived *pb = new derived();
    pb->test(2.4);
    pb->test();
    return 0;
}