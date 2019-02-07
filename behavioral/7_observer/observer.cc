#include "subject.h"

ConcreteObserver::ConcreteObserver(ConcreteSubject* subject) : subject_(subject) {
    subject_->registerObserver(this);
}

void ConcreteObserver::update() {
    std::cout << "Update !! : " << subject_->getState() << std::endl;
}
