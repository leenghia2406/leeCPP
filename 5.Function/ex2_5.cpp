#include <iostream>
#include <math.h>
using namespace std;

/*
    Hàm tính tổng giá trị của các phần tử trong mảng 1 chiều numbers.
*/
int total(int numbers[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += numbers[i];
    }
    return sum;
}
/*
    Hàm trả về tổng giá trị của các phần tử trong mảng 2 chiều numbers.
*/
int total2(int numbers[][3], int rows, int cols){
    int sum = 0;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            sum += numbers[i][j];
        }
    }
    return sum;
}
/*
    Hàm trả về giá trị lớn nhất trong mảng 1 chiều numbers.
*/
int max(int numbers[], int n){
    int max = numbers[0];
    for(int i = 1; i < n; i++){
        if(numbers[i] > max){
            max = numbers[i];
        }
    }
    return max;
}
/*
    Hàm trả về tổng các số lẻ trong mảng
*/
int totalOdd(int numbers[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(numbers[i] % 2 != 0){
            sum += numbers[i];
        }
    }
    return sum;
}
bool isPrime(int n){
    if(n == 0 || n == 1){
        return false;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
int totalPrime(int numbers[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        if (isPrime(numbers[i]))
        {
            sum += numbers[i];
        }
    }
    return sum;
}
int main(int argc, char const *argv[])
{
// test 1
    int arr[5] = {1, 2 ,3 , 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Tong gia tri cac phan tu la: " << total(arr, size) << endl;
// test 3
    cout << "Gia tri lon nhat trong mang la: " << max(arr, size) << std::endl;
// test 4
    cout << "Tong cac so le la: " << totalOdd(arr, size) << endl;
// test 5
    cout << "Tong cac so nguyen to la: " << totalPrime(arr, size) << endl;
// test 2
    int numbers2[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int rows = sizeof(numbers2)/sizeof(numbers2[0]);
    int cols = sizeof(numbers2)/sizeof(numbers2[0][0]);
    cout << "Tong gia tri cac phan tu la: " << total2(numbers2, rows, cols) << endl;
    return 0;
}
