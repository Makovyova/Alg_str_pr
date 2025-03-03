// CombSort.cpp Сортировка расчёской
#include <iostream>
#include <algorithm>

void combsort(int* l, int* r) {
	int sz = r - l;
	if (sz <= 1) return;
	double k = 1.2473309;
	int step = sz - 1;
	while (step > 1) {
		for (int* i = l; i + step < r; i++) {
			if (*i > *(i + step))
				std::swap(*i, *(i + step));
		}
		step /= k;
	}
	bool b = true;
	while (b) {
		b = false;
		for (int* i = l; i + 1 < r; i++) {
			if (*i > *(i + 1)) {
				std::swap(*i, *(i + 1));
				b = true;
			}
		}
	}
}
