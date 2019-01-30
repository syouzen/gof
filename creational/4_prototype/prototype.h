#pragma once

#include <iostream>
#include <string>

using namespace std;

class Prototype {
  public:
    virtual Prototype* clone() = 0;
    virtual void printPrototypeInfo() = 0;
};

class ConcretePrototypeA : public Prototype {
  public:
    ConcretePrototypeA(string name) : name_(name) {}
    ConcretePrototypeA(const ConcretePrototypeA& copy) {
        this->name_ = copy.name_;
    }

    Prototype* clone() override final {
        return new ConcretePrototypeA(*this);
    }

    void printPrototypeInfo() override {
        cout << name_ << " !!" << endl;
    }

  private:
    string name_;
};

class ConcretePrototypeB : public Prototype {
  public:
    ConcretePrototypeB(string name) : name_(name) {}
    ConcretePrototypeB(const ConcretePrototypeB& copy) {}

    Prototype* clone() override final {
        return new ConcretePrototypeB(*this);
    }

    void printPrototypeInfo() override {
        cout << name_ << " !!" << endl;
    }

  private:
    string name_;
};
