#include "facade.h"

int main() {
    SubClassA subA;
    SubClassB subB;
    SubClassC subC;

    Facade fac(&subA, &subB, &subC);

    fac.process();

    return 0;
}
