#include "invoker.h"

int main() {
    Invoker invoker;
    Receiver receiver;
    ConcreteCommand command;

    command.setRecevier(&receiver);
    invoker.setCommand(&command);
    invoker.execute();

    return 0;
}
