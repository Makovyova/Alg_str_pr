#include <iostream>
#include <vector>
#include "MinXValue.h"
#include "BubbleSort.h"
#include "ShakerSort.h"

// ���������� ������� �� ������� �����
void binarySearchMaxN(int X);

int main() {
    // ������������� ��������� ��� ����������� ����������� ������� ��������
    system("chcp 1251");

    int practiceChoice;
    int taskChoice1, taskChoice2, taskChoice3, taskChoice4;
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
            //std::cout << "2. ��������� ���������� \n";
            /*
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
            std::cout << "15. LSD (least significant digit) \n";
            std::cout << "16. MSD (most significant digit). \n";
            std::cout << "17. �������� ����������  \n";
            std::cout << "18. Timsort (��������� ����������) \n";
            */
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
             /*
            // 2. ��������� ����������
            case 2:
                int arr[] = { 5, 3, 8, 4, 2 };
                int size = sizeof(arr) / sizeof(arr[0]);

                shakersort(arr, arr + size); // ��������� ������

                // ����� ���������������� �������
                for (int i = 0; i < size; i++) {
                    std::cout << arr[i] << " ";
                }
                std::cout << std::endl;
            */
            case 0:
                std::cout << "������� � ������� ����.\n";
                break;
            default:
                std::cout << "�������� �����. ����������, ���������� �����.\n";
            }
        }
        // ����� �������
        else {
            std::cout << "������� ��� �������� " << practiceChoice << " ���� �� ����������.\n";
        }

    } while (true);

    return 0;
}