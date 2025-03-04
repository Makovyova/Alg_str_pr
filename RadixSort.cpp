// RadixSort.cpp Поразрядная сортировка
#include <iostream>
#include "InsertionSort.h"

//LSD
int digit(int n, int k, int N, int M) {
	return (n >> (N * k) & (M - 1));
}
void _radixsort(int* l, int* r, int N) {
	int k = (32 + N - 1) / N;
	int M = 1 << N;
	int sz = r - l;
	int* b = new int[sz];
	int* c = new int[M];
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < M; j++)
			c[j] = 0;
		for (int* j = l; j < r; j++)
			c[digit(*j, i, N, M)]++;
		for (int j = 1; j < M; j++)
			c[j] += c[j - 1];
		for (int* j = r - 1; j >= l; j--)
			b[--c[digit(*j, i, N, M)]] = *j;
		int cur = 0;
		for (int* j = l; j < r; j++)
			*j = b[cur++];
	}
	delete b;
	delete c;
}
void radixsort(int* l, int* r) {
	_radixsort(l, r, 8);
}

//MSD
void _radixsortmsd(int* l, int* r, int N, int d, int* temp) {
	if (d == -1) return;
	if (r - l <= 32) {
		insertionsort(l, r);
		return;
	}
	int M = 1 << N;
	int* cnt = new int[M + 1];
	for (int i = 0; i <= M; i++)
		cnt[i] = 0;
	int cur = 0;
	for (int* i = l; i < r; i++) {
		temp[cur++] = *i;
		cnt[digit(*i, d, N, M) + 1]++;
	}
	int sz = 0;
	for (int i = 1; i <= M; i++)
		if (cnt[i]) sz++;
	int* run = new int[sz];
	cur = 0;
	for (int i = 1; i <= M; i++)
		if (cnt[i]) run[cur++] = i - 1;
	for (int i = 1; i <= M; i++)
		cnt[i] += cnt[i - 1];
	cur = 0;
	for (int* i = l; i < r; i++) {
		int ind = digit(temp[cur], d, N, M);
		*(l + cnt[ind]) = temp[cur];
		cur++;
		cnt[ind]++;
	}
	for (int i = 0; i < sz; i++) {
		int r = run[i];
		if (r != 0) _radixsortmsd(l + cnt[r - 1], l + cnt[r], N, d - 1, temp);
		else _radixsortmsd(l, l + cnt[r], N, d - 1, temp);
	}
	delete run;
	delete cnt;
}
void radixsortmsd(int* l, int* r) {
	int* temp = new int[r - l];
	_radixsortmsd(l, r, 8, 3, temp);
	delete temp;
}

