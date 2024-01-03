
#include "Base.h"
#include "Derived.h"

int main() {
    Base base1(5, 10);
    Base *basePtr = new Derived(3,5,10);
    cout << "Base sum: " << base1.sum() << endl;
    cout << "Derived sum: " << basePtr->sum() << endl;

    return 0;
}
