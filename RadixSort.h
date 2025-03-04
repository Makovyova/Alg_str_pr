// RadixSort.h
#ifndef RADIXSORT_H
#define RADIXSORT_H

/*LSD (Least Significant Digit)
_radixsort: ��� ���������� ����������� ����������, ������� ��������� �����, ������� � �������� ��������� ����. ��� ���������� ���������� ��������� ��� ������������ ���������� �� ������ ����.
radixsort: ��� ������� ��� _radixsort, ������� ������������� ������ ���� (� ������ ������ 8 ���) � �������� �������� ������� ����������.*/
void radixsort(int* l, int* r);
/*MSD (Most Significant Digit)
_radixsortmsd: ��� ���������� ����������� ����������, ������� ��������� �����, ������� � �������� ��������� ����. ��� ���������� ������, ������� �� ������� ����������, � ����� �������� ���������� ��������� ��� ��������� �����������.
radixsortmsd: ��� ������� ��� _radixsortmsd, ������� �������������� ��������� ������ � �������� �������� ������� ����������.*/
void radixsortmsd(int* l, int* r);

#endif // RADIXSORT_H