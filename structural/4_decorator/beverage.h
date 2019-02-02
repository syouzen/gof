#pragma once

#include <string>

using namespace std;

class Beverage {
  public:
    virtual string getDescription() {
        this->description_ = "";
    }

    virtual int cost() = 0;

  protected:
    string description_;
};

class Espresso : public Beverage {
  public:
    Espresso() {
        this->description_ = "Espresso";
    }

    string getDescription() {
        return this->description_;
    }

    int cost() {
        return 3000;
    }
};

class Decaf : public Beverage {
  public:
    Decaf() {
        this->description_ = "Decaf";
    }

    string getDescription() {
        return this->description_;
    }

    int cost() {
        return 5000;
    }
};
