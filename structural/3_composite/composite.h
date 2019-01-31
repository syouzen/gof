#pragma once

#include "component.h"

#include <algorithm>
#include <vector>

class Composite : public Component {
  public:
    void process() override {
        for (auto& i : clist_)
            i->process();
    }

    void add(Component* c) override {
        clist_.push_back(c);
    }

    void remove(Component* c) override {
        auto i = std::find(clist_.begin(), clist_.end(), c);
        if (i != clist_.end()) {
            clist_.erase(i);
        }
    }

    Component* getComponent(int i) override {
        return ((clist_.size() != 0) && (clist_.size())) > i ? clist_[i] : nullptr;
    }

  private:
    std::vector<Component*> clist_;
};
