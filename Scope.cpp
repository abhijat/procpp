#include <iostream>
using namespace std;

class Demo
{
    public:
        static int get() { return 5; }
};
int get() { return 10; }
namespace NS
{
    int get() { return 20; }
};

int main()
{
    cout << Demo::get() << endl;
    cout << get() << endl;
    cout << NS::get() << endl;
}
