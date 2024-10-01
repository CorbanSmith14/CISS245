// Date.h

#ifndef DATE_H
#define DATE_H

class Date
{
  public:
    // member functions = methods
    void init(int, int, int);
    Date(int, int, int);
    Date(); // default constructor
    Date(const Date &); // copy constructor
    ~Date();
    void add_y(int);
    void add_m(int);
    void add_d(int);
    void add_m_d(int, int);
    void add_y_m_d(int, int, int);
    void add_date(const Date &);
    void print() const;
    bool equals(const Date &) const;
    bool operator==(const Date &) const;
    const Date & max_year(const Date &) const;
    void f() const;
  private:
    int mm_;
    int dd_;
    int yyyy_;
};


#endif
