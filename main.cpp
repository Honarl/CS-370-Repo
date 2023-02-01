#include "print.h"
#include <iostream>

using namespace printer;

int main(void)
{
    int testarray[5] {15, 5, 32, 500000000, 1000};

    printerclass::bubbleSort(testarray, sizeof(testarray));

    return 0;
}
