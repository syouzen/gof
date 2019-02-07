#pragma once

#include "strategy.h"

class Context {
  public:
    Context() : strategy_(nullptr) {}
    ~Context() {
        if (strategy_ != nullptr) delete strategy_;
    }

    void changeStrategy(Strategy* strategy) {
        strategy_ = strategy;
    }

    void execute() {
        strategy_->execute();
    }

  private:
    Strategy* strategy_;
};
