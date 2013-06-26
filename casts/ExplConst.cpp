#include <iostream>
#include <string>

class foo
{
    public:
        foo(const std::string s)
        {
            m_string = s;
        }
        std::string get() const { return m_string; }
    private:
        std::string m_string;
};

int main()
{
    std::string s = "hi there";
    foo f = s;
    std::cout << f.get() << std::endl;
    return 0;
}
