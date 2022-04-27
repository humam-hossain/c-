#include <iostream>

class Entity
{
public:
    int x, y;

    Entity(){
        x = 0;
        y = 10;
        std::cout << "Entity created" << std::endl;

    }

    ~Entity()
    {
        std::cout << "Entity destroyed" << std::endl;
    }
    
    void print()
    {
        std::cout << x << " " << y << std::endl;
    }
};

int main()
{
    Entity e;
    e.print();
}