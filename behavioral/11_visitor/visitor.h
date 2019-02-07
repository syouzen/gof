#pragma once

class ConcreteElementA;
class ConcreteElementB;
class Visitor {
  public:
    virtual void visitElementA(ConcreteElementA* e) = 0;
    virtual void visitElementB(ConcreteElementB* e) = 0;
};

class ConcreteVisitor : public Visitor {
  public:
    void visitElementA(ConcreteElementA* e);
    void visitElementB(ConcreteElementB* e);
};
