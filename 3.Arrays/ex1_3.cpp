/*
    Hệ thống kiến thức chương 3: Mảng 1 chiều (nhập xuất, hiển thị mảng), mảng 2 chiều,
    sắp xếp mảng (thuật toán bubble sort)
*/
//  --Luyện tập mảng 1 chiều--
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
/*
    Cho trước mảng numbers với các phần tử 1, 2, 3, 4.
    Hãy viết chương trình in ra các phần tử của mảng numbers.
*/
    int numbers[] = {1, 2, 3, 4};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    for(int i = 0; i < size; i++){
        cout << numbers[i] << " ";
    }
/*
    Khởi tạo biến n có kiểu dữ liệu là số nguyên và 1 mảng numbers chứa tối đa 10 phần từ .
    Viết lệnh để nhập giá trị cho n từ bàn phím.
    Viết 1 vòng lặp để thực hiện nhập giá trị cho n phần tử của mảng numbers.
    In lần lượt giá trị của các phần tử trong mảng numbers ra màn hình
*/
    int n, numbers1[10];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> numbers1[i];
    }
    for (int i = 0; i < n; i++){
        cout << numbers1[i] << " ";
    }
/*
    Khởi tạo biến x có kiểu dữ liệu là số nguyên và mảng numbers2 chứa tối đa 10 phần từ.
    Viết 1 vòng lặp để thực hiện nhập giá trị cho n phần tử của mảng numbers2.
    Tính và hiển thị tổng giá trị của các phần tử có trong mảng.
*/
    int x, numbers2[10];
    cin >> x;
    for (int i = 0; i < x; i++){
        cin >> numbers2[i];
    }
    int sum = 0;
    for (int i = 0; i < x; i++){
        sum += numbers2[i];
    }
    cout << sum;
    return 0;
}   

