#pragma once

#include "component.h"

#include <iostream>

class Leaf : public Component {
  public:
    void process() override {
        std::cout << "Leaf Process() !!" << std::endl;
    }
};
