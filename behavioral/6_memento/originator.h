#pragma once

#include <iostream>

#include "memento.h"

class Originator {
  public:
    void setState(int state) {
        this->state_ = state;
        std::cout << "Set State !! " << this->state_ << std::endl;
    }

    void setMemento(Memento* mmt) {
        if (mmt != nullptr) {
            this->state_ = mmt->getState();
            delete mmt;
            std::cout << "RollBack State !! " << this->state_ << std::endl;
        }
    }

    Memento* createMemento() {
        std::cout << "Create Memento !! " << this->state_ << std::endl;
        return new Memento(this->state_);
    }

  private:
    int state_;
};
