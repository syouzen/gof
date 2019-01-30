#include "prototype.h"

int main() {
    Prototype* pOrigin = new ConcretePrototypeA("A");
    Prototype* pClone = pOrigin->clone();

    pOrigin->printPrototypeInfo();
    pClone->printPrototypeInfo();

    delete pClone;
    delete pOrigin;

    return 0;
}
