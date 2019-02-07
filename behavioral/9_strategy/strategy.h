#pragma once

#include <iostream>

class Strategy {
  public:
    virtual void execute() = 0;
};

class ConcreteStrategyA : public Strategy {
  public:
    void execute() override {
        std::cout << "ConcreteStrategyA::execute() !!" << std::endl;
    }
};

class ConcreteStrategyB : public Strategy {
  public:
    void execute() override {
        std::cout << "ConcreteStrategyB::execute() !!" << std::endl;
    }
};
