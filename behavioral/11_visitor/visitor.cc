#include "element.h"

void ConcreteVisitor::visitElementA(ConcreteElementA* e) {
    e->operationA();
}

void ConcreteVisitor::visitElementB(ConcreteElementB* e) {
    e->operationB();
}
