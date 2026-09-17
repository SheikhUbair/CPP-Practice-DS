#include <iostream>
using namespace std;

class Enemy 
{
    public:
    void Attack()
    {
     cout << "Enemey attacks" << endl;
    } 

    void Health()
    {
     cout << "Current Health is 100" << endl;
    }
};

class Zombie : public Enemy
{
    public:
    void Bite()
    {
     cout << "Zombie bites Player" << endl;
    }
};

class Baby_Zombie :  public Zombie
{
    public:
    void Run()
    {
     cout << "Baby-Zombie Runs faster than the player" << endl;
    }
};

int main()
{
    Baby_Zombie BZ1;

    BZ1.Attack();
    BZ1.Health();
    BZ1.Bite();
    BZ1.Run();

    return 0;
}