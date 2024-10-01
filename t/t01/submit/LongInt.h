#ifndef LONGINT_H
#define LONGINT_H

struct LongInt
{
    int x_[1000] = {0};
    int size_;
    int sign_;
};

std::ostream & operator<<(std::ostream &, const LongInt &);
LongInt get_LongInt(const char s[]);
LongInt get_LongInt(int i);
bool operator==(const LongInt &, const LongInt &);
bool operator!=(const LongInt &, const LongInt &);
bool operator<(const LongInt &, const LongInt &);
bool operator<=(const LongInt &, const LongInt &);
bool operator>(const LongInt &, const LongInt &);
bool operator>=(const LongInt &, const LongInt &);
LongInt operator+(const LongInt &, const LongInt &);
LongInt operator+(int i, const LongInt & j);
LongInt operator+(const LongInt & i, int j); 
LongInt operator-(const LongInt &, const LongInt &);
LongInt operator-(const LongInt & i, int j);
LongInt operator-(int i, const LongInt & j);

#endif

