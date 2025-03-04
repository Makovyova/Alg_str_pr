// GnomeSort.cpp Гномья сортировка 
#include <iostream>
#include <algorithm>

void gnomesort(int* l, int* r) {
	int* i = l;
	while (i < r) {
		if (i == l || *(i - 1) <= *i) i++;
		else std::swap(*(i - 1), *i), i--;
	}
}
