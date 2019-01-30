#pragma once

#include "builder.h"

class Director {
  public:
    Director(Builder* builder) : builder_(builder) {}
    ~Director() {
        if (builder_ != nullptr) delete builder_;
    }

  public:
    Computer* buildComputer() {
        Computer* com = new Computer(builder_->getVendor());

        com->buildMainBoard(builder_->getMainBoard());
        com->buildCPU(builder_->getCPU());
        com->buildGPU(builder_->getGPU());
        com->buildRAM(builder_->getRAM());
        com->buildPower(builder_->getPower());

        return com;
    }

  private:
    Builder* builder_;
};
