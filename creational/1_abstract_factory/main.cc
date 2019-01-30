#include "factory.h"

int main() {
    /* Case 1 */
    AbstractFactory* factoryA = new SamsungFactory();
    Product* productA = factoryA->createProductA();
    Product* productB = factoryA->createProductB();

    productA->printProductInfo();
    productB->printProductInfo();

    delete productA;
    delete productB;
    delete factoryA;

    /* Case 2 */
    AbstractFactory* factoryB = new AppleFactory();
    Product* productC = factoryA->createProductA();
    Product* productD = factoryA->createProductB();

    productC->printProductInfo();
    productD->printProductInfo();

    delete productC;
    delete productD;
    delete factoryB;

    return 0;
}
