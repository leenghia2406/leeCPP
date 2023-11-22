/*
    exercise 6: Perimeter and area of a circle
    Viết chương trình nhập vào bán kính của hình tròn. Tính và hiển thị chu vi và diện tích của hình tròn đó.
    Công thức tính chu vi hình tròn là: C = 2 * r * PI.
    Công thức tính diện tích hình tròn là: S = r^2 * PI.
*/
/*
    Viết chương trình nhập vào chiều dài và chiều rộng của hình chữ nhật. 
    Tính và hiển thị chu vi và diện tích của hình chữ nhật đó.
    Công thức tính chu vi hình chữ nhật là: C = (chiều dài + chiều rộng) * 2.
    Công thức tính diện tích hình chữ nhật là: S = chiều dài * chiều rộng.
*/
/*
    Viết chương trình nhập vào lần lượt số ngày, số giờ, số phút và số giây. 
    Hãy tính và in tổng số giây ra màn hình.

*/
#include <iostream>
using namespace std;
const float PI = 3.14;

int main()
{
    float r;
    cin >> r;
    cout << "Chu vi hinh tron la: " << 2 * PI * r << endl;
    cout << "Dien tich hinh tron la: " << r * r * PI << endl;

    float chieudai, chieurong;
    cin >> chieudai >> chieurong;
    cout << "Chu vi hinh chu nhat la: " << (chieudai + chieurong)*2 << endl;
    cout << "Dien tich hinh chu  nhat la: " << chieudai * chieurong << endl;

    int days, hours, minutes, seconds;
    cin >> days >> hours >> minutes >> seconds;
    cout << "total seconds: " << days *24*60*60 + hours * 60*60 + minutes * 60 + seconds << endl;
    return 0;
}

