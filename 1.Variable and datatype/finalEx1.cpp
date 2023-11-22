/*
    Exercise 1: Nhập vào 2 số a và b, in ra màn hình tổng hiệu của 2 số đó
    Exercise 2: Nhập vào một chữ cái viết thường bất kì, in ra màn hình chữ cái đó ở dạng viết hoa
    Exercise 3: Nhập vào hai số nguyên a, b. Hoán đổi giá trị 2 số đó và đưa ra màn hình
    Exercise 3: Nhập vào hai số nguyên dương a và b (a và b không trùng giá trị). Hãy in ra màn hình số nhỏ hơn
    (không dùng cấu trúc if else hoặc toán tử 3 ngôi)
*/
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    // exercise 1
    int a, b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    printf("a + b %d\n", a + b);
    printf("a - b %d\n", a - b);
    //exercise 2
    char c;
    cout << "chu cai viet thuong: ";
    cin >> c;
    cout << "chu cai viet hoa: " << (char)(c - 32) << endl;
    //exercise 3
    int a3, b3;
    cout << "a = ";
    cin >> a3;
    cout << "b = ";
    cin >> b3;
    int temp = a3;
    a3 = b3;
    b3 = temp;
    cout << "giá trị của a3 là: " << a3 << endl;
    cout << "giá trị của b3 là: " << b3 << endl;
    //exercise 4
    int a4, b4;
    cout << "a4 = ";
    cin >> a4;
    cout << "b4 = ";
    cin >> b4;
    int tong = a4 + b4;
    int hieu = abs(a4 - b4);
    cout << "Gia tri nho hon la: " << (tong - hieu) / 2<< endl;
    return 0;
}
