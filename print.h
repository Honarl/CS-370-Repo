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
            static void hi(int testarray[], int arraysize)
            {
                for (int i = 0; i < arraysize / sizeof(int); i++){
                    cout<<testarray[i];
                    cout<<" ";
                }
            }
            //long long int error bait
            static void hi(long testarray[], int arraysize)
            {
                for (int i = 0; i < arraysize / sizeof(long); i++){
                    cout<<testarray[i];
                    cout<<" ";
                }
            }
            //floats
            static void hi(float testarray[], int arraysize)
            {
                for (int i = 0; i < arraysize / sizeof(float); i++){
                    cout<<testarray[i];
                    cout<<" ";
                }
            }
            //double
            static void hi(double testarray[], int arraysize)
            {
                for (int i = 0; i < arraysize / sizeof(double); i++){
                    cout<<testarray[i];
                    cout<<" ";
                }
            }
            //char
            static void hi(char testarray[], int arraysize)
            {
                for (int i = 0; i < arraysize / sizeof(char); i++){
                    cout<<testarray[i];
                    cout<<" ";
                }
            }
            //string
            static void hi(string testarray[], int arraysize)
            {
                for (int i = 0; i < arraysize / sizeof(string); i++){
                    cout<<testarray[i];
                    cout<<" ";
                }
            }
            //bool
            static void hi(bool testarray[], int arraysize)
            {
                for (int i = 0; i < arraysize / sizeof(bool); i++){
                    cout<<testarray[i];
                    cout<<" ";
                }
            }
    };
}

#endif // PRINT_H_INCLUDED
