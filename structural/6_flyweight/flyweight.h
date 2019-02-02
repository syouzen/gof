#pragma once

#include <iostream>
#include <unordered_map>

class Flyweight {
  public:
    virtual void process() = 0;
};

class ConcreteFlyweight : public Flyweight {
  public:
    void process() override {
        std::cout << "ConcreteFlyweight !!" << std::endl;
    }
};

class UnsharedConcreteFlyweight : public Flyweight {
  public:
    void process() override {
        std::cout << "UnsharedConcreteFlyweight !!" << std::endl;
    }
};

class FlyweightFactory {
  public:
    Flyweight* getFlyweight(int k) {
        auto i = list_.find(k);
        if (i == list_.end()) {
            list_[k] = new ConcreteFlyweight;
        }
        return list_[k];
    }

  private:
    std::unordered_map<int, Flyweight*> list_;
};
