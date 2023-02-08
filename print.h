#ifndef PRINT_H_INCLUDED
#define PRINT_H_INCLUDED
#include <iostream>
#include <cmath>
#include "rogueutil.h"
#include <stack>
#include <queue>
#include <typeinfo>

using namespace std;
using namespace rogueutil;

namespace printer
{
    class printerclass
    {
        public:
			template<typename T>
			static void printTopNBot(T testarray[], int arraysize){
				int length = arraysize / sizeof(T);
				//int numlength[length] = {};
				cout<<"+";
				for(int i = 0; i < length; i++){
					for(int y = 0; y < 10; y++){
						cout<<"-";
					}
					cout<<"+";
				}
				cout<<endl;
			}
			template<typename T>
			static void printNums(T testarray[], int arraysize){
				arraysize /= sizeof(T);
				cout<<"|";
				for(int i = 0; i < arraysize; i++){
					cout<<testarray[i]<<"|";
				}
				cout<<endl;
			}
			// counting number of digits in each number
/*			static void countDigits(int testarray[], int numlength[], int length){
				for(int i = 0; i < length; i++){
					string s = to_string(testarray[i]);
					numlength[i] = s.length();
				}
			}
*/	 
			template<typename T>
            static void print(T testarray[], int arraysize)
            {
				printTopNBot(testarray,arraysize);
				printNums(testarray,arraysize);
				printTopNBot(testarray,arraysize);
            }

            //Going to try and add the same thing for stacks and queues soon
			template<typename T>
            static void printStack(stack<T>& teststack)
            {
                //Create a temporary stack to hold the info
                stack<T> tempStack;
                //Clone the input stack
                tempStack = teststack;
                //Display the top of Stack
                cout <<tempStack.top() << " <--- Top of Stack\n";
                tempStack.pop();
                while (!tempStack.empty()){
                    //Display the bottom of the Stack
                    if(tempStack.size() == 1){
                        cout << tempStack.top() << " <--- Bottom of Stack\n";
                        tempStack.pop();
                        break;
                        }
                    //Spit out the top item of the temporary stack
                    std::cout<<tempStack.top();
                    //Move through the stack
                    tempStack.pop();
                    //Vertical formatting
                    std::cout << "\n";
                }
            }
			template<typename T>
            static void printQueue(queue<T>& testQueue){
                //Make the temporary queue
                queue<T> tempQueue;
                //Clone the temporary queue
                tempQueue = testQueue;
                //Tell me who is first
                cout<<"FIRST IN QUEUE -> ";
                while (!tempQueue.empty()){
                    //Puke out items separated by space
                    cout<<tempQueue.front()<<" ";
                    //Kill it
                    tempQueue.pop();
                }
                //Tell me what's at the end and then endl for formatting
                cout<<"<- LAST IN QUEUE"<<endl;
            }
 
            //End the stacks/queues section

            
    };
}

#endif // PRINT_H_INCLUDED
