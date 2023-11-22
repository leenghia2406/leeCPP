#include <iostream>
using namespace std;
/*
    Tạo mảng có n phần tử, nhập vào x và y, thêm y vào vị trí x của mảng
*/
void input_integer(string label, int &n);
void input_arr(int *arr, int size);
void print_arr(int *arr, int size);
void update (int* &arr, int &size, int index, int newElement);
int main(int argc, char const *argv[])
{
    int n, x, y;
    input_integer("n = ", n);
    int *numbers = new int[n];
    cout << "Nhap mang: ";
    input_arr(numbers, n);
    input_integer("y = ", y);
    input_integer("x = ", x);
    update(numbers, n, x, y);
    print_arr(numbers, n);
    return 0;
}
void input_integer(string label, int &n){
    cout << label;
    cin >> n;
}
void input_arr(int *arr, int size){
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
}
void print_arr(int *arr, int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << ' ';
    }
}
void update (int* &arr, int &size, int index, int newElement){
    // Tạo mảng mới
    int newSize = size + 1;
    int *newArr = new int[size];
    // Copy toàn bộ mảng cũ sang mảng mới
    for(int i = 0; i < size; i++){
        newArr[i] = arr[i];
    }
    // Thêm phần tử mới vào mảng mới
    for(int i = newSize -1; i > index; i--){
        newArr[i] = newArr[i - 1];
    }
    newArr[index] = newElement;
    // Gắn mảng mới cho con trỏ cũ và tăng size lên 1 đơn vị
    delete[] arr;
    arr = newArr;
    size = newSize;
}