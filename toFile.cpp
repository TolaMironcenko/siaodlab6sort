#ifndef SIAODLAB6_TOFILE_CPP
#define SIAODLAB6_TOFILE_CPP

#include <fstream>
#include <iostream>

using namespace std;

void toFilesRand(ofstream &file100, ofstream &file1000, ofstream &file10000)
{
    srand(time(nullptr));
    for (int i = 0; i < 100; i++)
    {
        file100 << (double)rand() / ((double)(RAND_MAX / (100 - 1))) << " "; // setprecision(10) << MIN + (double)(rand()) / ((double)(RAND_MAX/(MAX - MIN))) << " ";
    }
    for (int i = 0; i < 1000; i++)
    {
        file1000 << (double)rand() / ((double)(RAND_MAX / (100 - 1))) << " "; // setprecision(10) << MIN + (double)(rand()) / ((double)(RAND_MAX/(MAX - MIN))) << " ";
    }
    for (int i = 0; i < 10000; i++)
    {
        file10000 << (double)rand() / ((double)(RAND_MAX / (100 - 1))) << " "; // setprecision(10) << MIN + (double)(rand()) / ((double)(RAND_MAX/(MAX - MIN))) << " ";
    }
}

void toFilesPost(
    ofstream &out100,
    ofstream &out1000,
    ofstream &out10000,
    double *array100,
    double *array1000,
    double *array10000)
{
    for (int i = 0; i < 100; i++)
    {
        out100 << array100[i] << " ";
    }
    for (int i = 0; i < 1000; i++)
    {
        out1000 << array1000[i] << " ";
    }
    for (int i = 0; i < 10000; i++)
    {
        out10000 << array10000[i] << " ";
    }
}

#endif