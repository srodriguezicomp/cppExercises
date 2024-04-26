#include <iostream>

class Person
{
private:
    std::string name;
public:
    Person(std::string name);
    ~Person();
    std::string getName();
};

Person::Person(std::string name)
{
    this->name = name;
}

Person::~Person()
{
}

std::string Person::getName()
{
    return name;
}

class Student : public Person
{
private:
    int semester;
public:
    Student(std::string name, int semester);
    ~Student();
    int getSemester();
};

Student::Student(std::string name, int semester) : Person(name)
{
    this->semester = semester;
}

Student::~Student()
{
}

int Student::getSemester()
{
    return semester;
}

int main()
{
    Student obj("Santiago", 1);
    std::cout << "Nombre: " << obj.getName() << "\nSemestre: " << obj.getSemester() << std::endl;

    return 0;
}