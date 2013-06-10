#include "SpreadsheetCell.h"

#include <iostream>
using std::cout;
using std::endl;

void test_func()
{
    SpreadsheetCell* spCell = new SpreadsheetCell();
    spCell->setString("100010");
    SpreadsheetCell spCell2;
    spCell2 = *spCell;
    cout << spCell2.getValue() << endl;
    delete spCell;
}

int main()
{
    test_func();
    cout << "A basic test has passed" << endl;    
    return 0;
}
