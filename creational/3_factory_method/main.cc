#include "creator.h"

int main() {
    /* case 1 */
    PhoneCreator* crtA = new GalaxyPhoneCreator();

    Phone* phoneA = crtA->make();
    phoneA->printPhoneInfo();

    delete phoneA;
    delete crtA;

    /* case 2 */
    PhoneCreator* crtB = new IPhoneCreator();

    Phone* phoneB = crtB->make();
    phoneB->printPhoneInfo();

    delete phoneB;
    delete crtB;

    return 0;
}
