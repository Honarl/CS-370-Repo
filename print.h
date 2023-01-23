#ifndef PRINT_H_INCLUDED
#define PRINT_H_INCLUDED
#include <iostream>

namespace printer
{
    class printerclass
    {
        public:
            static void hi()
            {
                std::cout<<"Yo.";
            }
    };
}

#endif // PRINT_H_INCLUDED
