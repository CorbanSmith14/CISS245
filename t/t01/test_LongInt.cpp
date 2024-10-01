#include <iostream>
#include <limits>
#include "LongInt.h"

const int MAX_BUFF = 1024;

void test_print() {
    // LongInt i
    // std::cout <<
}

void test_get_LongInt_C() {
    char a[MAX_BUFF];
    //std::cin.getline(a, MAX_BUFF);
    std::cin >> a;
    LongInt i = get_LongInt(a);
    std::cout << i << std::endl;
}

void test_get_LongInt_I() {
    int a;
    std::cin >> a;
    LongInt i = get_LongInt(a);
    std::cout << i << std::endl;
}

void test_eq() {
    char a[MAX_BUFF];
    char b[MAX_BUFF];
    // std::cin.getline(a, MAX_BUFF);
    // std::cin.getline(b, MAX_BUFF);
    LongInt i = get_LongInt(a);
    LongInt j = get_LongInt(b);
    std::cout << (i == j) << std::endl;
}

void test_neq() {
    char a[MAX_BUFF];
    char b[MAX_BUFF];
    std::cin.getline(a, MAX_BUFF);
    std::cin.getline(b, MAX_BUFF);
    LongInt i = get_LongInt(a);
    LongInt j = get_LongInt(b);
    std::cout << (i != j) << std::endl;
}

void test_lt() {
    char a[MAX_BUFF];
    char b[MAX_BUFF];
    std::cin.getline(a, MAX_BUFF);
    std::cin.getline(b, MAX_BUFF);
    LongInt i = get_LongInt(a);
    LongInt j = get_LongInt(b);
    std::cout << (i < j) << std::endl;
}

void test_gt() {
    char a[MAX_BUFF];
    char b[MAX_BUFF];
    std::cin.getline(a, MAX_BUFF);
    std::cin.getline(b, MAX_BUFF);
    LongInt i = get_LongInt(a);
    LongInt j = get_LongInt(b);
    std::cout << (i > j) << std::endl;
}

void test_lt_eq() {
    char a[MAX_BUFF];
    char b[MAX_BUFF];
    std::cin.getline(a, MAX_BUFF);
    std::cin.getline(b, MAX_BUFF);
    LongInt i = get_LongInt(a);
    LongInt j = get_LongInt(b);
    std::cout << (i <= j) << std::endl;
}

void test_gt_eq() {
    char a[MAX_BUFF];
    char b[MAX_BUFF];
    std::cin.getline(a, MAX_BUFF);
    std::cin.getline(b, MAX_BUFF);
    LongInt i = get_LongInt(a);
    LongInt j = get_LongInt(b);
    std::cout << (i >= j) << std::endl;
}

void test_add() {
    char a[MAX_BUFF];
    char b[MAX_BUFF];
    std::cin.getline(a, MAX_BUFF);
    std::cin.getline(b, MAX_BUFF);
    LongInt i = get_LongInt(a);
    LongInt j = get_LongInt(b);
    std::cout << i + j << std::endl;
}

void test_sub() {
    char a[MAX_BUFF];
    char b[MAX_BUFF];
    std::cin.getline(a, MAX_BUFF);
    std::cin.getline(b, MAX_BUFF);
    LongInt i = get_LongInt(a);
    LongInt j = get_LongInt(b);
    std::cout << (i - j) << std::endl;
}

int main() {
    int option;
    std::cin >> option;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
    switch(option) {
        case 1:
            test_print();
            break;
        case 2:
            test_get_LongInt_C();
            break;
        case 3:
            test_get_LongInt_I();
            break;
        case 4:
            test_eq();
            break;
        case 5:
            test_neq();
            break;
        case 6:
            test_lt();
            break;
        case 7:
            test_gt();
            break;
        case 8:
            test_sub();
            break;
        case 9:
            test_add();
            break;
    }
    
    return 0;
}
