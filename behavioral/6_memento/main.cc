#include "originator.h"
#include "caretaker.h"

int main() {
    Caretaker ct;
    Originator* org = new Originator();

    org->setState(10);
    ct.pushMemento(org->createMemento());

    org->setState(20);
    ct.pushMemento(org->createMemento());

    org->setMemento(ct.popMemento());
    org->setMemento(ct.popMemento());

    delete org;

    return 0;
}
