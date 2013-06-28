#include <iostream>
#include <stdexcept>

using namespace std;

int safe_divide(int num, int den)
{
    if (den == 0) {
        throw invalid_argument("Divide by zero");
    }
    return num/den;
}

int main()
{
    try {
        cout << safe_divide(5, 2) << endl;
        cout << safe_divide(5, 0) << endl;
        cout << safe_divide(5, 5) << endl;
    } catch (const invalid_argument& e) {
        cout << "Caught exception: " << e.what() << endl;
    }
}
