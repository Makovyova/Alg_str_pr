// TreeSort.cpp Сортировка деревом
#include <iostream>
#include <algorithm>
#include <set>

void treesort(int* l, int* r) {
	std::multiset<int> m;
	for (int* i = l; i < r; i++)
		m.insert(*i);
	for (int q : m)
		*l = q, l++;
}
