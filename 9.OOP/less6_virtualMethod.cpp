#include <iostream>
using namespace std;

class Animal
{
public: 
    // void move()
    // them tu khoa virtual de tao phuong thuc ao
    virtual void move()
    {
        cout << "Animal move" << endl;
    }
    /* phuong thuc thuan ao: Khong the tao doi tuong tu class chua phuong thuc thuan ao va phai dinh nghia
        lai phuong thuc o lop con
    */
    virtual void move() = 0;
};
class Dog : public Animal
{
public: 
    void move()
    {
        cout << "Dog move" << endl;
    }
};
int main(int argc, char const *argv[])
{
    // Animal animal;
    // animal.move();
    Dog dog;
    dog.move();
    Animal *animal = new Dog;
    // Animal *animal = new Animal; --> Khong the tao doi tuong tu class chua phuong thuc thuan ao
    animal->move();
    return 0;
}
