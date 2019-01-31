#pragma once

#include <iostream>

class Implement {
  public:
    virtual void process() = 0;
};

class ConcreteImplementA : public Implement {
  public:
    void process() override {
        std::cout << "ConcreteImplementA !" << std::endl;
    }
};

class ConcreteImplementB : public Implement {
  public:
    void process() override {
        std::cout << "ConcreteImplementB !" << std::endl;
    }
};
