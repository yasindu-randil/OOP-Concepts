
#include <iostream>

/* Person clss contains atleat one pure virtual function. This makes
   the Person class an abstract class. You cannot make objects for Person
   class since it is an abstract class. But you can add pointers or references to it.*/
class Person
{
    public:
    // Pure virtual function
    virtual void printAttack() =0;
    virtual ~Person() = default;

};

class Enemy : public Person
{
    public:

    void printAttack()
    {
        std::cout << "Enemy attack power = 50 " << std::endl;
    }
};

class Player : public Person
{
    public:

    void printAttack()
    {
        std::cout << "Player attack power = 75 " << std::endl;
    }
};



int main()
{
    Player player;
    Enemy enemy;

    Person * p = new Player ();
    p->printAttack();

    p = &enemy;

    p->printAttack();
    
    // Below code will generate compiletime error because abstract classes
    // cannot be instantiated.

    //Person p2;

    return 0;
}