/*
    Hệ thống kiến thức chương 2: Control structure and loops:
    cấu trúc if else, switch case, toán tử 3 ngôi, vòng lặp, break, continue, goto, return
*/
/*
    --Luyện tập if - else--
*/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{   
/*
    Viết chương trình nhập vào 1 số nguyên và kiểm tra xem đó là số chẵn hay số lẻ.
*/
    int a;
    cin >> a;
    if(a % 2 == 0){
        cout << a << " là số chẵn" << endl;
    }else{
        cout << a << " là số lẻ" << endl;
    }
/*
   Viết chương trình nhập vào lần lượt lương cơ bản và tổng tiền lương. 
   Tính và hiển thị số tiền thực lĩnh ra màn hình.
   Số tiền thực lĩnh = Tổng tiền - Tiền thuế
   Tiền thuế = 0 nếu tổng tiền <= lương cơ bản, ngược lại thì tiền thuế = (Tổng tiền - Lương cơ bản) * 0.1
*/
    float luongCoBan, tongTien;
    cin >> luongCoBan >> tongTien;
    float tienThue;
    if(tongTien <= luongCoBan){
        tienThue = 0;
    }else{
        tienThue = (tongTien - luongCoBan) * 0.1;
    }
    float thucLinh;
    thucLinh = tongTien - tienThue;
    cout << "Thuc linh: " << thucLinh << endl;
/*
    Viết chương trình nhập vào số năm. Kiểm tra xem đó có phải là năm nhuận hay không?
*/
    int year;
    cin >> year;
    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
        cout << year << " la nam nhuan";
    }else{
        cout << year << " khong phai la nam nhuan";
    }
    return 0;
}
