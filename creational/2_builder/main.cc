#include "director.h"

int main() {
    /* Case 1 */
    Director* pDirectorA = new Director(new SamsungComputerBuilder());
    Computer* pComA = pDirectorA->buildComputer();

    pComA->printPartInfo();

    delete pDirectorA;
    delete pComA;

    cout << "" << endl;

    /* Case 2 */
    Director* pDirectorB = new Director(new AppleComputerBuilder());
    Computer* pComB = pDirectorB->buildComputer();

    pComB->printPartInfo();

    delete pDirectorB;
    delete pComB;

    return 0;
}
