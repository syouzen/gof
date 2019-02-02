#include "flyweight.h"

int main() {
    FlyweightFactory ff;
    Flyweight* fw = ff.getFlyweight(0);
    fw->process();

    delete fw;

    return 0;
}
