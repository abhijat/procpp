#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

void read_int_file(const string& file_name, vector<int>& dest)
{
    ifstream istr;
    int tmp;
    istr.open(file_name.c_str());
    while (istr >> tmp) {
        dest.push_back(tmp);
    }
    return;
}

int main()
{
    vector<int> some_ints;
    const string file_name = "./integers.txt";
    read_int_file(file_name, some_ints);
    for (size_t i = 0; i < some_ints.size(); i++) {
        cout << some_ints[i] << " ";
    }
    cout << endl;
}
