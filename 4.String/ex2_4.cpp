#include <iostream>
#include <string>
using namespace std;
/*
    - str.substr(x, y);     *cắt chuỗi
    - str.find(s);          *tìm chuỗi
    - str.erase(x, n);      *xóa chuỗi
    - str.replace(x, n, s); *tại vị trí x, thay thé n phần tử bằng chuỗi s
    - str.compare(s);       *so sánh 2 chuỗi, = : 0, < : -1, > : 1
    - str.insert(x, s);     *chèn chuỗi s vào vị trí x
    - str.length(), str.size()  *đếm số lượng byte của chuỗi
*/
int main(int argc, char const *argv[])
{
    string str = "01234";
    string str1 = str.substr(1);
    string str2 = str.substr(1, 3 );

    cout << "str: " << str << endl;
    cout << "str.substr(1): " << str1 << endl;
    cout << "str.substr(1, 3): " << str2 << endl;
    string strin = "abcdefghijk";
    cout << "strin.find(cd): " << strin.find("cd") << endl;
    cout << "strin.erase(2, 2): " << strin.erase(2, 2) << endl;
    cout << "strin.replace(1, 2, mnpq): " << strin.replace(1, 2, "mnpq") << endl;
    cout << "str.compare(strin): " << str.compare(strin) << endl;
    cout << "str.insert(***): " << str.insert(1, "***") << endl;
    cout << "str.length(): " << str.length() << endl;
    cout << "str.size(): " << str.size() << endl;

    return 0;
}
