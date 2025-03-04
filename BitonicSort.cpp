// BitonicSort.cpp Битонная сортировка 
#include <iostream>
#include <algorithm>

using namespace std;

void bitseqsort(int* l, int* r, bool inv) {
	if (r - l <= 1) return;
	int* m = l + (r - l) / 2;
	for (int* i = l, *j = m; i < m && j < r; i++, j++) {
		if (inv ^ (*i > *j)) swap(*i, *j);
	}
	bitseqsort(l, m, inv);
	bitseqsort(m, r, inv);
}
void makebitonic(int* l, int* r) {
	if (r - l <= 1) return;
	int* m = l + (r - l) / 2;
	makebitonic(l, m);
	bitseqsort(l, m, 0);
	makebitonic(m, r);
	bitseqsort(m, r, 1);
}
void bitonicsort(int* l, int* r) {
	int n = 1;
	int inf = *max_element(l, r) + 1;
	while (n < r - l) n *= 2;
	int* a = new int[n];
	int cur = 0;
	for (int* i = l; i < r; i++)
		a[cur++] = *i;
	while (cur < n) a[cur++] = inf;
	makebitonic(a, a + n);
	bitseqsort(a, a + n, 0);
	cur = 0;
	for (int* i = l; i < r; i++)
		*i = a[cur++];
	delete a;
}

