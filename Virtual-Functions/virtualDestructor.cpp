
#include <iostream>
/*
    By adding a virtual destructor, the Tank class destructor will also get called. Otherwise 
    it will not get called.
*/
class Player
{
    public:
    Player()
    {
        std::cout << "Person class created " << std::endl;
    }

    virtual ~Player()
    {
        std::cout << "Person class destroyed " << std::endl;
    }

    virtual void printDefense()
    {
        std::cout << "Default hero defense = 75 " << std::endl;
    }

};

class Tank : public Player
{
    public:
    Tank()
    {
        std::cout << "Tank class created " << std::endl;
    }

    ~Tank()
    {
        std::cout << "Tank class destroyed " << std::endl;
    }

    void printDefense() override
    {
        std::cout << "Tank hero defense = 150 " << std::endl;
    }
};




int main()
{
 
    Tank tank;

    return 0;
}