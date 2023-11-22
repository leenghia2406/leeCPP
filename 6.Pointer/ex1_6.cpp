#include <iostream>
using namespace std;
/*
    Chương 6: con trỏ, stack, heap, cấp phát động, cấp phát mảng động
*/
void input_pointer(int *i){
    cin >> *i;
}
int main(int argc, char const *argv[])
{
    int n = 5;
    int *iPointer = &n;
    // cout << &n << endl;
    // cout << iPointer;
    *iPointer = 10;
    cout << *iPointer << endl;
    cout << n << endl; // n lúc này có giá trị là 10
    int numbers[4] = {1, 2, 3, 4};
    // cout << &numbers[0] << endl;
    // cout << &numbers[1] << endl;
    // cout << &numbers[0] + 1 << endl;
    int *i_ptr;
    cout << numbers << endl; // lưu địa chỉ phần tử 0
    // in ra các phần tử trong mảng bằng con trỏ
    for(i_ptr = &numbers[0]; i_ptr < &numbers[0] + 4; i_ptr++){
        cout << *i_ptr << endl;
    }
    int i = 5;
    input_pointer(&i);
    cout << "i = " << i << endl;
    return 0;
}
