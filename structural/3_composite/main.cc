#include "composite.h"
#include "leaf.h"

int main() {
    Leaf leafA;
    Leaf leafB;

    Composite comp;

    comp.add(&leafA);
    comp.add(&leafB);

    comp.process();

    return 0;
}
