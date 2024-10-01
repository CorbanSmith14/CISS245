// Date.cpp

#include <iostream>
#include "Date.h"

Date::Date() // default constructor
    : yyyy_(1970), mm_(1), dd_(1)
{
//    std::cout << "Date::Date() ...\n";
}
    
Date::Date(int yyyy, int mm, int dd)
    : yyyy_(yyyy), mm_(mm), dd_(dd)
{
    // std::cout << "Date::Date(int,int,int) "
    //           << yyyy << ' '
    //           << mm << ' '
    //           << dd << "...\n";
}

Date::Date(const Date & date)
    : yyyy_(date.yyyy_), mm_(date.mm_), dd_(date.dd_)
{}

void Date::init(int yyyy, int mm, int dd)
{
    yyyy_ = yyyy;
    mm_ = mm;
    dd_ = dd;
}

void Date::print()
{
    std::cout << yyyy_ << '-' << mm_ << '-' << dd_ << '\n';
}

void Date::add_y(int y)
{
    yyyy_ += y;
}

void Date::add_m(int m)
{
    mm_ += m;
}

void Date::add_d(int d)
{
    dd_ += d;
}

void Date::add_m_d(int m, int d)
{
    //mm_ += m;
    //dd_ += d;

    // another way:
    add_m(m);
    add_d(d);
}

void Date::add_y_m_d(int y, int m, int d)
{
    add_y(y);
    add_m_d(m, d);
}

void Date::add_date(const Date & date)
{
    add_y_m_d(date.yyyy_, date.mm_, date.dd_);
}

bool Date::equals(const Date & date)
{
    return (yyyy_ == date.yyyy_ &&
        mm_ == date.mm_ &&
        dd_ == date.dd_);
}
bool Date::operator==(const Date & date)
{
    return equals(date);
}
