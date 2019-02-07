#pragma once

#include <iostream>

class Handler {
  public:
    Handler(Handler* handle) : handle_(handle) {}
    ~Handler() {
        if (handle_ != nullptr) delete handle_;
    }

    virtual void handleRequest(bool tf) {
        if (handle_ != nullptr) handle_->handleRequest(tf);
    }

  private:
    Handler* handle_;
};

class ConcreteHandlerA : public Handler {
  public:
    ConcreteHandlerA(Handler* handle) : Handler(handle) {}

    void handleRequest(bool tf) override {
        if (tf)
            std::cout << "ConcreteHandlerA : TRUE !!" << std::endl;
        else
            Handler::handleRequest(tf);
    }
};

class ConcreteHandlerB : public Handler {
  public:
    ConcreteHandlerB(Handler* handle) : Handler(handle) {}

    void handleRequest(bool tf) override {
        if (!tf)
            std::cout << "ConcreteHandlerB : FALSE !!" << std::endl;
        else
            Handler::handleRequest(tf);
    }
};
