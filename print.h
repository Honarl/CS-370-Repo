#ifndef PRINT_H_INCLUDED
#define PRINT_H_INCLUDED
#include <iostream>
using namespace std;

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
    };
}

#endif // PRINT_H_INCLUDED
