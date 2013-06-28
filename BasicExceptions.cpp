#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <exception>

using namespace std;

class ErrorInfo
{
    public:
        ErrorInfo(const string& in_file_name) :
            m_file_name(in_file_name)
        {
        }

        string get_error() const
        {
            switch(m_error_code) {
                case 0:
                    return "File not found";
                    break;
                case 1:
                    return "Permission on file denied";
                    break;
                default:
                    return "Unknown error, aborting now";
                    break;
            }
        }
        
        void set_error(int in_err_code)
        {
            m_error_code = in_err_code;
        }

        const string get_file() const { return m_file_name; }

    private:
        const string m_file_name;
        int m_error_code;
};

void read_int_file(const string& file_name, vector<int>& dest)
{
    ifstream istr;
    int tmp;
    istr.open(file_name.c_str());
    if (istr.fail()) {
        ErrorInfo err(file_name);
        err.set_error(0);
        throw err;
    }
    while (istr >> tmp) {
        dest.push_back(tmp);
    }
    return;
}

int main()
{
    vector<int> some_ints;
    const string file_name = "./integers.txt";

    try {
        read_int_file(file_name, some_ints);
    } catch (const ErrorInfo& err) {
        cout << "Error whilst accessing " << err.get_file() << " : " << endl;
        cout << err.get_error() << endl;
        return 1;
    }

    for (size_t i = 0; i < some_ints.size(); i++) {
        cout << some_ints[i] << " ";
    }
    cout << endl;
}
