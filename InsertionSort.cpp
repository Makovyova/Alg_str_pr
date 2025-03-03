// InsertionSort.cpp Сортировка вставками
#include <iostream>
#include <algorithm>

void insertionsort(int* l, int* r) {
	for (int* i = l + 1; i < r; i++) {
		int* j = i;
		while (j > l && *(j - 1) > *j) {
			std::swap(*(j - 1), *j);
			j--;
		}
	}
}

