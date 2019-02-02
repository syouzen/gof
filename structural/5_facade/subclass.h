#pragma once

#include <iostream>

using namespace std;

class SubClassA {
  public:
    void process() { cout << "SubClassA !!" << endl; }
};

class SubClassB {
  public:
    void process() { cout << "SubClassB !!" << endl; }
};

class SubClassC {
  public:
    void process() { cout << "SubClassC !!" << endl; }
};
