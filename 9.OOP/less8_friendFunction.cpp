#include <iostream>
using namespace std;

class Point
{
private:
    int x, y;
public:
    Point (){}
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    /*
        ham ban: Khong the thua ke neu co class con, co the dinh nghia ben trong hoac ngoai class
        co the goi o bat cu dau trong chuong trinh
        uu diem: co the truy cap cac thanh vien private hoac protected ma ko can setter hay getter, cai thien
        tinh bao mat, cac thanh vien private hoac protected ko bi truy cap ben ngoai, tang hieu nang
    */ 
    friend void printPoint(Point point);
    // {
    //     cout << point.x << " " << point.y << endl;
    // }
    friend Point operator+(Point p1, Point p2)
    {
        Point p3;
        p3.x = p1.x + p2.x;
        p3.y = p1.y + p2.y;
        return p3;
    }
};
void printPoint(Point point) 
{
    // cout << point.x << ", " << point.y << endl; --> Loi vi x va y là private
    cout << point.x << ", " << point.y << endl;
}

int main(int argc, char const *argv[])
{
    printPoint(Point(1, 2));
    return 0;
}
