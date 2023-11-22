/*
    --Luyện tập toán tử 3 ngôi--
*/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    /*
    Viết chương trình nhập vào 2 số nguyên a và b từ bàn phím, 
    sau đó sử dụng toán tử 3 ngôi để tìm số lớn hơn và in kết quả ra màn hình.
    */
    int a, b;
    cin >> a >> b;
    (a > b) ? cout << a : cout << b;
    /*
    Viết chương trình nhập vào 3 số nguyên a1, b1 và c1 từ bàn phím, 
    sau đó sử dụng toán tử 3 ngôi để tìm số lớn nhất và in kết quả ra màn hình.
    */
    int a1, b1, c1;
    cin >> a1 >> b1 >> c1;
    (a1 > b1 && a1 > c1) ? cout << a1 : (b1 > a1 && b1 > c1) ? cout << b1 : cout << c1;
    /*
    Viết chương trình nhập vào 1 số nguyên a2 từ bàn phím, sau đó sử dụng toán tử 3 ngôi để 
    in ra kết quả của phép tính a2 * 2 nếu a2 là số chẵn, và a2 * 3 nếu n là số lẻ.
    */
    int a2;
    cin >> a2;
    (a2 % 2 == 0) ? a2 * 2: a2 * 3;
    return 0;
}
