#pragma once

#include "command.h"

class Invoker {
  public:
    void setCommand(Command* command) { command_ = command; }
    void execute() { command_->execute(); }

  private:
    Command* command_;
};
