#include <iostream>
using namespace std;

class Square
{
private:
    int sizeLength;
public:
    void setSizeLength(int sizeLength)
    {
        this->sizeLength = sizeLength;
    }
    int getSizeLength()
    {
        return sizeLength;
    }
};
int main(int argc, char const *argv[])
{
    Square s1;
    s1.setSizeLength(5);
    cout << "Size: "<< s1.getSizeLength();
    return 0;
}
