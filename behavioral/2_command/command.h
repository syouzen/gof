#pragma once

#include "receiver.h"

class Command {
  public:
    virtual void execute() = 0;
};

class ConcreteCommand : public Command {
  public:
    void setRecevier(Receiver* receiver) { receiver_ = receiver; }
    void execute() override { receiver_->action(); }

  private:
    Receiver* receiver_;
};
