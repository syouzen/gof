#pragma once

#include <iostream>

class Subject {
  public:
    virtual void request() = 0;
};

class RealSubject : public Subject {
  public:
    void request() override {
        std::cout << "RealSubject !!" << std::endl;
    }
};
