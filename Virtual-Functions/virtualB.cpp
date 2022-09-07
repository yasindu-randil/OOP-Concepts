
#include <iostream>

/* 
    * Behavior of virtual functions
    * Use of override identifier
*/
class Base
{
    public:
    virtual void show()
    {
        std::cout << "Base class show function called." << std::endl;
    }

    void display()
    {
        std::cout << "Base class display function called." << std::endl;
    }
};

class Derived : public Base
{
    public:
    // the override identifier is used to help both compiler and the developer
    // to make sure the base class function is overridden correctly.
    void show() override
    {
        std::cout << "Derived class show function called." << std::endl;
    }

    void display()
    {
        std::cout << "Derived class display function called." << std::endl;
    }
};



int main()
{

    Base * bPtr = new Base();
    bPtr->show();

    Derived * dPtr = new Derived();
    dPtr->show();


    Base * base = new Derived();
    // with virtual keyword, the binding will happen during the run time.
    base->show();
    // without virtual keyword, compiler will determine which function to call during the compile time.
    base->display();

    return 0;
}

