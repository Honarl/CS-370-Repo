#include "print.h"
#include <iostream>
#include <stack>
#include <queue>

using namespace printer;

int main(void)
{
	void bubbleSort(int testarray[], int size);

    stack<int> testStack;
    testStack.push(15);
    testStack.push(35);
    testStack.push(12);
    printerclass::printStack(testStack);
	cout<<endl;

	anykey();

    queue<string> testQueue;
    testQueue.push("TESTING");
    testQueue.push("All 21 Data Types Are Give Me Pain");
    testQueue.push("I'm not lying there were are 21 overloads of one function");
    testQueue.push("CS 370");
    printerclass::printQueue(testQueue);
	cout<<endl;
	
	anykey();

    int testint[5] = {15, 5, 32, 500000000, 1000};
	float testfloat[5] = {5.2,64.875,349.22222,0.27943,1000000.3168};


	printerclass::printArray(testfloat, sizeof(testfloat));
	anykey();

	bubbleSort(testint, sizeof(testint));

    return 0;
}

//bubble sort
    void bubbleSort(int testarray[], int size)
	{
		int i,j,k,curr;
		int len = size / sizeof(int);
		cout<<"--Starting bubble sort state--"<<endl;
		printerclass::printArray(testarray, size);

		//Sort array comparing index value with next Pos
		for(i=0;i<=len-2;i++){
			for(j=i+1;j<=len-1;j++){
				if(testarray[i] > testarray[j]){
					//Change value with next Position
					curr = testarray[i];
					testarray[i] = testarray[j];
					testarray[j] = curr;

					//Print current state of array
					cout << "Press any key to advance...\n";
					anykey();
					cout << "\n--Current State--\n";
				    printerclass::printArray(testarray, size);
					cout << "\n";
				}
			}
		}
		//TODO - Underline values being switched
	}