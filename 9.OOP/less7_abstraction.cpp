#include <iostream>
using namespace std;

class Animal // abstract class
{
public:
    virtual void move() = 0;
    virtual void makeSound() = 0;
};
class Dog : public Animal
{
public:
    void move()
    {
        cout << "Dog moving.." << endl;
    }
    void makeSound()
    {
        cout << "Gaugau.." << endl;
    }
};
class Cat : public Animal
{
public:
    void move()
    {
        cout << "Cat moving.." << endl;
    }
    void makeSound()
    {
        cout << "Meowmeow.." << endl;
    }
};
int main(int argc, char const *argv[])
{
    Dog dog;
    dog.move();
    dog.makeSound();
    Cat cat;
    cat.move();
    cat.makeSound();
    return 0;
}
