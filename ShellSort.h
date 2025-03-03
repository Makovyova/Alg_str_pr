// ShellSort.h
#ifndef SHELLSORT_H
#define SHELLSORT_H

/*shellsort : Стандартная реализация сортировки Шелла 
с использованием шага, равного половине размера подмассива.*/
void shellsort(int* l, int* r); 
/*shellsorthib: Вариант сортировки Шелла, 
который использует другой способ определения начального шага.*/
void shellsorthib(int* l, int* r);
/*shellsortsedgwick: Реализация сортировки Шелла 
с использованием последовательности шагов, предложенной Седжвиком, 
которая генерирует шаги по определенной формуле.*/
void shellsortsedgwick(int* l, int* r);
/*shellsortpratt: Реализация сортировки Шелла 
с использованием последовательности шагов, предложенной Праттом, 
которая также генерирует шаги по определенной формуле.*/
void shellsortpratt(int* l, int* r);
/*myshell1, myshell2, myshell3: Эти функции представляют собой 
различные варианты сортировки Шелла 
с использованием собственных формул для генерации шагов.*/
void myshell1(int* l, int* r);
void myshell2(int* l, int* r);
void myshell3(int* l, int* r);


#endif // SHELLSORT_H