// main.cpp
#include <iostream>
#include "Date.h"

int main()
{
    Date today; // today is an object of type Date
    today.init(2024, 2, 26);
    Date * p = new Date;
    p->init(2024, 2, 26);

    today.print();
    today.add_y(1); today.print();
    today.add_m(2); today.print();
    today.add_d(3); today.print();
    today.print();
    today.add_m_d(5, 6);
    today.print();
    today.add_y_m_d(10, 3, 2);
    today.print();
    Date delta;
    delta.init(7, 8, 9);
    today.add_date(delta);
    today.print();

    today.init(12, 12, 13);
    Date today2(12, 12, 13);
    std::cout << today.equals(today2) << '\n';
    std::cout << (today == today2) << '\n';
    
    // ERROR: Date::yyyy_ is private !!!
    //std::cout << today.yyyy_ << '\n';

    Date today3 = Date(12, 12, 15);
    Date * q = new Date(12, 12, 15);

    Date today4(today);
    Date today5 = today;

    today3.add_y(2000);
    std::cout << "today:"; today.print(); 
    std::cout << "today3:"; today3.print();
    Date today6 = today.max_year(today3);
    std::cout << "today6:"; today6.print();

    std::cout << "&today6: " << &today6 << '\n';
    today6.f();
    today6.add_y(5);
    std::cout << "today6:"; today6.print();
 
    return 0;
}
