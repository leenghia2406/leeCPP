#include <iostream>
using namespace std;

class Animal
{
public:
    int weight;
    void run()
    {
        cout << "Animal is running.." << endl;
    }
};
class Cat : public Animal 
{
public:
    string name;
    void eat()
    {
        cout << "Cat is eating..." << endl;
    }
};
int main(int argc, char const *argv[])
{
    Cat cat;
    cat.weight = 24;
    cat.name = "Tom";
    cout << "Name " << cat.name << endl;
    cout << "Weight " << cat.weight << endl;
    cat.run();
    return 0;
}
