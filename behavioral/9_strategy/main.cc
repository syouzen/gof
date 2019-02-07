#include "context.h"

int main(){
    Context* ctx = new Context();

    ctx->changeStrategy(new ConcreteStrategyA);
    ctx->execute();

    ctx->changeStrategy(new ConcreteStrategyB);
    ctx->execute();

    delete ctx;

    return 0;
}
