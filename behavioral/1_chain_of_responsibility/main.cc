#include "handler.h"

int main() {
    Handler* handler = new ConcreteHandlerA(new ConcreteHandlerB(nullptr));

    handler->handleRequest(true);
    handler->handleRequest(false);

    delete handler;

    return 0;
}
