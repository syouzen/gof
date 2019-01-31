#pragma once

#include "implement.h"

class Abstract {
  public:
    virtual void process() = 0;
};

class ConcreteAbstractA : public Abstract {
  public:
    ConcreteAbstractA(Implement* impl) : impl_(impl) {}

  public:
    void process() override {
        impl_->process();
    }

  private:
    Implement* impl_;
};

class ConcreteAbstractB : public Abstract {
  public:
    ConcreteAbstractB();

  public:
    void process() override;

  private:
    Implement* impl_;
};
