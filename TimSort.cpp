/*
#include <iostream>
#include <algorithm>
#include <stack>
#include <utility>
#include "InsertionSort.h"

using namespace std;
// Пример использования std::merge
merge(leftBegin, leftEnd, rightBegin, rightEnd, outputBegin);


void _timsort(int* l, int* r, int* temp) {
	int sz = r - l;
	if (sz <= 64) {
		insertionsort(l, r);
		return;
	}
	int minrun = sz, f = 0;
	while (minrun >= 64) {
		f |= minrun & 1;
		minrun >>= 1;
	}
	minrun += f;
	int* cur = l;
	stack<pair<int, int*>> s;
	while (cur < r) {
		int* c1 = cur;
		while (c1 < r - 1 && *c1 <= *(c1 + 1)) c1++;
		int* c2 = cur;
		while (c2 < r - 1 && *c2 >= *(c2 + 1)) c2++;
		if (c1 >= c2) {
			c1 = max(c1, cur + minrun - 1);
			c1 = min(c1, r - 1);
			insertionsort(cur, c1 + 1);
			s.push({ c1 - cur + 1, cur });
			cur = c1 + 1;
		}
		else {
			c2 = max(c2, cur + minrun - 1);
			c2 = min(c2, r - 1);
			reverse(cur, c2 + 1);
			insertionsort(cur, c2 + 1);
			s.push({ c2 - cur + 1, cur });
			cur = c2 + 1;
		}
		while (s.size() >= 3) {
			pair<int, int*> x = s.top();
			s.pop();
			pair<int, int*> y = s.top();
			s.pop();
			pair<int, int*> z = s.top();
			s.pop();
			if (z.first >= x.first + y.first && y.first >= x.first) {
				s.push(z);
				s.push(y);
				s.push(x);
				break;
			}
			else if (z.first >= x.first + y.first) {
				merge(y.second, x.second, x.second + x.first, temp);
				s.push(z);
				s.push({ x.first + y.first, y.second });
			}
			else {
				merge(z.second, y.second, y.second + y.first, temp);
				s.push({ z.first + y.first, z.second });
				s.push(x);
			}
		}
	}
	while (s.size() != 1) {
		pair<int, int*> x = s.top();
		s.pop();
		pair<int, int*> y = s.top();
		s.pop();
		if (x.second < y.second) swap(x, y);
		merge(y.second, x.second, x.second + x.first, temp);
		s.push({ y.first + x.first, y.second });
	}
}
void timsort(int* l, int* r) {
	int* temp = new int[r - l];
	_timsort(l, r, temp);
	delete temp;
}




void merge(int* left, int* mid, int* right, int* temp) {
	int leftSize = mid - left;
	int rightSize = right - mid;

	// Копируем данные в временные массивы
	for (int i = 0; i < leftSize; i++)
		temp[i] = left[i];
	for (int i = 0; i < rightSize; i++)
		temp[leftSize + i] = mid[i];

	// Слияние
	int i = 0, j = leftSize, k = 0;
	while (i < leftSize && j < leftSize + rightSize) {
		if (temp[i] <= temp[j]) {
			left[k++] = temp[i++];
		}
		else {
			left[k++] = temp[j++];
		}
	}

	// Копируем оставшиеся элементы
	while (i < leftSize) {
		left[k++] = temp[i++];
	}
	while (j < leftSize + rightSize) {
		left[k++] = temp[j++];
	}
}
*/
