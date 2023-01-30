#ifndef PRINT_H_INCLUDED
#define PRINT_H_INCLUDED
#include <iostream>
#include "rogueutil.h"

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
