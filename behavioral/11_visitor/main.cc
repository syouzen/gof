#include "element.h"

int main() {
    ConcreteElementA eA;
    ConcreteElementB eB;

    ConcreteVisitor v;

    eA.accept(&v);
    eB.accept(&v);

    return 0;
}
