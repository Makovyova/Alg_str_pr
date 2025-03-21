// QuickSort.cpp ������� ���������� 
#include <iostream>
#include <algorithm>
#include "InsertionSort.h"

void quicksort(int* l, int* r) {
	if (r - l <= 1) return;
	int z = *(l + (r - l) / 2);
	int* ll = l, * rr = r - 1;
	while (ll <= rr) {
		while (*ll < z) ll++;
		while (*rr > z) rr--;
		if (ll <= rr) {
			std::swap(*ll, *rr);
			ll++;
			rr--;
		}
	}
	if (l < rr) quicksort(l, rr + 1);
	if (ll < r) quicksort(ll, r);
}
void quickinssort(int* l, int* r) {
	if (r - l <= 32) {
		insertionsort(l, r);
		return;
	}
	int z = *(l + (r - l) / 2);
	int* ll = l, * rr = r - 1;
	while (ll <= rr) {
		while (*ll < z) ll++;
		while (*rr > z) rr--;
		if (ll <= rr) {
			std::swap(*ll, *rr);
			ll++;
			rr--;
		}
	}
	if (l < rr) quickinssort(l, rr + 1);
	if (ll < r) quickinssort(ll, r);
}
