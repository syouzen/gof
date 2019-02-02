#pragma once

class Memento {
  public:
    Memento(int state) : state_(state) {}

    int getState() const {
        return this->state_;
    }

  private:
    int state_;
};
