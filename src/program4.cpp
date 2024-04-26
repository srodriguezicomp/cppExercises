#include <iostream>

class MyClass
{
private:
    int x;
public:
    MyClass(int value);
    ~MyClass();
    MyClass operator-(const MyClass& operand) const;
    int getx() const;
};

MyClass::MyClass(int value)
{
    x = value;
}

MyClass::~MyClass()
{
}

MyClass MyClass::operator-(const MyClass& operand) const
{
    MyClass obj(x - operand.getx());
    return obj;
}

int MyClass::getx() const
{
    return x;
}

int main()
{
    MyClass obj1(10), obj2(6);
    std::cout << "obj1 = " << obj1.getx() << "\nobj2 = " << obj2.getx() << std::endl;
    MyClass obj3 = obj1 - obj2;
    std::cout << "obj3 = obj1 - obj2 = " << obj3.getx() << std::endl;

}

