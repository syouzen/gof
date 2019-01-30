#pragma once

#include "product.h"

class PhoneCreator {
  public:
    Phone* make() { return makePhone(); }

  protected:
    virtual Phone* makePhone() = 0;
};

class GalaxyPhoneCreator : public PhoneCreator {
  public:
    Phone* makePhone() override {
        return new GalaxyPhone();
    }
};

class IPhoneCreator : public PhoneCreator {
  public:
    Phone* makePhone() override {
        return new IPhone();
    }
};
