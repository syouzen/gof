#pragma once

#include "adaptee.h"

class Adapter {
  public:
    virtual void request() = 0;
};

class ObjectAdapter : public Adapter {
  public:
    void request() override {
        adaptee_.specificRequest();
    }

  private:
    Adaptee adaptee_;
};

class ClassAdapter : public Adapter, public Adaptee {
  public:
    void request() override {
        specificRequest();
    }
};
