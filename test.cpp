#include "SpreadsheetCell.h"

#include <iostream>
using std::cout;
using std::endl;

void test_func()
{
    SpreadsheetCell spCell(5);
    cout << spCell.getValue() << endl;
}

int main()
{
    test_func();
    cout << "A basic test has passed" << endl;    
    return 0;
}
