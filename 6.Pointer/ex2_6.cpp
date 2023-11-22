#include <iostream>
using namespace std;
/*
    Stack: lưu trữ các biến cục bộ, tốc độ truy xuất nhanh hơn Heap, giới hạn lưu trữ nhỏ hơn Heap
    Heap: lưu trữ các biến toàn cục, các đối tượng của con trỏ khi được cấp phát động
    --> Khi cấp phát động phải giải phóng bộ nhớ tránh rò rỉ bộ nhớ 
    Cấp phát mảng động để linh hoạt hơn mảng tĩnh (vì mảng tĩnh là mảng cố định, có thể thừa hoặc thiếu)
*/
int main(int argc, char const *argv[])
{   
    // cấp phát dộng
    int *i = new int(5);
    delete i;
    i = new int (10);
    delete i;
    i = new int (15);
    
    int a[3]; // mảng tĩnh
    int *b = new int [3]; // mảng động được quản lí bởi một con trỏ
    for(int i = 0; i < 3; i++){
        b[i] = 1;
    }
    cout << "Mang truoc khi them: " << endl;
    for(int i = 0; i < 3; i++){
        cout << b[i] << " ";
    }
    cout << endl;
    // Tạo mảng động mới có số lương phần tử lớn hơn
    int *new_arr = new int[4];
    // Sao chép toàn bộ giá trị cũ sang mảng mới
    for(int i = 0; i < 3; i++){
        new_arr[i] = b[i];
    }
    new_arr[3] = 2; // gán giá trị cho vị trí cuối
    // Xóa các vùng nhớ cũ
    delete[] b;
    // Gán vùng nhớ mới cho con trỏ b
    b = new_arr;
    cout << "Cac phan tu sau khi them: " << endl;
    for(int i = 0; i < 4; i++){
        cout << b[i] << " ";
    }
    return 0;
}
