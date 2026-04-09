#include "car.h"
#include <iostream>
#include <string>

int main()
{
    car meinerstesauto;
    car meinzweitesauto{"BMW", "M3 Cabrio", 2000, 150000};
    cout << meinzweitesauto.get_year() << endl;
    meinzweitesauto.drive(100);
    meinzweitesauto.displayInfo();
}