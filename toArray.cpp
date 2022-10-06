#ifndef Array
#define Array

#include <fstream>

void toArray(
    ifstream &file100,
    ifstream &file1000,
    ifstream &file10000,
    double *array100,
    double *array1000,
    double *array10000)
{
        for (int i = 0; i < 100; i++)
        {
                file100 >> array100[i];
        }

        for (int i = 0; i < 1000; i++)
        {
                file1000 >> array1000[i];
        }

        for (int i = 0; i < 10000; i++)
        {
                file10000 >> array10000[i];
        }
}

#endif