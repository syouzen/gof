#pragma once

#include "subclass.h"

class Facade {
  public:
    Facade(SubClassA* a, SubClassB* b, SubClassC* c) : subA_(a), subB_(b), subC_(c) {}

    void process() {
        subA_->process();
        subB_->process();
        subC_->process();
    }

  private:
    SubClassA* subA_;
    SubClassB* subB_;
    SubClassC* subC_;
};
