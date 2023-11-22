/*
    --Luyện tập switch case--
*/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
/*
    Viết chương trình nhập vào lựa chọn (+, -, *, /) và 2 số nguyên từ bàn phím.
    Nếu lựa chọn không hợp lệ thì hiển thị là "Lua chon khong hop le".
*/
    char luaChon;
    int a, b;
    cin >> luaChon;
    cin >> a >> b;
    switch (luaChon)
    {
        case '+': 
        cout << "Ket qua: " << a + b;
        break;
        case '-':
        cout << "Ket qua: " << a - b;
        break;
        case '*':
        cout << "Ket qua: " << a * b;
        break;
        case '/':
        cout << "Ket qua: " << a / b;
        break;
        default:
        cout << "Lua chon khong hop le";
    }
/*
    Viết chương trình nhập vào tháng và in ra màn hình tổng số ngày trong tháng đó, 
    nếu tháng nhập vào nhỏ hơn 1 hoặc lớn hơn 12 thì hiển thị ra là "Thang khong hop le".
*/  
    int month;
    cin >> month;
    switch(month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        cout << "Thang " << month << " co 31 ngay";
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        cout << "Thang " << month << " co 30 ngay";
        break;
        case 2:
        cout << "Thang " << month << " co 28 ngay";
        break;
        default: cout << "Thang khong hop le";
    }
/*
    Viết chương trình nhập vào lần lượt năm và tháng sau đó hiển thị ra màn hình tổng số ngày trong tháng đó 
    (nếu tháng nhỏ hơn 1 hoặc lớn hơn 12 thì hiển thị là "Thang khong hop le").
*/
    int year, month;
    cin >> year >> month;
    if(month < 1 || month > 12){
        cout << "Thang khong hop le";
        return 0;
    }
        switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        cout << "Thang " << month << " nam " << year << " co 31 ngay";
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        cout << "Thang " << month << " nam" << year << " co 30 ngay ";
        break;
        case 2:
        if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        {
            cout << "Thang " << month << " nam "<< year << " co 29 ngay";
        }else{
            cout << "Thang " << month << " nam "<< year << " co 28 ngay";
        }
        break;
        default: cout << "Thang khong hop le";
    return 0;
}
