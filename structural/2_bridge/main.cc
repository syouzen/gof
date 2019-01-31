#include "abstract.h"

int main() {
    ConcreteImplementA impl;
    ConcreteAbstractA abA(&impl);
    ConcreteAbstractB* abB = new ConcreteAbstractB();

    abA.process();
    abB->process();

    delete abB;

    return 0;
}
