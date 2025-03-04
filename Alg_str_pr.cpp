#include <iostream>
#include <vector>
//1
#include "MinXValue.h"
//2
#include "BubbleSort.h"
#include "ShakerSort.h"
#include "CombSort.h"
#include "InsertionSort.h"
#include "ShellSort.h"
#include "TreeSort.h"
#include "GnomeSort.h"
#include "SelectionSort.h"
#include "HeapSort.h"
#include "QuickSort.h"
#include "MergeSort.h" 
#include "BucketSort.h"
#include "RadixSort.h"
#include "BitonicSort.h"
#include "TimSort.h"
//3
#include "BinaryTree.h"
//4,5
#include "Date.h"
#include "BankersAlgorithm.h"
#include "PotentialMethod.h"

// ���������� ������� �� ������� �����
void binarySearchMaxN(int X);

int main() {
    // ������������� ��������� ��� ����������� ����������� ������� ��������
    system("chcp 1251");

    int practiceChoice;
    int taskChoice1, taskChoice2, taskChoice3, taskChoice4;
    int shellChoise, quickChoise, mergeChoise, radixChoise;
    int X;

    //std::vector<int> arr; 

    do {
        std::cout << "�������� ��������:\n";
        std::cout << "1. �������� 1: �������� ��������� ������.\n";
        std::cout << "2. �������� 2: ������� ������������� �� � ������������ �����������. \n";
        std::cout << "3. �������� 3: ���������� ��������� ������. (a,b)-�������. \n";
        std::cout << "4. �������� 4,5: ��������������� ������ ������������������ ��������� ������. ����� ���������. ����������  �����. ����� �����������. \n";
        //std::cout << "5. �������� 5: ������ �������\n";
        std::cout << "0. �����\n";
        std::cout << "��� �����: ";
        std::cin >> practiceChoice;

        if (practiceChoice == 0) {
            std::cout << "����� �� ���������.\n";
            break;
        }

        if (practiceChoice < 1 || practiceChoice > 4) {
            std::cout << "�������� �����. ����������, �������� ����� �������� �� 1 �� 4.\n";
            continue;
        }
        // ��1
        if (practiceChoice == 1) {
            std::cout << "�������� ������� ��� �������� 1:\n";
            std::cout << "1. ����� ������������ ����� ����� n, ����� ��� n^2 < X\n";
            std::cout << "2. ����� ����������� �������� X ��� �������� ������� �� H �����\n";
            std::cout << "0. ��������� � ������� ����\n";
            std::cout << "��� �����: ";
            std::cin >> taskChoice1;

            switch (taskChoice1) {
            case 1:
                std::cout << "������� �������� X: ";
                std::cin >> X;
                binarySearchMaxN(X);
                break;
            case 2: {
                std::vector<int> arr = { 2, 4, 2, 4, 5 }; // ������ � ����������� �������
                int h;
                std::cout << "������� ���������� ����� (H): ";
                std::cin >> h;

                Solution solution;
                int result = solution.MinXValue(arr, h);
                std::cout << "����������� �������� X �����: " << result << std::endl;
                break;
            }
            case 0:
                std::cout << "������� � ������� ����.\n";
                break;
            default:
                std::cout << "�������� �����. ����������, ���������� �����.\n";
            }
        }
        //��2
        if (practiceChoice == 2) {
            std::cout << "�������� ������� ��� �������� 1:\n";
            std::cout << "1. ���������� ��������� \n";
            std::cout << "2. ��������� ���������� \n";
            std::cout << "3. ���������� ��������� \n";
            std::cout << "4. ���������� ��������� \n";
            std::cout << "5. ���������� ����� \n";
            std::cout << "6. ���������� ������� \n";
            std::cout << "7. ������ ���������� \n"; 
            std::cout << "8. ���������� ������� \n";
            std::cout << "9. ������������� ���������� \n";
            std::cout << "10. ������� ���������� \n";
            std::cout << "11. ���������� �������� \n";
            std::cout << "12. ���������� ��������� \n";
            std::cout << "13. ������� ���������� \n";
            std::cout << "14. ����������� ���������� \n";
            std::cout << "15. �������� ����������  \n";
            std::cout << "16. Timsort (��������� ����������) \n";
            std::cout << "0. ��������� � ������� ����\n";
            std::cout << "��� �����: ";
            std::cin >> taskChoice2;
            
            std::vector<int> arr = { 5, 2, 9, 1, 5, 6 }; // ������ ������� ��� ����������
            
            switch (taskChoice2) {
            // 1. ���������� ���������
            case 1:
                std::cout << "�������� ������: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;

                bubblesort(arr.data(), arr.data() + arr.size());

                std::cout << "��������������� ������: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;
                break;
             
            // 2. ��������� ����������
            case 2:
                std::cout << "�������� ������: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;

                shakersort(arr.data(), arr.data() + arr.size()); // ��������� ������

                std::cout << "��������������� ������: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;
                break;
            // 3. ���������� ���������
            case 3:
                std::cout << "�������� ������: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;

                combsort(arr.data(), arr.data() + arr.size()); // ��������� ������

                std::cout << "��������������� ������: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;
                break;
            // 4. ���������� ���������
            case 4:
                std::cout << "�������� ������: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;

                insertionsort(arr.data(), arr.data() + arr.size()); // ��������� ������

                std::cout << "��������������� ������: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;
                break;
            // 5. ���������� �����
            case 5:
                std::cout << "�������� ������ ���������� �����:\n";
                std::cout << "1. shellsort : ����������� ���������� ���������� ����� \n \
                    � �������������� ����, ������� �������� ������� ����������. \n";
                std::cout << "2. shellsorthib: ������� ���������� �����,\n \
                    ������� ���������� ������ ������ ����������� ���������� ����. \n";
                std::cout << "3. shellsortsedgwick: ���������� ���������� ����� \n \
                    � �������������� ������������������ �����, ������������ ���������, \n \
                    ������� ���������� ���� �� ������������ �������. \n";
                std::cout << "4. shellsortpratt: ���������� ���������� ����� \n \
                    � �������������� ������������������ �����, ������������ �������, \n \
                    ������� ����� ���������� ���� �� ������������ �������. \n";
                std::cout << "5. myshell1: ���� �� �������, ������� ������������ ����� \n \
                    ��������� �������� ���������� ����� \n \
                    � �������������� ����������� ������ ��� ��������� �����. \n";
                std::cout << "6. myshell2: ���� �� �������, ������� ������������ ����� \n \
                    ��������� �������� ���������� ����� \n \
                    � �������������� ����������� ������ ��� ��������� �����. \n";
                std::cout << "7. myshell3: ���� �� �������, ������� ������������ ����� \n \
                    ��������� �������� ���������� ����� \n \
                    � �������������� ����������� ������ ��� ��������� �����. \n";
                std::cin >> shellChoise;

                std::cout << "�������� ������: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;

                switch (shellChoise)// ��������� ������
                {
                case 1:
                    shellsort(arr.data(), arr.data() + arr.size()); 
                    break;
                case 2:
                    shellsorthib(arr.data(), arr.data() + arr.size());
                    break;
                case 3:
                    shellsortsedgwick(arr.data(), arr.data() + arr.size());
                    break;
                case 4:
                    shellsortpratt(arr.data(), arr.data() + arr.size());
                    break;
                case 5:
                    myshell1(arr.data(), arr.data() + arr.size());
                    break;
                case 6:
                    myshell2(arr.data(), arr.data() + arr.size());
                    break;
                case 7:
                    myshell3(arr.data(), arr.data() + arr.size());
                    break;
                default:
                    std::cout << "�������� �����. ����������, ���������� �����.\n";
                }
                

                std::cout << "��������������� ������: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;
                break;
            // 6. ���������� �������
            case 6:
                std::cout << "�������� ������: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;

                treesort(arr.data(), arr.data() + arr.size()); // ��������� ������

                std::cout << "��������������� ������: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;
                break;
            // 7. ������ ����������
            case 7:
                std::cout << "�������� ������: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;

                gnomesort(arr.data(), arr.data() + arr.size()); // ��������� ������

                std::cout << "��������������� ������: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;
                break;
            // 8. ���������� ������� 
            case 8:
                std::cout << "�������� ������: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;

                selectionsort(arr.data(), arr.data() + arr.size()); // ��������� ������

                std::cout << "��������������� ������: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;
                break;
            // 9. ������������� ����������
            case 9:
                std::cout << "�������� ������: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;

                heapsort(arr.data(), arr.data() + arr.size()); // ��������� ������

                std::cout << "��������������� ������: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;
                break;
            // 10. ������� ����������
            case 10:
                std::cout << "�������� ������ ������� ����������:\n";
                std::cout << "1. ������� ���������� (quicksort) \n";
                std::cout << "2. ������� ���������� � �������������� ���������� ��������� ��� ����� �������� (quickinssort) \n";
                std::cin >> quickChoise;

                std::cout << "�������� ������: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;

                switch (quickChoise)// ��������� ������
                {
                case 1:
                    quicksort(arr.data(), arr.data() + arr.size()); 
                    break;
                case 2:
                    quickinssort(arr.data(), arr.data() + arr.size());
                    break;
                default:
                    std::cout << "�������� �����. ����������, ���������� �����.\n";;
                }

                std::cout << "��������������� ������: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;
                break;
            // 11. ���������� ��������
            case 11:
                std::cout << "�������� ������ ���������� ��������:\n";
                std::cout << "1. ���������� �������� (mergesort) \n";
                std::cout << "2. ���������� �������� � �������������� ���������� ��������� ��� ����� �������� (mergeinssort) \n";
                std::cin >> mergeChoise;

                std::cout << "�������� ������: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;

                switch (mergeChoise)// ��������� ������
                {
                case 1:
                    mergesort(arr.data(), arr.data() + arr.size());
                    break;
                case 2:
                    mergeinssort(arr.data(), arr.data() + arr.size());
                    break;
                default:
                    std::cout << "�������� �����. ����������, ���������� �����.\n";;
                }

                std::cout << "��������������� ������: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;
                break;
            // 12. ���������� ���������
            case 12:
                std::cout << "����� ������� ";
                //std::cout << "�������� ������: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;

                //countingsort(arr.data(), arr.data() + arr.size()); // ��������� ������

                //std::cout << "��������������� ������: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;
                break;
            // 13. ������� ����������
            case 13:
                std::cout << "�������� ������: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;

                newbucketsort(arr.data(), arr.data() + arr.size()); // ��������� ������

                std::cout << "��������������� ������: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;
                break;
            // 14. ����������� ����������
            case 14:
                std::cout << "�������� ������ ����������� ����������:\n";
                std::cout << "1. LSD (Least Significant Digit). \n";
                std::cout << "2. MSD (Most Significant Digit). \n";
                std::cin >> radixChoise;

                std::cout << "�������� ������: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;

                switch (radixChoise)// ��������� ������
                {
                case 1:
                    radixsort(arr.data(), arr.data() + arr.size());
                    break;
                case 2:
                    radixsortmsd(arr.data(), arr.data() + arr.size());
                    break;
                default:
                    std::cout << "�������� �����. ����������, ���������� �����.\n";;
                }

                std::cout << "��������������� ������: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;
                break;
            // 15. �������� ����������
            case 15:
                std::cout << "�������� ������: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;

                bitonicsort(arr.data(), arr.data() + arr.size()); // ��������� ������

                std::cout << "��������������� ������: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;
                break;
            // 16. Timsort (��������� ����������)
            case 16:
                std::cout << "��������� ";
                /*
                std::cout << "�������� ������: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                std::cout << std::endl;

                //timsort(arr.data(), arr.data() + arr.size()); // ��������� ������

                std::cout << "��������������� ������: ";
                for (int num : arr) {
                    std::cout << num << " ";
                }
                */
                std::cout << std::endl;
                break;
                // 
            //����� � ����
            case 0:
                std::cout << "������� � ������� ����.\n";
                break;
            default:
                std::cout << "�������� �����. ����������, ���������� �����.\n";
            }
        }
        //��3
        if (practiceChoice == 3) {
            /*
            BinaryTree<int> tree;

            // Insert the nodes into the tree
            tree.insertNode(1);
            tree.insertNode(2);
            tree.insertNode(3);
            tree.insertNode(4);
            tree.insertNode(5);
            tree.insertNode(6);

            cout << "Inorder traversal: ";
            tree.inorder();

            cout << "Preorder traversal: ";
            tree.preorder();

            cout << "Postorder traversal: ";
            tree.postorder();

            cout << "Level order traversal: ";
            tree.levelOrder();

            tree.deleteNode(3);
            cout << "Inorder traversal after removing 3: ";
            tree.inorder();
            */
        }
        //��4,5
        if (practiceChoice == 4) {
            // Date example
            Date d{ 2023, 4, 29 };
            std::cout << "Year: " << d.year << std::endl;
            std::cout << "Month: " << d.month << std::endl;
            std::cout << "Day: " << d.day << std::endl;

            // Banker's Algorithm example
            int processes[] = { 0, 1, 2, 3, 4 };
            int avail[] = { 3, 3, 2 };
            int maxm[][R] = { {7, 5, 3}, {3, 2, 2}, {9, 0, 2}, {2, 2, 2}, {4, 3, 3} };
            int allot[][R] = { {0, 1, 0}, {2, 0, 0}, {3, 0, 2}, {2, 1, 1}, {0, 0, 2} };

            isSafe(processes, avail, maxm, allot);

            // Potential Method example
            potentialMethod();
        }
        // ����� �������
        else {
            std::cout << "������� ��� �������� " << practiceChoice << " ���� �� ����������.\n";
        }

    } while (true);

    return 0;
}