#include <iostream>
#include <fstream>
#include <string>
using namespace std;
/*
    Các cú pháp cơ bản làm việc với file
*/
struct Person{
    string name;
    int age;
    Person(){};
    Person(string _name, int _age){
        name = _name;
        age = _age;
    }
};
int main(int argc, char const *argv[])
{

    fstream fs;
    fs.open("test.txt");
    // fs.open("D:\\VS_C\\8.File");
    /*
        Kiểm tra file
    */
    // if(fs.is_open()){
    //     cout << "Mo file thanh cong";
    // }else{
    //     cout << "Mo file that bai";
    // }
    if(!fs.is_open()){
        return 1;
    }
    /*
        Ghi file
    */
    // fs << "Le Trong Nghia" << endl; // ghi "Hello, world!" vào file
    // fs << 2004;
    /*
        Đọc file
    */
    // string str;
    // int a;
    // getline(fs, str);
    // fs >> a;
    // cout << "Name: " << str << endl;
    // cout << "Size: " << a << endl;
    /*
        Đóng file
    */
    // fs.close();
    Person *persons = new Person[2];
    /* 
        Ghi dữ liệu
    */
    // persons[0] = Person("Nghia", 19);
    // persons[1] = Person("Giang", 20);
    // for(int i = 0; i < 2; i++){
    //     fs << persons[i].name << endl;
    //     fs << persons[i].age << endl;
    // }
    /*
        Đọc dữ liệu
    */
   for(int i = 0; i < 2; i++){
    getline(fs, persons[i].name);
    fs >> persons[i].age;
    fs.ignore();
   }
   for(int i = 0; i < 2; i++){
    cout << "Name: " << persons[i].name << ", age: " << persons[i].age << endl;
   }
    fs.close();
    return 0;
}
