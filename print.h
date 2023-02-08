#ifndef PRINT_H_INCLUDED
#define PRINT_H_INCLUDED
#include <iostream>
#include <limits>
#include "rogueutil.h"
#include <stack>
#include <queue>
#include <typeinfo>
#include <string>
#include <sstream>

using namespace std;
using namespace rogueutil;

namespace printer
{
    class printerclass
    {
        public:
			// counting number of digits in each entry of array
			template<typename T>
			static void countDigits(T testarray[], int numlength[], int length){
				for(int i = 0; i < length; i++){
					ostringstream str1;				// output string stream
					str1 << testarray[i];			// sending number to output as string
					string number = str1.str();		// converting to string
					numlength[i] = number.length(); // getting length
				}	
			}
			// print surrounding lines to array
			template<typename T>
			static void printTop(T testarray[], int arraysize){
				int length = arraysize / sizeof(T);
				int numlength[length] = {};
				countDigits(testarray,numlength,length);
				setColor(GREEN);
				cout<<"+";
				for(int i = 0; i < length; i++){
					for(int y = 0; y < numlength[i]; y++){
						cout<<"-";
					}
					cout<<"+";
				}
				cout<<endl;
				setColor(WHITE);
			}
			// printing numbers separated
			template<typename T>
			static void printNums(T testarray[], int arraysize){
				arraysize /= sizeof(T);
				setColor(GREEN);
				cout<<"|";
				setColor(WHITE);
				for(int i = 0; i < arraysize; i++){
					cout<<testarray[i];
					setColor(GREEN);
					cout<<"|";
					setColor(WHITE);
				}
				cout<<endl;
			}
						// print surrounding lines to array
			template<typename T>
			static void printBot(T testarray[], int arraysize){
				int length = arraysize / sizeof(T);
				int numlength[length] = {};
				countDigits(testarray,numlength,length);
				setColor(GREEN);
				cout<<"+";
				for(int i = 0; i < length; i++){
					for(int y = 0; y < numlength[i]; y++){
							cout<<"-";
					}
					cout<<"+";
				}
				setColor(LIGHTGREEN);
				cout<<endl;
				cout<<" ";
				for(int i = 0; i < length; i++){
					for(int y = 0; y < numlength[i]; y++){
						if( y == (numlength[i]/2))
							cout<<i;
						
						cout<<" ";
					}
				}
				cout<<endl;
				setColor(WHITE);
			}
			// printing full structure
			template<typename T>
            static void printArray(T testarray[], int arraysize)
            {
				printTop(testarray,arraysize);
				printNums(testarray,arraysize);
				printBot(testarray,arraysize);
            }

            //Going to try and add the same thing for stacks and queues soon
			template<typename T>
            static void printStack(stack<T>& teststack)
            {
                //Create a temporary stack to hold the info
                stack<T> tempStack;
                //Clone the input stack
                tempStack = teststack;
				colorPrint(RED,NOCOLOR,"TOP");
				setColor(WHITE);
				cout<<endl;
                while (!tempStack.empty()){
                    //Spit out the top item of the temporary stack
                    cout<<"\t|"<<tempStack.top()<<"|";
                    //Move through the stack
                    tempStack.pop();
                    //Vertical formatting
                    cout<<endl;
				}
				colorPrint(RED,NOCOLOR,"BOTTOM");
				setColor(WHITE);
				cout<<endl;                
            }
			template<typename T>
            static void printQueue(queue<T>& testQueue){
                //Make the temporary queue
                queue<T> tempQueue;
                //Clone the temporary queue
                tempQueue = testQueue;
                //Tell me who is first
                colorPrint(CYAN,NOCOLOR,"FIRST IN QUEUE -> ");
				setColor(WHITE);
                while (!tempQueue.empty()){
                    //Puke out items separated by space
                    cout<<"("<<tempQueue.front()<<") ";
                    //Kill it
                    tempQueue.pop();
                }
                //Tell me what's at the end and then endl for formatting
                colorPrint(CYAN,NOCOLOR,"<- LAST IN QUEUE");
				setColor(WHITE);
				cout<<endl;
            }
 
            //End the stacks/queues section
 
    };
}

#endif // PRINT_H_INCLUDED
