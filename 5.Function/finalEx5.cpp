#include <iostream>
#include <math.h>
using namespace std;
/*
    Viết hàm kiểm tra số nguyên tố
*/
bool isPrime(int n){
    if(n == 0 || n == 1) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
/*
    Viết hàm nhận vào 1 số nguyên dương n, in ra màn hình tổng các số nguyên tố từ 2 đến n
*/
int sumOfPrime(int n){
    if(n == 2){
        return 2;
    }
    if(isPrime(n)){
        return n + sumOfPrime(n-1);
    }
    return sumOfPrime(n - 1);
}
/*
    Viết hàm tính n giai thừa
*/
unsigned long factor(int n){
    if(n == 1){
        return 1;
    }
    return n * factor(n - 1);
}
int main(int argc, char const *argv[])
{
    int n = 5;
    if(isPrime(n)){
        cout << n << " is prime" << endl;
    }else{
        cout << n << " is not prime" << endl;
    }
    cout << "Sum of prime: " << sumOfPrime(n) << endl;
    cout << "Factor: " << factor(n) << endl;
    return 0;
}
