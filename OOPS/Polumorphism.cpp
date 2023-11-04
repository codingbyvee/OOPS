#include <iostream>

class Shape {
public:
    virtual void draw() {
        std::cout << "Drawing a generic shape" << std::endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a circle" << std::endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a square" << std::endl;
    }
};

int main() {
    Shape* shapes[2];
    Circle circle;
    Square square;

    shapes[0] = &circle;
    shapes[1] = &square;

    for (int i = 0; i < 2; i++) {
        shapes[i]->draw();
    }

    return 0;
}
