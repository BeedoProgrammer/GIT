#include <iostream>

class Human
{
private:
    std::string name;
    int age;

public:
    void eat(){
        std::cout<<"I am eating";
    }
    void sleep(){
        std::cout<<"I am sleeping";
    }
};