#pragma once

#include "product.h"

class Builder {
  public:
    virtual string getVendor() = 0;
    virtual MainBoard* getMainBoard() = 0;
    virtual CPU* getCPU() = 0;
    virtual GPU* getGPU() = 0;
    virtual RAM* getRAM() = 0;
    virtual Power* getPower() = 0;
};

class SamsungComputerBuilder : public Builder {
  public:
    string getVendor() { return "Samsung"; }
    MainBoard* getMainBoard() { return new MainBoard("ASRock"); }
    CPU* getCPU() { return new CPU("Intel"); }
    GPU* getGPU() { return new GPU("Nvidia"); }
    RAM* getRAM() { return new RAM("Samsung"); }
    Power* getPower() { return new Power("God Gung"); }
};

class AppleComputerBuilder : public Builder {
  public:
    string getVendor() { return "Apple"; }
    MainBoard* getMainBoard() { return new MainBoard("ASRock"); }
    CPU* getCPU() { return new CPU("AMD"); }
    GPU* getGPU() { return new GPU("Radeon"); }
    RAM* getRAM() { return new RAM("Samsung"); }
    Power* getPower() { return new Power("God Gung"); };
};
