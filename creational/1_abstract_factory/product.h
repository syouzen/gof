#include <iostream>

using namespace std;

class Product {
  public:
    virtual void printProductInfo() = 0;
};

class GalaxyPhone : public Product {
  public:
    void printProductInfo() { cout << "GalaxyPhone Created !" << endl; }
};

class GalaxyPad : public Product {
  public:
    void printProductInfo() { cout << "GalaxyPad Created !" << endl; }
};

class IPhone : public Product {
  public:
    void printProductInfo() { cout << "IPhone Created !" << endl; }
};

class IPad : public Product {
  public:
    void printProductInfo() { cout << "IPad Created !" << endl; }
};
