#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cin.ignore();
    cout << "Nhap chuoi: ";
    getline(cin, str);
    cout << "Chuoi vua nhap: " << str << endl;
    return 0;
}
