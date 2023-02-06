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


    queue<string> testQueue;
    testQueue.push("TESTING");
    testQueue.push("All 21 Data Types Are Give Me Pain");
    testQueue.push("I'm not lying there are 21 overloads of one function");
    testQueue.push("CS 370");
    printerclass::printQueue(testQueue);

    int testarray[5] {15, 5, 32, 500000000, 1000};
	long testlong[5] {58694189,698541695,69856958,658415841,6584165};
	float testfloat[5] {5.2,64.875,349.22222,0.27943,1000000.3168};
	double testdouble[5] {5489.357,25,2654.215,658.2,3597.486357};
	char testchar[5] {'m','f','d','t','y'};
	string teststring[5] {"test", "work", "for", "me", "please"};
	bool testbool[5] {0,0,1,1,0};

	bubbleSort(testarray, sizeof(testarray));
	printerclass::print(testlong, sizeof(testlong));
	printerclass::print(testfloat, sizeof(testfloat));
	printerclass::print(testdouble, sizeof(testdouble));
	printerclass::print(testchar, sizeof(testchar));
	printerclass::print(teststring, sizeof(teststring));
	printerclass::print(testbool, sizeof(testbool));

    return 0;
}

//bubble sort
    void bubbleSort(int testarray[], int size)
	{
		int i,j,k,curr;
		int len = size / sizeof(int);
		//Greet user
		string user = getUsername();
		cout << "Hi "<< user << ", heres your bubble sort\n";

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
					/*for(k=0; k<=len-1; k++){
						if(testarray[k] == testarray[i] )
							cout << testarray[k] << " ";
						else
							cout << testarray[k] << " ";
					}*/
					    printerclass::print(testarray, size);
					cout << "\n";
				}
			}
		}
		//TODO - Underline values being switched
	}