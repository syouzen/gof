#pragma once

#include "state.h"

class Context {
  public:
    Context(State* state) : state_(state) {}
    void request() {
        state_->handle();
    }

  private:
    State* state_;
};
