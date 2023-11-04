#include <iostream>

class Animal {
public:
    virtual void speak() {
        std::cout << "Animal makes a sound" << std::endl;
    }
};

class Dog : public Animal {
public:
    void speak() {
        std::cout << "Dog barks" << std::endl;
    }
};

int main() {
    Animal animal;
    Dog dog;

    animal* a=&dog;
    a.speak();

    return 0;
}
