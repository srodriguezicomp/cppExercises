#include <iostream>
#include <typeinfo>

class MyClass
{
public:
    MyClass(std::string name, std::string lastName, int id);
    ~MyClass();
};

MyClass::MyClass(std::string name, std::string lastName, int id)
{
    std::cout << name << " " << lastName << " " << id << "\n";
}

MyClass::~MyClass()
{
    std::cout << "Object of class " << typeid(*this).name() << " will be destroyed.";
}

int main()
{
    std::string name;
    std::string lastName;
    int id;
    std::cout << "Insert name, last name and id\n";
    std::cin >> name;
    std::cin >> lastName;
    std::cin >> id;
    MyClass obj(name, lastName, id);

    return 0;
}
