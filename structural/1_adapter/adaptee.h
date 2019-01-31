#pragma once

#include <iostream>

class Adaptee {
  public:
    void specificRequest() {
        std::cout << "Specific Request !!" << std::endl;
    }
};
