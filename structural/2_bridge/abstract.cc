#include "abstract.h"

ConcreteAbstractB::ConcreteAbstractB() {
    impl_ = new ConcreteImplementB();
}

void ConcreteAbstractB::process() {
    impl_->process();
}
