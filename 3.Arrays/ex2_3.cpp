//  --Luyện tập mảng 2 chiều--
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
/*
    Viết chương trình in ra các phần tử của mảng hai chiều numbers.
*/
    int numbers[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cout << numbers[i][j] << " ";
        }
        cout << endl;
    }
/*
    Khởi tạo 2 biến row (số hàng) và col(số cột)  mảng 2 chiều numbers chứa tối đa 10 hàng và 10 cột
    Viết lệnh để nhập giá trị của row và col từ bàn phím.
    Viết vòng lặp để thực hiện nhập giá trị cho m * n phần tử của mảng numbers.
    In lần lượt giá trị của các phần tử trong mảng numbers ra màn hình
*/
    int row, col, num[10][10];
    cin >> row >> col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> num[i][j];
        }
    }
    for(int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cout << num[i][j] << " ";
        }
        cout << endl;
    }
/*
    Khởi tạo 2 biến m (số hàng) và n (số cột) và mảng 2 chiều numbers chứa tối đa 10 hàng và 10 cột
    Viết lệnh để nhập giá trị của m và n từ bàn phím.
    Viết vòng lặp để thực hiện nhập giá trị cho m * n phần tử của mảng numbers.
    Tính và hiển thị tổng giá trị của các phần tử có trong mảng.
*/
    int m, n, numbers2[10][10];
    cin >> m >> n;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cin >> numbers2[i][j];
        }
    }
    int total = 0;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            total += numbers2[i][j];
        }
    }
    cout << "Ket qua la" << total;

    
    return 0;
}
