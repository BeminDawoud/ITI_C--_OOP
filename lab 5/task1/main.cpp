
#include "Base.h"
#include "Derived.h"

int main() {
    Base base1(5, 10);
    Derived derived1(3, 6, 9);

    cout << "Base sum: " << base1.sum() << endl;
    cout << "Derived sum: " << derived1.sum() << endl;

    return 0;
}
