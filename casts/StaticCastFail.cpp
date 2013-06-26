#include <iostream>
#include <typeinfo>

class base
{
    public:
        base() {}
        virtual ~base() {}
};

class derived : public base
{
    public:
        derived() {}
        virtual ~derived() {}
        virtual void some_func() { std::cout << "derived" << std::endl; }
};

int main()
{
    base b;
    base& br = b;
    try {
        derived* dr = dynamic_cast<derived*>(&br);
        if (dr != NULL) {
            dr->some_func();
        } else {
            std::cout << "NULL returned from dynamic_cast" << std::endl;
        }
    } catch(const std::bad_cast&) {
        std::cout << "Bad cast" << std::endl;
    }
}
