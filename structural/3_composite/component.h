#pragma once

class Component {
  public:
    virtual void process() = 0;
    virtual void add(Component* c) {}
    virtual void remove(Component* c) {}
    virtual Component* getComponent(int i) { return nullptr; }
};
