#include <iostream>
using namespace std;
/* 
    Viết chương trình nhận vào bán kinh hình tròn và in ra màn hình chu vi hình tròn đó, dúng Struct
*/
struct  Circle
{
    float radius;
    Circle (float _radius){
        radius = _radius;
    }
    friend istream& operator>>(istream &is, Circle &c){
        cout << "Nhap ban kinh: ";
        is >> c.radius;
        return is;
    }
    float parameter(){
        return 2 * 3.14 * radius;
    }
    float area(){
        return 3.14 * radius * radius;
    }
};
int main(int argc, char const *argv[])
{
    Circle circle(0);
    cin >> circle;
    cout << "Chu vi hinh tron: " << circle.parameter() << endl;
    cout << "Dien tich hinh tron: " << circle.area() << endl;
    return 0;
}

