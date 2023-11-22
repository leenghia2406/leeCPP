/*
    // exercise 5: Pracice use arthmetic operators
    Viết chương trình nhập vào cân nặng và chiều cao sau đó in ra màn hình chỉ số BMI.
    Công thức tính chỉ số BMI là: BMI = (cân nặng )/(chiều cao * chiều cao)
*/
#include <iostream>
using namespace std;
int main(){
    float cannang, chieucao;
    cin >> cannang >> chieucao;
    cout << "BMI: " << cannang / (chieucao * chieucao) << endl;
}