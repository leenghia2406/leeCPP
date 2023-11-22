#include <iostream>
#include <string>
using namespace std;
// class -- object
// 1 person, ten Le Trong Nghia, tuoi 19, dia chi Binh Thuan
class Person
{
public:
// Properties
    string name;
    int age;
// Constructors
    Person(){}
    Person(string _name, int _age, string _address){
        this->name = _name;
        this->age = _age;
        this->address = _address;
    }
// Methods
    void work()
    {
        cout << name << "is working... in" << address << endl;
    }
private:
    string address = "TP HCM";

};
int main(int argc, char const *argv[])
{
    Person person1;  
    Person person2("TN", 24, "HCM"); 
    person1.name = "Le Trong Nghia";
    person1.age = 19;
    // person1.address = "Binh Thuan";
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    // cout << "Address: " << person1.address << endl;
    person1.work();
    return 0;
}
