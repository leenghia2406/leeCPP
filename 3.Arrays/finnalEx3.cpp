#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
/*
    Viêt chương trình nhập vào số nguyên num, nhập mảng có num số nguyên, săp xếp mảng theo thứ tự giảm dần và in
    ra màn hình
*/
    int num;
    int numbers[10];
    cout << "num = ";
    cin >> num;
    for(int i = 0; i < num; i++){
        cin >> numbers[i];
    }    
    for(int i = num -1; i > 0; i--){
        for(int j = 0; j < i; j++){
            if(numbers[j] < numbers[j + 1]){
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    cout << "Mang sau khi sap xep";
    for(int i = 0; i < num; i++){
        cout << numbers[i] << " ";
    }
/*
    Viết chương trình nhập vào một số nguyên, nhập mảng có num số nguyên và nhập số nguyên k, kiểm tra xem
    trong mảng có 2 phần tử có tổng bằng k hay không, nếu có in ra màn hình vị trí 2 phần tử ấó
*/
    int a, k, arr[10];
    cin >> a;
    for(int i = 0; i < a; i++){
        cin >> arr[i];
    }
    cin >> k;
    int x = -1, y = -1;
    for(int i = 0; i < a; i++){
        for(int j = 0; j < a; j++){
            if(i != j && arr[i] + arr[j] == k){
                x = i;
                y = j;
                break;
            }
        }
        if(x != -1 && y != -1){
            break;
        }
    }
    if(x != -1 && y != -1){
        cout << "Ket qua: " << x << y;
    }else{
        cout << "Khong co ket qua";
    }
/*
    Viết chương trình nhập vào 2 ma trận có num hàng và m cột, in ra tổng của 2 ma trận
    *Phép cộng hai ma trận là cộng vị trí tương ứng của 2 ma trận đó
*/
    int m, n, matrix1[10][10], matrix2[10][10];
    cout << "n = ";
    cin >> n;
    cout << "m = ";
    cin >> m;
    cout << "Nhap ma tran 1: ";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matrix1[i][j];
        }
    }
    cout << "Nhập ma trận 2: ";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matrix2[i][j];
        }
    }
    int result[10][10];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
/*
    Viết chương trình nhập vào 1 ma trận có row hàng và col cột, in ra màn hình tổng các số lẻ có trong ma trận
*/
    int row, col, matrix[10][10];
    cout << "n = ";
    cin >> row;
    cout << "m = ";
    cin >> col;
    cout << "Nhap ma tran: ";
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> matrix[i][j];
        }
    }
    int res = 0;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(matrix[i][j] % 2 != 0){
                res += matrix[i][j];
            }
        }
    }
    cout << "Ket qua la: " << res;
    return 0;
}
