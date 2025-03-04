#include <iostream>
#include <vector>
//1
#include "MinXValue.h"
//2
#include "BubbleSort.h"
#include "ShakerSort.h"
#include "CombSort.h"
#include "InsertionSort.h"
#include "ShellSort.h"
#include "TreeSort.h"
#include "GnomeSort.h"
#include "SelectionSort.h"
#include "HeapSort.h"
#include "QuickSort.h"
#include "MergeSort.h" 
#include "BucketSort.h"
#include "RadixSort.h"
#include "BitonicSort.h"
#include "TimSort.h"
//3
#include "BinaryTree.h"
//4,5
#include "Date.h"
#include "BankersAlgorithm.h"
#include "PotentialMethod.h"

// Объявление функции из второго файла
void binarySearchMaxN(int X);

int main() {
    // Устанавливаем кодировку для корректного отображения русских символов
    system("chcp 1251");

    int practiceChoice;
    int taskChoice1, taskChoice2, taskChoice3, taskChoice4;
    int shellChoise, quickChoise, mergeChoise, radixChoise;
    int X;

    //std::vector<int> arr; 

    do {
        std::cout << "Выберите практику:\n";
        std::cout << "1. Практика 1: Проблема двоичного поиска.\n";
        std::cout << "2. Практика 2: Примеры использования ОП в практических приложениях. \n";
        std::cout << "3. Практика 3: Реализация двоичного дерева. (a,b)-деревья. \n";
        std::cout << "4. Практика 4,5: Амортизационный анализ производительности структуры данных. Метод агрегаций. Банковский  метод. Метод потенциалов. \n";
        //std::cout << "5. Практика 5: Другие задания\n";
        std::cout << "0. Выход\n";
        std::cout << "Ваш выбор: ";
        std::cin >> practiceChoice;

        if (practiceChoice == 0) {
            std::cout << "Выход из программы.\n";
            break;
        }

        if (practiceChoice < 1 || practiceChoice > 4) {
            std::cout << "Неверный выбор. Пожалуйста, выберите номер практики от 1 до 4.\n";
            continue;
        }
        // ПР1
        if (practiceChoice == 1) {
            std::cout << "Выберите задание для Практики 1:\n";
            std::cout << "1. Найти максимальное целое число n, такое что n^2 < X\n";
            std::cout << "2. Найти минимальное значение X для съедения фруктов за H часов\n";
            std::cout << "0. Вернуться в главное меню\n";
            std::cout << "Ваш выбор: ";
            std::cin >> taskChoice1;

            switch (taskChoice1) {
            case 1:
                std::cout << "Введите значение X: ";
                std::cin >> X;
                binarySearchMaxN(X);
                break;
            case 2: {
                std::vector<int> arr = { 2, 4, 2, 4, 5 }; // Массив с количеством фруктов
                int h;
                std::cout << "Введите количество часов (H): ";
                std::cin >> h;

                Solution solution;
                int result = solution.MinXValue(arr, h);
                std::cout << "Минимальное значение X будет: " << result << std::endl;
                break;
            }
            case 0:
                std::cout << "Возврат в главное меню.\n";
                break;
            default:
                std::cout << "Неверный выбор. Пожалуйста, попробуйте снова.\n";
            }
        }
        //ПР2
        if (practiceChoice == 2) {
            std::cout << "Выберите задание для Практики 1:\n";
            std::cout << "1. Сортировка пузырьком \n";
            std::cout << "2. Шейкерная сортировка \n";
            std::cout << "3. Сортировка расческой \n";
            std::cout << "4. Сортировка вставками \n";
            std::cout << "5. Сортировка Шелла \n";
            std::cout << "6. Сортировка деревом \n";
            std::cout << "7. Гномья сортировка \n"; 
            std::cout << "8. Сортировка выбором \n";
            std::cout << "9. Пирамидальная сортировка \n";
            std::cout << "10. Быстрая сортировка \n";
            std::cout << "11. Сортировка слиянием \n";
            std::cout << "12. Сортировка подсчетом \n";
            std::cout << "13. Блочная сортировка \n";
            std::cout << "14. Поразрядная сортировка \n";
            std::cout << "15. Битонная сортировка  \n";
            std::cout << "16. Timsort (Гибридная сортировка) \n";
            std::cout << "0. Вернуться в главное меню\n";
            std::cout << "Ваш выбор: ";
            std::cin >> taskChoice2;
            
            std::vector<int> arr = { 5, 2, 9, 1, 5, 6 }; // Пример массива для сортировки
            
            switch (taskChoice2) {
            // 1. Сортировка пузырьком
            case 1:
                std::cout << "Исходный массив: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;

                bubblesort(arr.data(), arr.data() + arr.size());

                std::cout << "Отсортированный массив: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;
                break;
             
            // 2. Шейкерная сортировка
            case 2:
                std::cout << "Исходный массив: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;

                shakersort(arr.data(), arr.data() + arr.size()); // Сортируем массив

                std::cout << "Отсортированный массив: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;
                break;
            // 3. Сортировка расческой
            case 3:
                std::cout << "Исходный массив: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;

                combsort(arr.data(), arr.data() + arr.size()); // Сортируем массив

                std::cout << "Отсортированный массив: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;
                break;
            // 4. Сортировка вставками
            case 4:
                std::cout << "Исходный массив: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;

                insertionsort(arr.data(), arr.data() + arr.size()); // Сортируем массив

                std::cout << "Отсортированный массив: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;
                break;
            // 5. Сортировка Шелла
            case 5:
                std::cout << "Выберите способ сортировки Шелла:\n";
                std::cout << "1. shellsort : Стандартная реализация сортировки Шелла \n \
                    с использованием шага, равного половине размера подмассива. \n";
                std::cout << "2. shellsorthib: Вариант сортировки Шелла,\n \
                    который использует другой способ определения начального шага. \n";
                std::cout << "3. shellsortsedgwick: Реализация сортировки Шелла \n \
                    с использованием последовательности шагов, предложенной Седжвиком, \n \
                    которая генерирует шаги по определенной формуле. \n";
                std::cout << "4. shellsortpratt: Реализация сортировки Шелла \n \
                    с использованием последовательности шагов, предложенной Праттом, \n \
                    которая также генерирует шаги по определенной формуле. \n";
                std::cout << "5. myshell1: Одна из функций, которые представляют собой \n \
                    различные варианты сортировки Шелла \n \
                    с использованием собственных формул для генерации шагов. \n";
                std::cout << "6. myshell2: Одна из функций, которые представляют собой \n \
                    различные варианты сортировки Шелла \n \
                    с использованием собственных формул для генерации шагов. \n";
                std::cout << "7. myshell3: Одна из функций, которые представляют собой \n \
                    различные варианты сортировки Шелла \n \
                    с использованием собственных формул для генерации шагов. \n";
                std::cin >> shellChoise;

                std::cout << "Исходный массив: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;

                switch (shellChoise)// Сортируем массив
                {
                case 1:
                    shellsort(arr.data(), arr.data() + arr.size()); 
                    break;
                case 2:
                    shellsorthib(arr.data(), arr.data() + arr.size());
                    break;
                case 3:
                    shellsortsedgwick(arr.data(), arr.data() + arr.size());
                    break;
                case 4:
                    shellsortpratt(arr.data(), arr.data() + arr.size());
                    break;
                case 5:
                    myshell1(arr.data(), arr.data() + arr.size());
                    break;
                case 6:
                    myshell2(arr.data(), arr.data() + arr.size());
                    break;
                case 7:
                    myshell3(arr.data(), arr.data() + arr.size());
                    break;
                default:
                    std::cout << "Неверный выбор. Пожалуйста, попробуйте снова.\n";
                }
                

                std::cout << "Отсортированный массив: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;
                break;
            // 6. Сортировка деревом
            case 6:
                std::cout << "Исходный массив: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;

                treesort(arr.data(), arr.data() + arr.size()); // Сортируем массив

                std::cout << "Отсортированный массив: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;
                break;
            // 7. Гномья сортировка
            case 7:
                std::cout << "Исходный массив: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;

                gnomesort(arr.data(), arr.data() + arr.size()); // Сортируем массив

                std::cout << "Отсортированный массив: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;
                break;
            // 8. Сортировка выбором 
            case 8:
                std::cout << "Исходный массив: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;

                selectionsort(arr.data(), arr.data() + arr.size()); // Сортируем массив

                std::cout << "Отсортированный массив: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;
                break;
            // 9. Пирамидальная сортировка
            case 9:
                std::cout << "Исходный массив: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;

                heapsort(arr.data(), arr.data() + arr.size()); // Сортируем массив

                std::cout << "Отсортированный массив: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;
                break;
            // 10. Быстрая сортировка
            case 10:
                std::cout << "Выберите способ быстрой сортировки:\n";
                std::cout << "1. Быстрая сортировка (quicksort) \n";
                std::cout << "2. Быстрая сортировка с использованием сортировки вставками для малых массивов (quickinssort) \n";
                std::cin >> quickChoise;

                std::cout << "Исходный массив: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;

                switch (quickChoise)// Сортируем массив
                {
                case 1:
                    quicksort(arr.data(), arr.data() + arr.size()); 
                    break;
                case 2:
                    quickinssort(arr.data(), arr.data() + arr.size());
                    break;
                default:
                    std::cout << "Неверный выбор. Пожалуйста, попробуйте снова.\n";;
                }

                std::cout << "Отсортированный массив: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;
                break;
            // 11. Сортировка слиянием
            case 11:
                std::cout << "Выберите способ сортировки слиянием:\n";
                std::cout << "1. Сортировка слиянием (mergesort) \n";
                std::cout << "2. Сортировка слиянием с использованием сортировки вставками для малых массивов (mergeinssort) \n";
                std::cin >> mergeChoise;

                std::cout << "Исходный массив: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;

                switch (mergeChoise)// Сортируем массив
                {
                case 1:
                    mergesort(arr.data(), arr.data() + arr.size());
                    break;
                case 2:
                    mergeinssort(arr.data(), arr.data() + arr.size());
                    break;
                default:
                    std::cout << "Неверный выбор. Пожалуйста, попробуйте снова.\n";;
                }

                std::cout << "Отсортированный массив: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;
                break;
            // 12. Сортировка подсчетом
            case 12:
                std::cout << "Позже добавлю ";
                //std::cout << "Исходный массив: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;

                //countingsort(arr.data(), arr.data() + arr.size()); // Сортируем массив

                //std::cout << "Отсортированный массив: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;
                break;
            // 13. Блочная сортировка
            case 13:
                std::cout << "Исходный массив: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;

                newbucketsort(arr.data(), arr.data() + arr.size()); // Сортируем массив

                std::cout << "Отсортированный массив: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;
                break;
            // 14. Поразрядная сортировка
            case 14:
                std::cout << "Выберите способ поразрядной сортировки:\n";
                std::cout << "1. LSD (Least Significant Digit). \n";
                std::cout << "2. MSD (Most Significant Digit). \n";
                std::cin >> radixChoise;

                std::cout << "Исходный массив: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;

                switch (radixChoise)// Сортируем массив
                {
                case 1:
                    radixsort(arr.data(), arr.data() + arr.size());
                    break;
                case 2:
                    radixsortmsd(arr.data(), arr.data() + arr.size());
                    break;
                default:
                    std::cout << "Неверный выбор. Пожалуйста, попробуйте снова.\n";;
                }

                std::cout << "Отсортированный массив: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;
                break;
            // 15. Битонная сортировка
            case 15:
                std::cout << "Исходный массив: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;

                bitonicsort(arr.data(), arr.data() + arr.size()); // Сортируем массив

                std::cout << "Отсортированный массив: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;
                break;
            // 16. Timsort (Гибридная сортировка)
            case 16:
                std::cout << "сломалась ";
                /*
                std::cout << "Исходный массив: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;

                //timsort(arr.data(), arr.data() + arr.size()); // Сортируем массив

                std::cout << "Отсортированный массив: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                */
                std::cout << std::endl;
                break;
                // 
            //Выход в меню
            case 0:
                std::cout << "Возврат в главное меню.\n";
                break;
            default:
                std::cout << "Неверный выбор. Пожалуйста, попробуйте снова.\n";
            }
        }
        //ПР3
        if (practiceChoice == 3) {
            /*
            BinaryTree<int> tree;

            // Insert the nodes into the tree
            tree.insertNode(1);
            tree.insertNode(2);
            tree.insertNode(3);
            tree.insertNode(4);
            tree.insertNode(5);
            tree.insertNode(6);

            cout << "Inorder traversal: ";
            tree.inorder();

            cout << "Preorder traversal: ";
            tree.preorder();

            cout << "Postorder traversal: ";
            tree.postorder();

            cout << "Level order traversal: ";
            tree.levelOrder();

            tree.deleteNode(3);
            cout << "Inorder traversal after removing 3: ";
            tree.inorder();
            */
        }
        //ПР4,5
        if (practiceChoice == 4) {
            // Date example
            Date d{ 2023, 4, 29 };
            std::cout << "Year: " << d.year << std::endl;
            std::cout << "Month: " << d.month << std::endl;
            std::cout << "Day: " << d.day << std::endl;

            // Banker's Algorithm example
            int processes[] = { 0, 1, 2, 3, 4 };
            int avail[] = { 3, 3, 2 };
            int maxm[][R] = { {7, 5, 3}, {3, 2, 2}, {9, 0, 2}, {2, 2, 2}, {4, 3, 3} };
            int allot[][R] = { {0, 1, 0}, {2, 0, 0}, {3, 0, 2}, {2, 1, 1}, {0, 0, 2} };

            isSafe(processes, avail, maxm, allot);

            // Potential Method example
            potentialMethod();
        }
        // конец практик
        else {
            std::cout << "Задания для Практики " << practiceChoice << " пока не определены.\n";
        }

    } while (true);

    return 0;
}