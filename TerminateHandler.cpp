#include <cstdlib>
#include <exception>
#include <fstream>
#include <iostream>
#include <stdexcept>

using namespace std;

void my_terminate()
{
    cout << "Uncaught exception" << endl;
    exit(1);
}

void always_fail()
{
    throw invalid_argument("");
}

int main()
{
    set_terminate(my_terminate);
    always_fail();
    return 0;
}
