#include "dynamic_singleton.h"
#include "dynamic_singleton_atexit.h"
#include "static_singleton.h"
#include "static_singleton_local.h"

int main() {
    /* Case 1 : Dynamic Singleton */
    DynamicSingleton* pObjA = DynamicSingleton::getInstance();
    pObjA->print();
    pObjA->destroy();

    /* Case 2 : Static Singleton */
    StaticSingleton* pObjB = StaticSingleton::getInstance();
    pObjB->print();

    /* Case 3 : Dynamic Singleton with atexit() */
    DynamicSingletonAtExit* pObjC = DynamicSingletonAtExit::getInstance();
    pObjC->print();

    /* Case 4 : Local Static Singleton */
    StaticSingletonLocal& ObjD = StaticSingletonLocal::getInstance();
    ObjD.print();

    return 0;
}
