#pragma once

#include "subject.h"

class Proxy : public Subject {
  public:
    Proxy() : real_(nullptr) {}
    ~Proxy() {
        if (real_ != nullptr) delete real_;
    }

    void request() override {
        if (real_ == nullptr)
            real_ = new RealSubject;
        real_->request();
    }

  private:
    RealSubject* real_;
};
