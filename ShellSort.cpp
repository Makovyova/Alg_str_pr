// ShellSort.cpp Сортировка Шелла
#include <iostream>
#include <algorithm>
#include "InsertionSort.h"


void shellsort(int* l, int* r) {
	int sz = r - l;
	int step = sz / 2;
	while (step >= 1) {
		for (int* i = l + step; i < r; i++) {
			int* j = i;
			int* diff = j - step;
			while (diff >= l && *diff > *j) {
				std::swap(*diff, *j);
				j = diff;
				diff = j - step;
			}
		}
		step /= 2;
	}
}
void shellsorthib(int* l, int* r) {
	int sz = r - l;
	if (sz <= 1) return;
	int step = 1;
	while (step < sz) step <<= 1;
	step >>= 1;
	step--;
	while (step >= 1) {
		for (int* i = l + step; i < r; i++) {
			int* j = i;
			int* diff = j - step;
			while (diff >= l && *diff > *j) {
				std::swap(*diff, *j);
				j = diff;
				diff = j - step;
			}
		}
		step /= 2;
	}
}
int steps[100];
void shellsortsedgwick(int* l, int* r) {
	int sz = r - l;
	steps[0] = 1;
	int q = 1;
	while (steps[q - 1] * 3 < sz) {
		if (q % 2 == 0)
			steps[q] = 9 * (1 << q) - 9 * (1 << (q / 2)) + 1;
		else
			steps[q] = 8 * (1 << q) - 6 * (1 << ((q + 1) / 2)) + 1;
		q++;
	}
	q--;
	for (; q >= 0; q--) {
		int step = steps[q];
		for (int* i = l + step; i < r; i++) {
			int* j = i;
			int* diff = j - step;
			while (diff >= l && *diff > *j) {
				std::swap(*diff, *j);
				j = diff;
				diff = j - step;
			}
		}
	}
}
void shellsortpratt(int* l, int* r) {
	int sz = r - l;
	steps[0] = 1;
	int cur = 1, q = 1;
	for (int i = 1; i < sz; i++) {
		int cur = 1 << i;
		if (cur > sz / 2) break;
		for (int j = 1; j < sz; j++) {
			cur *= 3;
			if (cur > sz / 2) break;
			steps[q++] = cur;
		}
	}
	insertionsort(steps, steps + q);
	q--;
	for (; q >= 0; q--) {
		int step = steps[q];
		for (int* i = l + step; i < r; i++) {
			int* j = i;
			int* diff = j - step;
			while (diff >= l && *diff > *j) {
				std::swap(*diff, *j);
				j = diff;
				diff = j - step;
			}
		}
	}
}
void myshell1(int* l, int* r) {
	int sz = r - l, q = 1;
	steps[0] = 1;
	while (steps[q - 1] < sz) {
		int s = steps[q - 1];
		steps[q++] = s * 4 + s / 4;
	}
	q--;
	for (; q >= 0; q--) {
		int step = steps[q];
		for (int* i = l + step; i < r; i++) {
			int* j = i;
			int* diff = j - step;
			while (diff >= l && *diff > *j) {
				std::swap(*diff, *j);
				j = diff;
				diff = j - step;
			}
		}
	}
}
void myshell2(int* l, int* r) {
	int sz = r - l, q = 1;
	steps[0] = 1;
	while (steps[q - 1] < sz) {
		int s = steps[q - 1];
		steps[q++] = s * 3 + s / 3;
	}
	q--;
	for (; q >= 0; q--) {
		int step = steps[q];
		for (int* i = l + step; i < r; i++) {
			int* j = i;
			int* diff = j - step;
			while (diff >= l && *diff > *j) {
				std::swap(*diff, *j);
				j = diff;
				diff = j - step;
			}
		}
	}
}
void myshell3(int* l, int* r) {
	int sz = r - l, q = 1;
	steps[0] = 1;
	while (steps[q - 1] < sz) {
		int s = steps[q - 1];
		steps[q++] = s * 4 - s / 5;
	}
	q--;
	for (; q >= 0; q--) {
		int step = steps[q];
		for (int* i = l + step; i < r; i++) {
			int* j = i;
			int* diff = j - step;
			while (diff >= l && *diff > *j) {
				std::swap(*diff, *j);
				j = diff;
				diff = j - step;
			}
		}
	}
}

