#include <iostream>
#include <string>

class Person
{
private:
    int m_x;
public:
    Person(){
        std::cout << "Person is created!" << std::endl;
    }

    Person(const int& x)
        : m_x(x)
    {
        std::cout << "Person is created with " << x << " !" << std::endl;
    }
};

class Entity
{
private:
    std::string m_name;
    Person p;
public:
    Entity()
        : m_name("Unknown"), p(0)
    {}

    Entity(const std::string& name)
        : m_name(name)
    {}
};

int main(){
    Entity e;

    return 0;
}