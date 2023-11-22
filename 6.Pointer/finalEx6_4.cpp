#include <iostream>
using namespace std;
/*
    Tạo mảng động có n phần tử, sắp xếp lại mảng theo thứ tự tằng dần và in ra màn hình
*/
void input_integer(string label, int &n);
void input_arr(int *arr, int size);
void print_arr(int *arr, int size);
void sort(int* &arr, int &size);
int main(int argc, char const *argv[])
{
    int n;
    input_integer("n = ", n);
    int *numbers = new int[n];
    cout << "Nhap mang: ";
    input_arr(numbers, n);
    sort(numbers, n);
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
void sort(int* &arr, int &size){
    for(int i = 0; i < size -1; i++){
       for(int j = 0; j < size -1 -i ; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
       }
    }
}