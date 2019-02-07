#pragma once

#include <iostream>

class Observer {
  public:
    virtual void update() = 0;
};

class ConcreteSubject;
class ConcreteObserver : public Observer {
  public:
    ConcreteObserver(ConcreteSubject* subject);

    void update() override;

  private:
    ConcreteSubject* subject_;
};
