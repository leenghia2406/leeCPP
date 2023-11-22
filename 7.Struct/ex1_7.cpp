#include <iostream>
#include <string>
using namespace std;
// Struct
struct Date{
    int day;
    int month;
    int year;
    Date(){}
    Date(int _day, int _month, int _year){
        day = _day;
        month = _month;
        year = _year;
    }
};
struct Student
{
    // properties
    string name;
    int age;
    Date date;
    // constructor
    // constructor có tham số thì object cũng phải có tham số
    Student(string _name, int _age, Date _date){
        name = _name;
        age = _age;
        date = _date;
    }
    // methods
    void run(){
        cout << "Running.....";
    }
    void print(){
        cout << "Ten: " << name << ", tuoi: " << age;
        cout << ",ngay sinh: " << date.day << "/" << date.month << "/" << date.year;
    }
};
int main(int argc, char const *argv[])
{
    Student student1("Trong Nghia", 19, Date(24, 6, 2004));
    // Student student1{"Trong Nghia", 19 };
    // Student student2 = Student {"Nghia", 20};
    // cout << "Nhap ten: ";
    // getline(cin, student1.name);
    // cout << "Nhap tuoi: ";
    // cin >> student1.age;
    cout << "Ten: " << student1.name << endl;
    cout << "Tuoi: " << student1.age << endl;
    cout << "Ngay sinh: " << student1.date.day << "/" << student1.date.month << "/" << student1.date.year 
    << endl;
    // cout << "Ten: " << student2.name << endl;
    // cout << "Tuoi: " << student2.age << endl;
    Student students[3] = {
        Student("Long", 19, Date(1, 1, 2004)),
        Student("Nam", 19, Date(2, 2, 2004)),
        Student("Tuan", 19, Date(3, 3, 2004))
    };
    for(int i = 0; i < 3; i++){
        students[i].print();
    }
    student1.run();
    return 0;
}

