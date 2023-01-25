#include "print.h"
#include <iostream>

using namespace printer;

int main(void)
{
    int testarray[5] {15, 5, 32, 1000, 500000000};


    printerclass::hi(testarray, sizeof(testarray));

    return 0;
}
