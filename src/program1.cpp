#include <iostream>

class MyClass
{
public:
    void printmessage();
};

void MyClass::printmessage()
{
    std::cout << "Helloworld!\n";
}

int main()
{
    MyClass obj;
    obj.printmessage();
    return 0;
}
