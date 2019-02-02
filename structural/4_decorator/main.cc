#include "decorator.h"

#include <iostream>

int main() {
    Beverage* esp = new Mocha(new Whip(new Espresso()));
    cout << "Cost : " << esp->cost() << endl;
    cout << "Name : " << esp->getDescription() << endl;

    Beverage* decaf = new Mocha((new Decaf()));
    cout << "Cost : " << decaf->cost() << endl;
    cout << "Name : " << decaf->getDescription() << endl;

    return 0;
}
