#include <iostream>
#include <algorithm> // ��� std::swap

void shakersort(int* l, int* r) {
    int sz = r - l; // ��������� ������ �������
    if (sz <= 1) return; // ���� ������ ������ ��� ����� 1, ������ �� ������

    bool swapped = true; // ���� ��� ������������, ���� �� ������
    int* beg = l - 1; // ��������� �� ������
    int* end = r - 1; // ��������� �� �����

    while (swapped) {
        swapped = false; // ���������� ���� ����� ������� �������
        beg++; // ����������� ��������� ������

        // ������ ����� �������
        for (int* i = beg; i < end; i++) {
            if (*i > *(i + 1)) {
                std::swap(*i, *(i + 1)); // ������ ������� ��������
                swapped = true; // ������������� ����, ��� ��� �����
            }
        }
        if (!swapped) break; // ���� �� ���� �������, ������� �� �����
        end--; // ��������� ��������� �����

        // ������ ������ ������
        for (int* i = end; i > beg; i--) {
            if (*i < *(i - 1)) {
                std::swap(*i, *(i - 1)); // ������ ������� ��������
                swapped = true; // ������������� ����, ��� ��� �����
            }
        }
    }
}
/*
int main() {
    int arr[] = { 5, 3, 8, 4, 2 };
    int size = sizeof(arr) / sizeof(arr[0]);

    shakersort(arr, arr + size); // ��������� ������

    // ����� ���������������� �������
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
*/