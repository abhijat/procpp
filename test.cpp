#include "SpreadsheetCell.h"

#include <iostream>
using std::cout;
using std::endl;

void test_func()
{
    // Testing the default constructor
    SpreadsheetCell* spCell = new SpreadsheetCell();
    cout << spCell->getValue() << endl;
    delete spCell;
    spCell = NULL;
}

int main()
{
    test_func();
    cout << "A basic test has passed" << endl;    
    return 0;
}
