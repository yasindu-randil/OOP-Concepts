
#include <iostream>

/* 
    * Behavior of virtual functions
    * Use of override identifier
*/
class Base
{
    public:
    Base()
    {
        //std::cout << "Inside Base Constructor" << std::endl;
    }

    virtual void show()
    {
        std::cout << "Base class show function called." << std::endl;
    }
};

class Derived : public Base
{
    public:
    Derived()
    {
        //std::cout << "Inside Derived Constructor" << std::endl;
    }

    // the override identifier is used to help both compiler and the developer
    // to make sure the base class function is overridden correctly.
    void show() override
    {
        std::cout << "Derived class show function called." << std::endl;
    }
};



int main()
{

    /*
    std::cout << "Base base;"<< std::endl;
    Base base;

    std::cout << std::endl;

    std::cout << "Derived derived;"<< std::endl;
    Derived derived; */

    std::cout << std::endl;

    Derived  derivedObj;

    Base * base;
    Base baseObj;
    //
    base = &derivedObj;
    base->show();

    base = &baseObj;
    base->show();

    return 0;
}

