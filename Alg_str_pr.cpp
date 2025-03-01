#include <iostream>
#include <vector>
#include "MinXValue.h"
#include "BubbleSort.h"
#include "ShakerSort.h"

// Объявление функции из второго файла
void binarySearchMaxN(int X);

int main() {
    // Устанавливаем кодировку для корректного отображения русских символов
    system("chcp 1251");

    int practiceChoice;
    int taskChoice1, taskChoice2, taskChoice3, taskChoice4;
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
            //std::cout << "2. Шейкерная сортировка \n";
            /*
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
            std::cout << "15. LSD (least significant digit) \n";
            std::cout << "16. MSD (most significant digit). \n";
            std::cout << "17. Битонная сортировка  \n";
            std::cout << "18. Timsort (Гибридная сортировка) \n";
            */
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
             /*
            // 2. Шейкерная сортировка
            case 2:
                int arr[] = { 5, 3, 8, 4, 2 };
                int size = sizeof(arr) / sizeof(arr[0]);

                shakersort(arr, arr + size); // Сортируем массив

                // Вывод отсортированного массива
                for (int i = 0; i < size; i++) {
                    std::cout << arr[i] << " ";
                }
                std::cout << std::endl;
            */
            case 0:
                std::cout << "Возврат в главное меню.\n";
                break;
            default:
                std::cout << "Неверный выбор. Пожалуйста, попробуйте снова.\n";
            }
        }
        // конец практик
        else {
            std::cout << "Задания для Практики " << practiceChoice << " пока не определены.\n";
        }

    } while (true);

    return 0;
}