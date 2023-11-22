#include <iostream>
#include <string>
using namespace std;
class Cat
{
private:
    string name;
    int age;
public:
    Cat(){}
    Cat(string name, int age){
        this->name = name;
        this->age = age;
    }
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
};
int main(int argc, char const *argv[])
{
    // Cat cat("Tom", 3); cách thông thường
    // cout << "Name: " << cat.getName() << endl;
    // cout << "Age: " << cat.getAge() << endl;
    // Cấp phát động:
    Cat *cat = new Cat("Tom", 3);
    cout << "Name: " << cat->getName() << endl; // Cách truy xuất có 2 cách
    cout << "Age: " << (*cat).getAge() << endl;
    return 0;
}
