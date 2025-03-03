// ShellSort.h
#ifndef SHELLSORT_H
#define SHELLSORT_H

/*shellsort : ����������� ���������� ���������� ����� 
� �������������� ����, ������� �������� ������� ����������.*/
void shellsort(int* l, int* r); 
/*shellsorthib: ������� ���������� �����, 
������� ���������� ������ ������ ����������� ���������� ����.*/
void shellsorthib(int* l, int* r);
/*shellsortsedgwick: ���������� ���������� ����� 
� �������������� ������������������ �����, ������������ ���������, 
������� ���������� ���� �� ������������ �������.*/
void shellsortsedgwick(int* l, int* r);
/*shellsortpratt: ���������� ���������� ����� 
� �������������� ������������������ �����, ������������ �������, 
������� ����� ���������� ���� �� ������������ �������.*/
void shellsortpratt(int* l, int* r);
/*myshell1, myshell2, myshell3: ��� ������� ������������ ����� 
��������� �������� ���������� ����� 
� �������������� ����������� ������ ��� ��������� �����.*/
void myshell1(int* l, int* r);
void myshell2(int* l, int* r);
void myshell3(int* l, int* r);


#endif // SHELLSORT_H