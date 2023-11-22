#include <iostream>
#include <string>
// Con trỏ và Struct
using namespace std;
struct Student{
    string name;
    int age;
    Student(){}
    Student (string _name, int _age){
        name = _name;
        age = _age;
    }
};
int main(int argc, char const *argv[])
{
    Student student("Long", 21); // Stack
    // Student *std_ptr = &student; // con trỏ quản lí vùng nhớ, không cần delete nếu delete sẽ gặp lỗi runtime
    Student *std_ptr = new Student("Long", 21); // Cấp phát động Heap
    cout << (*std_ptr).name << endl;
    cout << std_ptr->name << std_ptr->age << endl;
    delete std_ptr;
    cout << student.name << endl;
    return 0;
}
