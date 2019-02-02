#include "proxy.h"

int main() {
    Subject* proxy = new Proxy();
    proxy->request();

    delete proxy;

    return 0;
}
