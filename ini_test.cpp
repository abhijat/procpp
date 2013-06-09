#include <string>

class SomeClass
{
    protected:
        std::string mName;
};

int main()
{
    SomeClass someObj;
    someObj.mName = "Hi there";
    return 0;
}
