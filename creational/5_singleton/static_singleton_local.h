#pragma once

#include <iostream>

class StaticSingletonLocal {
  public:
    static StaticSingletonLocal& getInstance() {
        static StaticSingletonLocal instance_;
        return instance_;
    }

    void print() {
        std::cout << "Local Static Singleton !!" << std::endl;
    }

  private:
    StaticSingletonLocal() {}
    ~StaticSingletonLocal() {}
    StaticSingletonLocal(const StaticSingletonLocal& copy);
    StaticSingletonLocal& operator=(const StaticSingletonLocal&);
};
