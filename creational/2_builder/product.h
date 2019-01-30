#pragma once

#include <iostream>
#include <string>

using namespace std;

class MainBoard {
  public:
    MainBoard(string vendor) : vendor_(vendor) {}
    void printVendor() { cout << "Mainboard Vendor is " << vendor_ << endl; }

  private:
    string vendor_;
};

class CPU {
  public:
    CPU(string vendor) : vendor_(vendor) {}
    void printVendor() { cout << "CPU Vendor is " << vendor_ << endl; }

  private:
    string vendor_;
};

class GPU {
  public:
    GPU(string vendor) : vendor_(vendor) {}
    void printVendor() { cout << "GPU Vendor is " << vendor_ << endl; }

  private:
    string vendor_;
};

class RAM {
  public:
    RAM(string vendor) : vendor_(vendor) {}
    void printVendor() { cout << "RAM Vendor is " << vendor_ << endl; }

  private:
    string vendor_;
};

class Power {
  public:
    Power(string vendor) : vendor_(vendor) {}
    void printVendor() { cout << "Power Vendor is " << vendor_ << endl; }

  private:
    string vendor_;
};

class Computer {
  public:
    Computer(string vendor)
        : vendor_(vendor), main_board_(nullptr), cpu_(nullptr), gpu_(nullptr), ram_(nullptr), power_(nullptr) {}
    ~Computer() {
        if (main_board_ != nullptr) delete main_board_;
        if (cpu_ != nullptr) delete cpu_;
        if (gpu_ != nullptr) delete gpu_;
        if (ram_ != nullptr) delete ram_;
        if (power_ != nullptr) delete power_;
    }

    void buildMainBoard(MainBoard* main_board) {
        this->main_board_ = main_board;
    }

    void buildCPU(CPU* cpu) {
        this->cpu_ = cpu;
    }

    void buildGPU(GPU* gpu) {
        this->gpu_ = gpu;
    }

    void buildRAM(RAM* ram) {
        this->ram_ = ram;
    }

    void buildPower(Power* power) {
        this->power_ = power;
    }

    void printPartInfo() {
        cout << "This Computer is made by " << vendor_ << " !!" << endl;

        main_board_->printVendor();
        cpu_->printVendor();
        gpu_->printVendor();
        ram_->printVendor();
        power_->printVendor();
    }

  private:
    string vendor_;
    MainBoard* main_board_;
    CPU* cpu_;
    GPU* gpu_;
    RAM* ram_;
    Power* power_;
};
