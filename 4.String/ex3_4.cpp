#include <iostream>
#include <string>
using namespace std;
/*
    Viết chương trình nhập vào 1 chuỗi bất kỳ sau đó thực hiện chuẩn hóa chuỗi đó theo các yêu cầu sau:
    Bỏ khoảng trắng đầu cuối.
    Bỏ khoảng trắng giữa các từ.
    Viết hoa chữ cái đầu của mỗi từ và viết thường các chữ cái còn lại.
*/
int main(int argc, char const *argv[])
{
    string str;
    getline(cin, str);
    // xóa khoảng trắng đầu chuỗi
    while (str[0] == ' ')
    {
        str.erase(0, 1);
    }
    // xóa khoảng trắng cuối
    while (str[str.length() -1] == ' ')
    {
        str.erase(str.length() - 1);
    }
    // xóa khoảng trắng giữa
    int i = 0;
    while (i < str.length())
    {
        if (str[i] == ' ' && str[i + 1] == ' ')
        {
            str.erase(i, 1);
        }
        else
        {
            i++;
        }
        
    }
    
    // chuyển toàn bộ thành chữ thường
    for(int i = 0; i < str.length(); i++){
        str[i] = tolower(str[i]);
    }
    // chuyển các chữ cái đầu thành chứ Hoa
    for(int i = 0; i < str.length(); i++){
        if(str[i] == ' ' && str[i + 1] != ' '){
            str[i + 1] = toupper(str[i + 1]);
        }
    }
    // chuyển kí tự đầu chuỗi thành chữ hoa
    if(str[0] != ' '){
        str[0] = toupper(str[0]);
    }
    cout << str << endl;
    return 0;
}
