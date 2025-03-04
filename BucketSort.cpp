// BucketSort.cpp Блочная сортировка 
#include <iostream>
#include "InsertionSort.h"

void _newbucketsort(int* l, int* r, int* temp) {
	if (r - l <= 64) {
		insertionsort(l, r);
		return;
	}
	int minz = *l, maxz = *l;
	bool is_sorted = true;
	for (int* i = l + 1; i < r; i++) {
		minz = std::min(minz, *i);
		maxz = std::max(maxz, *i);
		if (*i < *(i - 1)) is_sorted = false;
	}
	if (is_sorted) return;
	int diff = maxz - minz + 1;
	int numbuckets;
	if (r - l <= 1e7) numbuckets = 1500;
	else numbuckets = 3000;
	int range = (diff + numbuckets - 1) / numbuckets;
	int* cnt = new int[numbuckets + 1];
	for (int i = 0; i <= numbuckets; i++)
		cnt[i] = 0;
	int cur = 0;
	for (int* i = l; i < r; i++) {
		temp[cur++] = *i;
		int ind = (*i - minz) / range;
		cnt[ind + 1]++;
	}
	int sz = 0;
	for (int i = 1; i <= numbuckets; i++)
		if (cnt[i]) sz++;
	int* run = new int[sz];
	cur = 0;
	for (int i = 1; i <= numbuckets; i++)
		if (cnt[i]) run[cur++] = i - 1;
	for (int i = 1; i <= numbuckets; i++)
		cnt[i] += cnt[i - 1];
	cur = 0;
	for (int* i = l; i < r; i++) {
		int ind = (temp[cur] - minz) / range;
		*(l + cnt[ind]) = temp[cur];
		cur++;
		cnt[ind]++;
	}
	for (int i = 0; i < sz; i++) {
		int r = run[i];
		if (r != 0) _newbucketsort(l + cnt[r - 1], l + cnt[r], temp);
		else _newbucketsort(l, l + cnt[r], temp);
	}
	delete run;
	delete cnt;
}
void newbucketsort(int* l, int* r) {
	int* temp = new int[r - l];
	_newbucketsort(l, r, temp);
	delete temp;
}
