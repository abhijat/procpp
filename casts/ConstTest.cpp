#include <iostream>

using namespace std;
void some_func(char* ptr)
{
    cout << *ptr << endl;
    return;
}

int main()
{
    const char* foo = "foo";
    some_func(const_cast<char*>(foo));
    return 0;
}
