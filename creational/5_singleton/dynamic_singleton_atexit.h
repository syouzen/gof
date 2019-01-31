#pragma once

#include <stdlib.h>
#include <iostream>

class DynamicSingletonAtExit {
  public:
    static void destroy() {
        if (instance_ != nullptr) {
            delete instance_;
            instance_ = nullptr;
        }
    }

    static DynamicSingletonAtExit* getInstance() {
        if (instance_ == nullptr) {
            instance_ = new DynamicSingletonAtExit;
            atexit(destroy);
        }
        return instance_;
    }

    void print() {
          std::cout << "Dynamice Singleton with atexit() !!" << std::endl;
           
    }

  private:
    DynamicSingletonAtExit() {}
    ~DynamicSingletonAtExit() {}
    DynamicSingletonAtExit(const DynamicSingletonAtExit& copy);
    DynamicSingletonAtExit& operator=(const DynamicSingletonAtExit&);

  private:
    static DynamicSingletonAtExit* instance_;
};

DynamicSingletonAtExit* DynamicSingletonAtExit::instance_ = nullptr;
