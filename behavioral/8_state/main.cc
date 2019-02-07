#include "context.h"

int main() {
    Context ctxA(new ConcreteStateA);
    Context ctxB(new ConcreteStateB);

    ctxA.request();
    ctxB.request();
	
	return 0;
}
