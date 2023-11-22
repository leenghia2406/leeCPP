/*
    Khởi tạo 1 biến n có kiểu dữ liệu là số nguyên và 1 mảng numbers
    Viết lệnh để nhập giá trị cho n từ bàn phím.
    Viết 1 vòng lặp để thực hiện nhập giá trị cho n phần tử của mảng numbers.
    Sắp xếp lại các phần tử trong mảng theo thứ tự tăng dần.
    In lần lượt giá trị của các phần tử trong mảng numbers ra màn hình.
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, numbers[10];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> numbers[i];
    }
    for(int i = n -1; i > 0; i--){
        for (int j = 0; j < i; j++){
             if(numbers[j] > numbers[j+1]){
                int temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
             }
        }
    }
    for (int i = 0; i < n; i++)
    {
            cout << numbers[i] << " ";
    }
    return 0;
}
