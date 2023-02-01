#include "print.h"
#include <iostream>
#include <stack>
#include <queue>



int main(void)
{

    queue<int> testQueue;
    testQueue.push(15);
    testQueue.push(5);
    testQueue.push(32);
    printer::printerclass::print(testQueue);

    stack<string> testStack;
    testStack.push("CS 370");
    testStack.push("All your data types are cause me pain");
    testStack.push("Vertical storage BAYBEEE");
    printer::printerclass::print(testStack);

    int testarray[5] {15, 5, 32, 500000000, 1000};

    printer::printerclass::bubbleSort(testarray, sizeof(testarray));

    return 0;
}
