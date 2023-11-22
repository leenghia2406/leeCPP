/*
    Viết chương trình nhập vào số tuổi của bạn, 
    nếu số tuổi của bạn lớn hơn hoặc bằng 18 thì in ra màn hình số 1, ngược lại in ra số 0.
*/
/*
    Viết chương trình nhập vào 1 số nguyên lớn hơn 0 và kiểm tra xem số nguyên đó có phải là số chẵn hay không. 
    Nếu là số chẵn thì in ra 1, ngược lại thì in ra 0.
*/
#include <iostream>

int main()
{
    int age;
    std::cin >> age;
    bool result;
    if(age >= 18) {
        result = 1;
    }else {
        result = 0;
    }
    std::cout << result;

    int a;
    std::cin >> a;
    if(a % 2 == 0){
        std::cout << 1;
    }else{
        std::cout << 0;
    }
    return 0;
}