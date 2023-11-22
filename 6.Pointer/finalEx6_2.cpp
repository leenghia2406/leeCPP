#include <iostream>
using namespace std;
/*
    Tạo mảng có n phần tử, nhập vào số nguyên dương x và xóa phần tử ở vị trí x
*/
void input_integer(string label, int &n);
void input_arr(int *arr, int size);
void print_arr(int *arr, int size);
void remove(int* &arr, int &size, int x);
int main(int argc, char const *argv[])
{
    int n, x;
    input_integer("n = ", n);
    int *numbers = new int[n];
    cout << "Nhap mang: ";
    input_arr(numbers, n);
    input_integer("x = ", x);
    remove(numbers, n, x);
    cout << "Mang sau khi xoa: " << endl;
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
void remove(int* &arr, int &size, int x){
    // Xóa phần tử cần xóa trên mảng cũ
    for(int i = x; i < size -1; i++){
        arr[i] = arr[i + 1];
    }
    // Tạo mảng mới
    int newSize = size - 1;
    int *tmpArr = new int[newSize];
    // Copy các phần tử bên mảng cũ sang mảng mới
    for(int i = 0; i < size -1; i++ ){
        tmpArr[i] = arr[i];
    }
    // Gắn mảng mới cho mảng cũ và giảm size đi một đơn vị (cập nhật con trỏ và size)
    delete[] arr;
    arr = tmpArr;
    size = newSize;

}