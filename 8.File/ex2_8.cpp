#include <iostream>
#include <fstream>
using namespace std;
/*
    Các chế độ khi làm việc với file
    1. ios::in -> Mở file ở chế độ đọc nếu file đã tồn tại
    2. ios::out -> Mở file ở chế độ ghi và xóa hết nội dung trong file, nếu file không tồn tại sẽ tạo ra file
    3. ios::trunc -> Mở file ở chế độ ghi và xóa hết nội dung trong file, nếu file không tồn tại sẽ tạo ra file
    4. ios::app -> Mở file ở chế độ ghi và chỉ ghi vào cuối chứ không xóa các dữ liệu cũ
    5. ios::ate -> Mở file và di chuyển con trỏ xuống cuối file
    6. ios::binary -> Làm việc với file hệ nhị phân
*/
int main(int argc, char const *argv[])
{
    fstream fs;
    fs.open("test.txt", ios::in); // chỉ đọc file, không thể ghi
    string name;
    getline(fs, name);
    cout << name << endl;
    fs << "Hi"; // -> Không ghi được nội dung mới
    fs.open("test.txt", ios::out); // Tạo file nếu file chưa tồn tại và ghi nội dung vào
    fs << "Hi";
    fs.open("test.txt", ios::out | ios::trunc); // Sử dụng trunc phải kèm theo out và dấu hoặc
    fs << "Hello, world";
    fs.open("test.txt", ios::out | ios::app); 
    fs << "Xin chao";  // Dữ liệu được ghi vào cuối file, không xóa nội dung cũ
    fs.open("test.txt", ios::in | ios::ate); 
    string str;
    getline(fs, str);
    cout << "str: " << str << endl; // Không lấy được dữ liệu vì con trỏ ở cuối file

    ifstream ifs;
    ifs.open("test.txt");
    // ifs << "Hello"; // Lỗi vì ifs chỉ mở file ở chế độ đọc
    ofstream ofs;
    ofs.open("test.txt"); // Chỉ mở file ở chế độ ghi

    

    return 0;
}
