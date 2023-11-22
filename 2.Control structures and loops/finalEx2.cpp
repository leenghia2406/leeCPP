#include <iostream>
#include <cmath>
using namespace std;
int main()
{
/*
    Viết chương trình giải phương trình bậc nhất 1 ẩn ax + b = 0, trong đó a và b là các hệ số nhập từ bàn phím
*/
    float a, b;
    cin >> a >> b;
    if(a == 0 && b == 0){
        cout << "Phuong trinh co vo so nghiem";
    }else if(a == 0 && b != 0){
        cout << "Phuong trinh vo nghiem";
    }else if(a != 0){
        cout << "Phuong trinh co nghiem duy nhat: " << -b/ a;
    }
/*
    Viết chương trình nhập vào số nguyên dương n (n <= 100), tính và hiển thị tổng các số tự nhiên lẻ
    từ 1 đến n
*/
    int n, sum;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        if(i % 2 != 0){
            sum += i;
        }
    }
    cout << "Ket qua la " << sum << endl;
/*
    Viết chương trình nhập vào độ F rồi tính và hiển thị độ C
*/
    float degF;
    cout << "F = ";
    cin >> degF;
    float degC = (degF -32) / 1.8;
    cout << "C = " << degC << endl;
/*
    Viết chương trình nhập vào số x từ bàn phím và kiểm tra xem x có phải là số nguyên tố không
*/
    int x;
    cin >> x;
    bool result = true;
    for(int i = 2; i <= sqrt(x); i++){
        if(x % i == 0){
            result = false;
            break;
        }
    }
    if(result == true){
        cout << x << " la so nguyen to";
    }else{
        cout << x << " khong phai la so nguyen to"; 
    }
/*
    Viết chương trình nhận vào số nguyên dương z từ bàn phím, đếm số chữ số của số đó
*/
    int z;
    cin >> z;
    int count = 0;
    while(z != 0){
        z /= 10;
        count++;
    }
    cout << "Ket qua la " << count;
/*
    Viết chương trình nhận vào số nguyên dương y từ bàn phím, tính tổng các chữ số tạo nên số đó
*/
    int y;
    cin >> y;
    int res = 0;
    while(y != 0){
        res += (y % 10);
        y /= 10;
    }
    cout << "Ket qua la" << res;
    return 0;
}
    