#pragma once

#include <stack>

#include "memento.h"

class Caretaker {
  public:
    void pushMemento(Memento* mmt) { stack_.push(mmt); }
    Memento* popMemento() {
        Memento* mmt = stack_.top();
        stack_.pop();
        return mmt;
    }

  private:
    std::stack<Memento*> stack_;
};
