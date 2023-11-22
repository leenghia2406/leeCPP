/*
    --Luyện tập vòng lặp--
*/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
/*
    Viết chương trình hiển thị các số từ 1 đến n, trong đó n là số nguyên dương được nhập từ bàn phím.
*/
    int n;
    cin >> n;
    for(int i = 0; i <= n; i++){
        cout << i << " ";
    }
/*
    Viết chương trình tính tổng các số từ 1 đến x, trong đó x là số nguyên dương được nhập từ bàn phím.
*/
    int x, sum;
    cin >> x;
    for(int i = 0; i <= x; i++){
        sum += i;
    }
    cout << sum << endl;
/*
    Viết chương trình in ra màn hình kết quả của z! (giai thừa của z), 
    với z là 1 số nguyên dương được nhập từ bàn phím.
*/
    int z;
    unsigned long long result = 1;
    cin >> z;
    for(int i = 1; i <= n; i++){
        result *= i;
    }
    cout << result;
/*
    Viết chương trình in ra màn hình các số 
    chia hết cho 5 trong khoảng từ 1 đến y, với y là 1 số nguyên dương được nhập từ bàn phím.
*/
    int y;
    cin >> y;
    for(int i = 1; i <= y; i++){
        if(i % 5 == 0){
            cout << i << " ";
        }
    }
    return 0;
}
