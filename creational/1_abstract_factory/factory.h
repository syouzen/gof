#include "product.h"

class AbstractFactory {
  public:
    virtual Product* createProductA() = 0;
    virtual Product* createProductB() = 0;
};

class SamsungFactory : public AbstractFactory {
  public:
    Product* createProductA() override {
        return new GalaxyPhone();
    }

    Product* createProductB() override {
        return new GalaxyPad();
    }
};

class AppleFactory : public AbstractFactory {
  public:
    Product* createProductA() override {
        return new IPhone();
    }

    Product* createProductB() override {
        return new IPad();
    }
};
