#include <iostream>
using namespace std;
/*
    swap
*/
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
/*
    bubble sort
*/
void bubbleSort(int arr[], int n){
    for(int i = 0; i < n  -1; i++){
        for(int j = 0; j < n - 1 -i; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
/*
    hàm tính giai thừa (đệ quy)
*/
unsigned long factor(int n){
    if(n == 1){
        return 1;
    }
    return n * factor(n - 1);
}
void print_array(int array[], int n)
{
    for(int i = 0; i < n; i++)
    {
        std::cout << array[i] << " ";
    }
}
int main(int argc, char const *argv[])
{
    int a = 2;
    int b = 3;
    swap(a, b);
    cout << "Swap: " << a << b << endl;
    int arr[5] = {3, 5, 2, 1, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, size);
    cout << "Bubble sort: ";
    print_array(arr, size);
    int c = 5;
    cout << "Factor 5: " << factor(c);
    return 0;
}
