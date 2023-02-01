#ifndef PRINT_H_INCLUDED
#define PRINT_H_INCLUDED
#include <iostream>
#include "rogueutil.h"
#include <stack>
#include <queue>

using namespace std;
using namespace rogueutil;

namespace printer
{
    class printerclass
    {
        public:
            //Overloads for each data type
            //ints
            static void print(int testarray[], int arraysize)
            {
                for (int i = 0; i < arraysize / sizeof(int); i++){
                    cout<<testarray[i];
                    cout<<" ";
                }
            }
            //long long int error bait
            static void print(long testarray[], int arraysize)
            {
                for (int i = 0; i < arraysize / sizeof(long); i++){
                    cout<<testarray[i];
                    cout<<" ";
                }
            }
            //floats
            static void print(float testarray[], int arraysize)
            {
                for (int i = 0; i < arraysize / sizeof(float); i++){
                    cout<<testarray[i];
                    cout<<" ";
                }
            }
            //double
            static void print(double testarray[], int arraysize)
            {
                for (int i = 0; i < arraysize / sizeof(double); i++){
                    cout<<testarray[i];
                    cout<<" ";
                }
            }
            //char
            static void print(char testarray[], int arraysize)
            {
                for (int i = 0; i < arraysize / sizeof(char); i++){
                    cout<<testarray[i];
                    cout<<" ";
                }
            }
            //string
            static void print(string testarray[], int arraysize)
            {
                for (int i = 0; i < arraysize / sizeof(string); i++){
                    cout<<testarray[i];
                    cout<<" ";
                }
            }
            //bool
            static void print(bool testarray[], int arraysize)
            {
                for (int i = 0; i < arraysize / sizeof(bool); i++){
                    cout<<testarray[i];
                    cout<<" ";
                }
            }

            //Going to try and add the same thing for stacks and queues soon
            static void print(stack<int>& teststack){
                stack<int> tempStack;
                tempStack = teststack;
                while (!tempStack.empty()){
                    cout<<tempStack.top();
                    tempStack.pop();
                    cout<<endl;
                }
            }
            static void print(stack<long>& teststack){
                stack<long> tempStack;
                tempStack = teststack;
                while (!tempStack.empty()){
                    cout<<tempStack.top();
                    tempStack.pop();
                    cout<<endl;
                }
            }
            static void print(stack<float>& teststack){
                stack<float> tempStack;
                tempStack = teststack;
                while (!tempStack.empty()){
                    cout<<tempStack.top();
                    tempStack.pop();
                    cout<<endl;
                }
            }
            static void print(stack<double>& teststack){
                stack<double> tempStack;
                tempStack = teststack;
                while (!tempStack.empty()){
                    cout<<tempStack.top();
                    tempStack.pop();
                    cout<<endl;
                }
            }
            static void print(stack<char>& teststack){
                stack<char> tempStack;
                tempStack = teststack;
                while (!tempStack.empty()){
                    cout<<tempStack.top();
                    tempStack.pop();
                    cout<<endl;
                }
            }
            static void print(stack<string>& teststack){
                stack<string> tempStack;
                tempStack = teststack;
                while (!tempStack.empty()){
                    cout<<tempStack.top();
                    tempStack.pop();
                    cout<<endl;
                }
            }
            static void print(stack<bool>& teststack){
                stack<bool> tempStack;
                tempStack = teststack;
                while (!tempStack.empty()){
                    cout<<tempStack.top();
                    tempStack.pop();
                    cout<<endl;
                }
            }
            static void print(queue<int>& testQueue){
                queue<int> tempQueue;
                tempQueue = testQueue;
                cout<<"FIRST IN STACK -> ";
                while (!tempQueue.empty()){
                    cout<<tempQueue.front()<<" ";
                    tempQueue.pop();
                }
                cout<<"<- LAST IN STACK"<<endl;
            }
            static void print(queue<long>& testQueue){
                queue<long> tempQueue;
                tempQueue = testQueue;
                cout<<"FIRST IN STACK -> ";
                while (!tempQueue.empty()){
                    cout<<tempQueue.front()<<" ";
                    tempQueue.pop();
                }
                cout<<"<- LAST IN STACK"<<endl;
            }
            static void print(queue<float>& testQueue){
                queue<float> tempQueue;
                tempQueue = testQueue;
                cout<<"FIRST IN STACK -> ";
                while (!tempQueue.empty()){
                    cout<<tempQueue.front()<<" ";
                    tempQueue.pop();
                }
                cout<<"<- LAST IN STACK"<<endl;
            }
            static void print(queue<double>& testQueue){
                queue<double> tempQueue;
                tempQueue = testQueue;
                cout<<"FIRST IN STACK -> ";
                while (!tempQueue.empty()){
                    cout<<tempQueue.front()<<" ";
                    tempQueue.pop();
                }
                cout<<"<- LAST IN STACK"<<endl;
            }
            static void print(queue<char>& testQueue){
                queue<char> tempQueue;
                tempQueue = testQueue;
                cout<<"FIRST IN STACK -> ";
                while (!tempQueue.empty()){
                    cout<<tempQueue.front()<<" ";
                    tempQueue.pop();
                }
                cout<<"<- LAST IN STACK"<<endl;
            }
            static void print(queue<string>& testQueue){
                queue<string> tempQueue;
                tempQueue = testQueue;
                cout<<"FIRST IN STACK -> ";
                while (!tempQueue.empty()){
                    cout<<tempQueue.front()<<" ";
                    tempQueue.pop();
                }
                cout<<"<- LAST IN STACK"<<endl;
            }
            static void print(queue<bool>& testQueue){
                queue<bool> tempQueue;
                tempQueue = testQueue;
                cout<<"FIRST IN STACK -> ";
                while (!tempQueue.empty()){
                    cout<<tempQueue.front()<<" ";
                    tempQueue.pop();
                }
                cout<<"<- LAST IN STACK"<<endl;
            }
            //End the stacks/queues section

            //bubble sort
            static void bubbleSort(int testarray[], int size)
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
                            for(k=0; k<=len-1; k++){
                                if(testarray[k] == testarray[i] )
                                    cout << testarray[k] << " ";
                                else
                                    cout << testarray[k] << " ";
                            }
                            cout << "\n";
                        }
                    }
                }
                //TODO - Underline values being switched
            }
    };
}

#endif // PRINT_H_INCLUDED
