#include <iostream>
using namespace std;
/*
    - Nap chong: nap chong ham, nap chong toan tu
    - Ghi de
    - Phuong thuc ao
*/
class Calculator
{
public:
    // Nap chong ham constructor + ham add
    int x;
    Calculator(){}
    Calculator(int x){
        this->x = x;
    }
    int add(int a, int b)
    {
        cout << "Integer" << endl;
        return (a + b);
    }
    float add(float a, float b)
    {
        cout << "Float" << endl;
        return (a + b);
    }
};
class Point
{
public: 
    int x, y;
    Point(){}
    Point(int x, int y){
        this->x = x;
        this->y = y;
    }
    // nap chong toan tu + cho lop Point
    friend Point operator+(Point p1, Point p2)
    {
        Point p3;
        p3.x = p1.x + p2.x;
        p3.y = p1.y + p2.y;
        return p3;
    }
};
class Animal
{
public: 
    void move()
    {
        cout << "Animal move" << endl;
    }
};
class Dog : public Animal
{
public: 
    void move()
    {
        cout << "Dog move" << endl;
    }
    // ghi de phuong thuc move cua lop cha
    void parentMove()
    {
        Animal :: move();
    }
};
int main(int argc, char const *argv[])
{
    Calculator cal;
    int a = 1, b = 2;
    float c = 1.3, d = 1.5;
    cout << "a + b = " << cal.add(a, b) << endl;
    cout << "c + d = " << cal.add(c, d) << endl;
    Point p1(1, 2), p2(3, 4);
    // Point p3 = p1 + p2; --> Khong thuc hien duoc vi chua nap chong toan tu
    Point p3 = p1 + p2;
    cout << "P3 = " << p3.x << ", " << p3.y << endl;
    Animal animal;
    animal.move();
    Dog dog;
    dog.move();
    dog.parentMove();

    return 0;
}
