#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Vi du 1
class B;
class A
{
private:
    int x = 4;
    friend B;
};
class B
{
public:
    void print_x(A a)
    {
        // se bao loi khi khong khai bao B la lop ban cua lop A
        cout << a.x << endl;
    }
};
// Vi du 2
class Bank;
class Account
{
private:
    string name;
    int balance;
public:
    string getName()
    {
        return this->name;
    }
    int getBalance()
    {
        return this->balance;
    }
    friend Bank;
};
class Bank
{
private:
    vector<Account> accounts;
public:
    void addAccount(string name, int balance)
    {
        Account newAccout;
        newAccout.name = name;
        newAccout.balance = balance;
        this->accounts.push_back(newAccout);
    }
    void getAccount(string name)
    {
        int index = -1;
        for(int i = 0; i < this->accounts.size(); i++)
        {
            if (!name.compare(this->accounts[i].name))
            {
                index = i;
                break;
            }
        }
        if (index != -1)
        {
            cout << "Name: " << this->accounts[index].name << ", balance: " << this->accounts[index].balance << endl;
        }
        else
        {
            cout << "Not found." << endl;
        }
        

    }
};
int main(int argc, char const *argv[])
{
    // test 1
    B b;
    b.print_x(A());
    // 2. Su dung vector
    vector<int> numbers; // dung vector tao mang dong
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    // mang truoc khi xoa
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
    numbers.erase(numbers.begin() + 1); // xoa phan tu so 2(numbers.begin()) la dia chi phan tu dau tien
    // mang sau khi xoa
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
    Bank bank;
    bank.addAccount("Long", 2000);
    bank.addAccount("Tuan", 4000);
    bank.getAccount("Tuan");
    return 0;
}
