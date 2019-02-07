#include "subject.h"

int main() {
    ConcreteSubject subject;

    ConcreteObserver ob(&subject);

    subject.setState(10);
    subject.setState(20);

    return 0;
}
