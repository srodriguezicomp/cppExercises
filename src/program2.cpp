#include <iostream>

class MyClass
{
private:
    int x;
public:
    void setx(int myvalue);
    int getx();
};

void MyClass::setx(int myvalue)
{
    x = myvalue;
}

int MyClass::getx()
{
    return x;
}

int main()
{
    MyClass obj;
    int input;
    std::cout << "Value of x is " << obj.getx() << "\n";
    std::cin >> input;
    obj.setx(input);
    std::cout << "New value of x is " << obj.getx() << "\n";
    return 0;
}