#pragma once

#include <iostream>

class State {
  public:
    virtual void handle() = 0;
};

class ConcreteStateA : public State {
  public:
    void handle() {
        std::cout << "ConcreteStateA::handle() !!" << std::endl;
    }
};

class ConcreteStateB : public State {
  public:
    void handle() {
        std::cout << "ConcreteStateB::handle() !!" << std::endl;
    }
};
