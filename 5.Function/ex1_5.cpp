#include <iostream>
#include <math.h>
using namespace std;
/*
    Hệ thống kiến thức chương 5: Hàm (hàm built in, hàm tự định nghĩa), tham số, đối số, tham chiếu, tham trị
    hàm nguyên mẫu, đệ quy
*/
/*
    Tạo hàm sum nhận vào 2 số nguyên và trả về tổng của 2 số đó.
*/
int sum(int a, int b){
    return a + b;
}
/*
    Tạo hàm tính giai thừa của n, với n là tham số.
*/
unsigned long long factor(int n){
    long result = 1;
    for(int i = 1; i <= n; i++){
        result *= i;
    }
    return result;
}
/*
    Tạo hàm kiểm tra xem số nguyên n có phải số nguyên tố hay không 
    với n là tham số của hàm. Nếu n là số nguyên tố thì in ra 1, ngược lại thì in ra 0.
*/
bool isPrime(int n){
    if(n == 0 || n == 1){
        return 0;
    }
    for(int i = 2; i < sqrt(n); i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}
int main(int argc, char const *argv[])
{
    int a = 1;
    int b = 2;
    cout << sum(a, b) << endl;
    cout << factor(5) << endl;
    cout << isPrime(b) << endl;
    return 0;
}
