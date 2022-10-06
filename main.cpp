//Пусть даны три файла вещественных чисел, состоящих из 100,
// 1000 и 10000 чисел. Выполнить сортировку данных с помощью метода быстрой сортировки.
// Подсчитать количество операций сравнения для каждого из трех файлов.

#include <iostream>
#include <fstream>
#include "qsort.cpp"
#include "kolforalg.cpp"
#include "toFile.cpp"
#include "toArray.cpp"

using namespace std;

int main()
{
    ifstream file100("file1.txt");
    ifstream file1000("file2.txt");
    ifstream file10000("file3.txt");
    ofstream out100("out100.txt");
    ofstream out1000("out1000.txt");
    ofstream out10000("out10000.txt");
    double array100[100];
    double array1000[1000];
    double array10000[10000];
    int allsr100 = 0;
    int allsr1000 = 0;
    int allsr10000 = 0;

    // toFilesRand(file100, file1000, file10000);

    toArray(file100, file1000, file10000, array100, array1000, array10000);

    qsortRecursive(array100, 100, allsr100);
    qsortRecursive(array1000, 1000, allsr1000);
    qsortRecursive(array10000, 10000, allsr10000);

    cout << "iteraions100 = " << allsr100 << "\niteratiosns1000 = " << allsr1000 << "\niterations10000 = " << allsr10000 << endl;

    toFilesPost(out100, out1000, out10000, array100, array1000, array10000);

    cout << ch(100) << endl;

    return 0;
}
