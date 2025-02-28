#include <iostream>
#include <algorithm> // Для std::swap

void shakersort(int* l, int* r) {
    int sz = r - l; // Вычисляем размер массива
    if (sz <= 1) return; // Если размер меньше или равен 1, ничего не делаем

    bool swapped = true; // Флаг для отслеживания, были ли обмены
    int* beg = l - 1; // Указатель на начало
    int* end = r - 1; // Указатель на конец

    while (swapped) {
        swapped = false; // Сбрасываем флаг перед началом прохода
        beg++; // Увеличиваем указатель начала

        // Проход слева направо
        for (int* i = beg; i < end; i++) {
            if (*i > *(i + 1)) {
                std::swap(*i, *(i + 1)); // Меняем местами элементы
                swapped = true; // Устанавливаем флаг, что был обмен
            }
        }
        if (!swapped) break; // Если не было обменов, выходим из цикла
        end--; // Уменьшаем указатель конца

        // Проход справа налево
        for (int* i = end; i > beg; i--) {
            if (*i < *(i - 1)) {
                std::swap(*i, *(i - 1)); // Меняем местами элементы
                swapped = true; // Устанавливаем флаг, что был обмен
            }
        }
    }
}
/*
int main() {
    int arr[] = { 5, 3, 8, 4, 2 };
    int size = sizeof(arr) / sizeof(arr[0]);

    shakersort(arr, arr + size); // Сортируем массив

    // Вывод отсортированного массива
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
*/