#pragma once

#include "observer.h"

#include <algorithm>
#include <vector>

class Subject {
  public:
    void registerObserver(Observer* ob) { list_.push_back(ob); }
    void removeObserver(Observer* ob) {
        auto i = std::find(list_.begin(), list_.end(), ob);
        if (i != list_.end())
            list_.erase(i);
    }

    void notifyObservers() {
        for (auto& i : list_)
            i->update();
    }

    virtual int getState() const { return 0; }
    virtual void setState(int state) {}

  private:
    std::vector<Observer*> list_;
};

class ConcreteSubject : public Subject {
  public:
    int getState() const {
        return state_;
    }

    void setState(int state) {
        this->state_ = state;
        Subject::notifyObservers();
    }

  private:
    int state_;
};
