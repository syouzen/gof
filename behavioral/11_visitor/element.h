#pragma once

#include "visitor.h"

#include <iostream>

class Element {
  public:
    virtual void accept(Visitor* v) = 0;
};

class ConcreteElementA : public Element {
  public:
    void accept(Visitor* v) override {
        v->visitElementA(this);
    }

    void operationA() {
        std::cout << "ConcreteElementA::operationA() !!" << std::endl;
    }
};

class ConcreteElementB : public Element {
  public:
    void accept(Visitor* v) override {
        v->visitElementB(this);
    }

    void operationB() {
        std::cout << "ConcreteElementB::operationB() !!" << std::endl;
    }
};
