#ifndef PRINT_H_INCLUDED
#define PRINT_H_INCLUDED
#include <iostream>
#include <string>
#include "rogueutil.h"

using namespace std;
using namespace rogueutil;

namespace printer
{
    class printerclass
    {
        public:
			// countig number of digits in each number
			static void countDigits(int testarray[], int numlength[], int length){
				for(int i = 0; i < length; i++){
					string s = to_string(testarray[i]);
					numlength[i] = s.length();
				}
			}
			// printing top and bottom of visual structure
			static void printTopNBot(int testarray[], int arraysize){
				int length = arraysize / sizeof(int);
				int numlength[length] = {};
				countDigits(testarray,numlength,length);
				cout<<"+";
				for(int i = 0; i < length; i++){
					for(int y = 0; y < numlength[i]; y++){
						cout<<"-";
					}
					cout<<"+";
				}
				cout<<endl;
			}
			// printing numbers with dividers between
			static void printNums(int testarray[], int arraysize){
				arraysize /= sizeof(int);
				cout<<"|";
				for(int i = 0; i < arraysize; i++){
					cout<<testarray[i]<<"|";
				}
				cout<<endl;
			}
			// countig number of digits in each number
			static void countDigits(long testarray[], int numlength[], int length){
				for(int i = 0; i < length; i++){
					string s = to_string(testarray[i]);
					numlength[i] = s.length();
				}
			}
			// printing top and bottom of visual structure
			static void printTopNBot(long testarray[], int arraysize){
				int length = arraysize / sizeof(long);
				int numlength[length] = {};
				countDigits(testarray,numlength,length);
				cout<<"+";
				for(int i = 0; i < length; i++){
					for(int y = 0; y < numlength[i]; y++){
						cout<<"-";
					}
					cout<<"+";
				}
				cout<<endl;
			}
			// printing numbers with dividers between
			static void printNums(long testarray[], int arraysize){
				arraysize /= sizeof(long);
				cout<<"|";
				for(int i = 0; i < arraysize; i++){
					cout<<testarray[i]<<"|";
				}
				cout<<endl;
			}
			// countig number of digits in each number
			static void countDigits(float testarray[], int numlength[], int length){
				for(int i = 0; i < length; i++){
					string s = to_string(testarray[i]);
					numlength[i] = s.length();
				}
			}
			// printing top and bottom of visual structure
			static void printTopNBot(float testarray[], int arraysize){
				int length = arraysize / sizeof(float);
				int numlength[length] = {};
				countDigits(testarray,numlength,length);
				cout<<"+";
				for(int i = 0; i < length; i++){
					for(int y = 0; y < numlength[i]; y++){
						cout<<"-";
					}
					cout<<"+";
				}
				cout<<endl;
			}
			// printing numbers with dividers between
			static void printNums(float testarray[], int arraysize){
				arraysize /= sizeof(float);
				cout<<"|";
				for(int i = 0; i < arraysize; i++){
					cout<<testarray[i]<<"|";
				}
				cout<<endl;
			}
			// countig number of digits in each number
			static void countDigits(double testarray[], int numlength[], int length){
				for(int i = 0; i < length; i++){
					string s = to_string(testarray[i]);
					numlength[i] = s.length();
				}
			}
			// printing top and bottom of visual structure
			static void printTopNBot(double testarray[], int arraysize){
				int length = arraysize / sizeof(double);
				int numlength[length] = {};
				countDigits(testarray,numlength,length);
				cout<<"+";
				for(int i = 0; i < length; i++){
					for(int y = 0; y < numlength[i]; y++){
						cout<<"-";
					}
					cout<<"+";
				}
				cout<<endl;
			}
			// printing numbers with dividers between
			static void printNums(double testarray[], int arraysize){
				arraysize /= sizeof(double);
				cout<<"|";
				for(int i = 0; i < arraysize; i++){
					cout<<testarray[i]<<"|";
				}
				cout<<endl;
			}			
			// countig number of chars
/*			static void countDigits(char testarray[], int numlength[], int length){
				for(int i = 0; i < length; i++){
					string s = to_string(testarray[i]);
					numlength[i] = s.length();
				}
			}
*/			// printing top and bottom of visual structure
			static void printTopNBot(char testarray[], int arraysize){
				int length = arraysize / sizeof(char);
//				int numlength[length] = {};
//				countDigits(testarray,numlength,length);
				cout<<"+";
				for(int i = 0; i < length; i++){
					cout<<"-+";
				}
				cout<<endl;
			}
			// printing chars with dividers between
			static void printNums(char testarray[], int arraysize){
				arraysize /= sizeof(char);
				cout<<"|";
				for(int i = 0; i < arraysize; i++){
					cout<<testarray[i]<<"|";
				}
				cout<<endl;
			}
			// countig number of digits in each number
			static void countDigits(string testarray[], int numlength[], int length){
				for(int i =0; i < length; i++){
					numlength[i] = testarray[i].length();
				}
		
			}
			// printing top and bottom of visual structure
			static void printTopNBot(string testarray[], int arraysize){
				int length = arraysize / sizeof(string);
				int numlength[length] = {};
				countDigits(testarray,numlength,length);
				cout<<"+";
				for(int i = 0; i < length; i++){
					for(int y = 0; y < numlength[i]; y++){
						cout<<"-";
					}
					cout<<"+";
				}
				cout<<endl;
			}
			// printing numbers with dividers between
			static void printNums(string testarray[], int arraysize){
				arraysize /= sizeof(string);
				cout<<"|";
				for(int i = 0; i < arraysize; i++){
					cout<<testarray[i]<<"|";
				}
				cout<<endl;
			}
			// countig number of digits in each number
			static void countDigits(bool testarray[], int numlength[], int length){
				for(int i = 0; i < length; i++){
					string s = to_string(testarray[i]);
					numlength[i] = s.length();
				}
			}
			// printing top and bottom of visual structure
			static void printTopNBot(bool testarray[], int arraysize){
				int length = arraysize / sizeof(bool);
				int numlength[length] = {};
				countDigits(testarray,numlength,length);
				cout<<"+";
				for(int i = 0; i < length; i++){
					for(int y = 0; y < numlength[i]; y++){
						cout<<"-";
					}
					cout<<"+";
				}
				cout<<endl;
			}
			// printing numbers with dividers between
			static void printNums(bool testarray[], int arraysize){
				arraysize /= sizeof(bool);
				cout<<"|";
				for(int i = 0; i < arraysize; i++){
					cout<<testarray[i]<<"|";
				}
				cout<<endl;
			}			
            //Overloads for each data type
            //ints
            static void print(int testarray[], int arraysize)
            {	
				printTopNBot(testarray,arraysize);
				printNums(testarray,arraysize);
				printTopNBot(testarray,arraysize);				
            }
            //long long int error bait
            static void print(long testarray[], int arraysize)
            {
				printTopNBot(testarray,arraysize);
				printNums(testarray,arraysize);
				printTopNBot(testarray,arraysize);		
            }
            //floats
            static void print(float testarray[], int arraysize)
            {
				printTopNBot(testarray,arraysize);
				printNums(testarray,arraysize);
				printTopNBot(testarray,arraysize);		
            }
            //double
            static void print(double testarray[], int arraysize)
            {
				printTopNBot(testarray,arraysize);
				printNums(testarray,arraysize);
				printTopNBot(testarray,arraysize);		
            }
            //char
            static void print(char testarray[], int arraysize)
            {
				printTopNBot(testarray,arraysize);
				printNums(testarray,arraysize);
				printTopNBot(testarray,arraysize);		
            }
            //string
            static void print(string testarray[], int arraysize)
            {
				printTopNBot(testarray,arraysize);
				printNums(testarray,arraysize);
				printTopNBot(testarray,arraysize);		
            }
            //bool
            static void print(bool testarray[], int arraysize)
            {
				printTopNBot(testarray,arraysize);
				printNums(testarray,arraysize);
				printTopNBot(testarray,arraysize);		
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
                            /*for(k=0; k<=len-1; k++){
                                if(testarray[k] == testarray[i] )
                                    cout << testarray[k] << " ";
                                else
                                    cout << testarray[k] << " ";
                            }*/
							print(testarray, size);
                            cout << "\n";
                        }
                    }
                }
                //TODO - Underline values being switched
            }
    };
}

#endif // PRINT_H_INCLUDED
