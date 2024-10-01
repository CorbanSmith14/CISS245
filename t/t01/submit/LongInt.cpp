#include <iostream>
#include <cmath>
#include "LongInt.h"

// Output stream operator for LongInt
std::ostream & operator<<(std::ostream & cout, const LongInt & Int)
{
    if (Int.sign_ == -1)
    {
        std::cout << '-';
    }
    for (int i = Int.size_ - 1; i >= 0; i--)
    {
        std::cout << Int.x_[i];
    }
    return cout;
}

// Function to convert a character array to LongInt
LongInt get_LongInt(const char s[])
{
    int n = 0;
    while(s[n] != '\0')
    {
        n++;
    }
    LongInt result;
    result.sign_ = 1;
    result.size_ = 0;
    if(s[0] == '-')
    {
        result.sign_ = -1;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (int(s[i]) >= 48 && int(s[i]) <= 57)
        {
            result.x_[result.size_] = s[i] - 48;
            result.size_++;
        }
    }
    // std::cout << "get\n";
    return result;
}

// Function to convert an integer to LongInt
LongInt get_LongInt(int x)
{
    LongInt result;
    int y = x;
    int n = 0;
    
    if (x == 0) 
        n = 1;
    
    while (y != 0)
    {
        y /= 10;
        n++;
    }

    result.sign_ = 1;
    
    if (x < 0)
    {
        result.sign_ = -1;
        x *= -1;
    }

    if (n == 1)
    {
        result.x_[result.size_] = x;
        result.size_++;
    }
    else
    {
        for (int i = n - 1; i >= 0; i--)
        {
            result.x_[result.size_] = x / int(pow(10, result.size_)) % 10;
            result.size_++;
        }
    }
    return result;
}

// Comparison operators for LongInt
bool operator==(const LongInt & a, const LongInt & b)
{
    if (a.sign_ != b.sign_ || a.size_ != b.size_)
        return false;
    
    for (int i = 0; i < a.size_; ++i)
    {
        if (a.x_[i] != b.x_[i])
            return false;
    }
    return true;
}

bool operator!=(const LongInt & a, const LongInt & b)
{
    return !(a == b);
}

bool operator<(const LongInt & a, const LongInt & b)
{
    if (a.sign_ != b.sign_)
        return a.sign_ < b.sign_;
    
    if (a.size_ != b.size_)
        return (a.sign_ == 1) ? (a.size_ < b.size_) : (a.size_ > b.size_);
    
    for (int i = a.size_ - 1; i >= 0; --i)
    {
        if (a.x_[i] > b.x_[i])
            return false;
        else if (a.x_[i] < b.x_[i])
            return true;
    }
    return false;
}

bool operator<=(const LongInt & a, const LongInt & b)
{
    return (a < b || a == b);
}

bool operator>(const LongInt & a, const LongInt & b)
{
    return !(a <= b);
}

bool operator>=(const LongInt & a, const LongInt & b)
{
    return !(a < b);
}

// Absolute value function for LongInt
LongInt absL(const LongInt & i)
{
    LongInt ab = i;
    ab.sign_ = 1;
    return ab;
}

// Addition operator for LongInt
LongInt operator+(const LongInt & i, const LongInt & j)
{
    LongInt a, b;
    if (i.size_ >= j.size_ && absL(i) > absL(j))
    {
        a = i;
        b = j;
    }
    else
    {
        b = i;
        a = j;
    }

    LongInt result;
    result.size_ = a.size_;
    result.sign_ = (absL(a) > absL(b) ? a.sign_ : b.sign_);
    int carry = 0;
    int op_sign = (i.sign_ == j.sign_ ? 1 : -1);

    for (int i = 0; i < result.size_; i++)
    {
        result.x_[i] = a.x_[i] + op_sign * abs(b.x_[i]) + carry;

        if (result.x_[i] < 0)
        {
            result.x_[i] += 10;
            a.x_[i + 1] -= 1;
        }
            
        carry = result.x_[i] / 10;
        result.x_[i] %= 10;
    }
    
    if (carry != 0)
    {
        result.x_[result.size_] = abs(carry);
        result.size_++;
    }

    while (result.size_ != 1 && result.x_[result.size_ - 1] == 0)
    {
        result.size_--;
    }
    
    return result;
}

// Addition operators for LongInt with integers
LongInt operator+(int i, const LongInt & b)
{
    LongInt a = get_LongInt(i);
    return a + b;
}

LongInt operator+(const LongInt & i, int j)
{
    return j + i;
}

// Subtraction operators for LongInt
LongInt operator-(const LongInt & a, const LongInt & b)
{
    LongInt result;
    LongInt b1 = b;
    b1.sign_ *= -1;
    result = a + b1;
    
    return result;
}

LongInt operator-(const LongInt & i, int j)
{
    LongInt a = get_LongInt(j);
    return i - a;
}

LongInt operator-(int i, const LongInt & j)
{
    LongInt a = get_LongInt(i);
    return a - j;
}
