#ifndef SIAODLAB6_QSORT_CPP
#define SIAODLAB6_QSORT_CPP

void qsortRecursive(double *mas, int size, int &allsr)
{
    //    Указатели в начало и в конец массива
    int i = 0;
    int j = size - 1;

    //Центральный элемент массива
    double mid = mas[size / 2];

    //Делим массив
    do
    {
        //Пробегаем элементы, ищем те, которые нужно перекинуть в другую часть
        //В левой части массива пропускаем(оставляем на месте) элементы, которые меньше центрального
        while (mas[i] < mid)
        {
            allsr++;
            i++;
        }
        //В правой части пропускаем элементы, которые больше центрального
        while (mas[j] > mid)
        {
            allsr++;
            j--;
        }

        //Меняем элементы местами
        if (i <= j)
        {
            //            allsr++;
            double tmp = mas[i];
            mas[i] = mas[j];
            mas[j] = tmp;

            i++;
            j--;
        }
    } while (i <= j);

    //Рекурсивные вызовы, если осталось, что сортировать
    if (j > 0)
    {
        //"Левый кусок"
        qsortRecursive(mas, j + 1, allsr);
    }
    if (i < size)
    {
        //"Првый кусок"
        qsortRecursive(&mas[i], size - i, allsr);
    }
}

#endif