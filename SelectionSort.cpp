// SelectionSort.cpp Сортировка выбором  
#include <iostream>
#include <algorithm>

void selectionsort(int* l, int* r) {
	for (int* i = l; i < r; i++) {
		int minz = *i, * ind = i;
		for (int* j = i + 1; j < r; j++) {
			if (*j < minz) minz = *j, ind = j;
		}
		std::swap(*i, *ind);
	}
}

