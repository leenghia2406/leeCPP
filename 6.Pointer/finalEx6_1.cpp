#include <iostream>
#include <string>
using namespace std;
/*
    Tạo mảng động có n phần tử, nhập 1 số nguyên x và thêm x vào cuối mảng
*/
void input_integer(string label, int &n);
void input_arr(int *arr, int size);
void print_arr(int *arr, int size);
void push(int* &arr, int &size, int new_element);

int main(int argc, char const *argv[])
{
    int n, x;
    input_integer("n = ", n);
    int *numbers = new int[n];
    cout << "Nhap mang: ";
    input_arr(numbers, n);
    input_integer("x = ", x);
    push(numbers, n, x);
    cout << "Mang sau khi them: " << endl;
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
void push(int* &arr, int &size, int new_element){
    // Tạo mảng mới
    int newSize = size + 1;
    int *tmp_arr = new int [newSize];

    // Copy toàn bộ phần tử cũ sang mảng mới
    for(int i = 0; i < size; i++){
        tmp_arr[i] = arr[i];
    }
    // Thêm phần tử cuối vào cuối mảng mới
    tmp_arr[newSize - 1] = new_element;
    // Gắn mảng mới sang con trỏ cũ và tăng size lên 1 dơn vị
    delete[] arr;
    arr = tmp_arr;
    size = newSize;
}
