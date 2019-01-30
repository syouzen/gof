#pragma once

#include <iostream>

using namespace std;

class Phone {
  public:
    virtual void printPhoneInfo() = 0;
};

class GalaxyPhone : public Phone {
  public:
    void printPhoneInfo() override {
        cout << "This Phone is GalaxyPhone !" << endl;
    }
};

class IPhone : public Phone {
  public:
    void printPhoneInfo() override {
        cout << "This Phone is IPhone !" << endl;
    }
};
