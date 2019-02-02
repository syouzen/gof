#pragma once

#include "beverage.h"

class CondimentDecorator : public Beverage {
  public:
    CondimentDecorator(Beverage* beverage) : beverage_(beverage) {}
    ~CondimentDecorator() {
        if (beverage_ != nullptr) delete beverage_;
    }

    virtual string getDescription() = 0;
    virtual int cost() = 0;

  protected:
    Beverage* beverage_;
};

class Mocha : public CondimentDecorator {
  public:
    Mocha(Beverage* beverage) : CondimentDecorator(beverage) {}

    string getDescription() {
        return beverage_->getDescription() + ", Mocha";
    }

    int cost() {
        return beverage_->cost() + 1000;
    }
};

class Whip : public CondimentDecorator {
  public:
    Whip(Beverage* beverage) : CondimentDecorator(beverage) {}

    string getDescription() {
        return beverage_->getDescription() + ", Whip";
    }

    int cost() {
        return beverage_->cost() + 500;
    }
};
