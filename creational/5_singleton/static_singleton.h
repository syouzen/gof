#pragma once

#include <iostream>

class StaticSingleton {
  public:
    static StaticSingleton* getInstance() {
        return &instance_;
    }

    void print() {
        std::cout << "Static Singleton !!" << std::endl;
    }

  private:
    StaticSingleton() {}
    ~StaticSingleton() {}
    StaticSingleton(const StaticSingleton& copy);
    StaticSingleton& operator=(const StaticSingleton&);

  private:
    static StaticSingleton instance_;
};

StaticSingleton StaticSingleton::instance_;
