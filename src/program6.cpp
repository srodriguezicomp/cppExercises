#include <iostream>

class Dog
{
private:
    int age;
public:
    Dog(int age);
    ~Dog();
    int getAge();
    void setAge(int age);
};

Dog::Dog(int age)
{
    this->age = age;
}

Dog::~Dog()
{
}

int Dog::getAge()
{
    return age;
}

void Dog::setAge(int age)
{
    this->age = age;
}

int main()
{
    Dog dog1(3);
    Dog dog2(4.9);
    std::cout << "Dog1 is " << dog1.getAge() << " years old." << std::endl;
    std::cout << "Dog2 is " << dog2.getAge() << " years old." << std::endl;

    return 0;
}
