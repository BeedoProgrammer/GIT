#include <iostream>

class Cat
{
private:
    std::string type;
    int age;

public:
    void play(){
        std::cout<<"Cat is playing";
    }
    void sleep(){
        std::cout<<"Cat is sleeping";
    }
};