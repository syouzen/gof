#pragma once

#include <iostream>

class DynamicSingleton {
  public:
    static void destroy() {
        if (instance_ != nullptr) {
            delete instance_;
            instance_ = nullptr;
        }
    }

    static DynamicSingleton* getInstance() {
        if (instance_ == nullptr) {
            instance_ = new DynamicSingleton;
        }
        return instance_;
    }

    void print() {
        std::cout << "Dynamice Singleton !!" << std::endl;
    }

  private:
    DynamicSingleton() {}
    ~DynamicSingleton() {}
    DynamicSingleton(const DynamicSingleton& copy);
    DynamicSingleton& operator=(const DynamicSingleton&);

  private:
    static DynamicSingleton* instance_;
};

DynamicSingleton* DynamicSingleton::instance_ = nullptr;
