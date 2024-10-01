#include <iostream>

class IntPointer
{
public:
    IntPointer()
        : p_(new int)
    {}
    ~IntPointer()
    {
        std::cout << "IntPointer::~IntPointer() called\n";
        delete p_;
    }
    int & dereference()
    {
        return *p_;
    }
    int & operator*()
    {
        return *p_;
    }
private:
    int * p_;
};

void f()
{
    int * p = new int;
    *p = 42;
    delete p;
    p = new int;
    *p = 4;
    delete p;

    IntPointer q;
    std::cout << q.dereference() << '\n';
    q.dereference() = 42;
    std::cout << q.dereference() << '\n';

    *q = 99; // *it === it.operator*()
    std::cout << (*q) << '\n';
} // q.~IntPointer()

int main()
{
    f();
    return 0;
}
