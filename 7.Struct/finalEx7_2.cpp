#include <iostream>
#include <string>
using namespace std;
/*
    Viết chương trình quản lí sản phẩm (tên, đơn giá, số lượng) gồm các chức năng:
    - Xem danh sách sản phẩm, thêm sản phẩm mới, xóa sản phẩm
*/
struct  Product
{
    string name;
    int price;
    int quantity;
    friend istream& operator>>(istream &is, Product &product){
        cout << "Nhap ten: ";
        getline(is, product.name);
        cout << "Nhap gia: ";
        is >> product.price;
        cout << "Nhap so luong: ";
        is >> product.quantity;
        return is;
    }
    friend ostream& operator<<(ostream &os, Product product){
        os << "Ten: " << product.name;
        os << ", gia: " << product.price;
        os << ", so luong: " << product.quantity;
        return os;
    }

};

int main(int argc, char const *argv[])
{
    Product product;
    cin >> product;
    cout << product;
    return 0;
}
