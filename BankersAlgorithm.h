#ifndef BANKERS_ALGORITHM_H
#define BANKERS_ALGORITHM_H

#include <iostream>
using namespace std;

const int P = 5; // Number of processes
const int R = 3; // Number of resources

void calculateNeed(int need[P][R], int maxm[P][R], int allot[P][R]) {
    for (int i = 0; i < P; i++)
        for (int j = 0; j < R; j++)
            need[i][j] = maxm[i][j] - allot[i][j];
}

bool isSafe(int processes[], int avail[], int maxm[][R], int allot[][R]) {
    int need[P][R];
    calculateNeed(need, maxm, allot);

    bool finish[P] = { 0 };
    int safeSeq[P];
    int work[R];
    for (int i = 0; i < R; i++)
        work[i] = avail[i];

    int count = 0;
    while (count < P) {
        bool found = false;
        for (int p = 0; p < P; p++) {
            if (finish[p] == 0) {
                int j;
                for (j = 0; j < R; j++)
                    if (need[p][j] > work[j])
                        break;

                if (j == R) {
                    for (int k = 0; k < R; k++)
                        work[k] += allot[p][k];

                    safeSeq[count++] = p;
                    finish[p] = 1;
                    found = true;
                }
            }
        }

        if (!found) {
            cout << "System is not in safe state" << endl;
            return false;
        }
    }

    cout << "System is in safe state.\nSafe sequence is: ";
    for (int i = 0; i < P; i++)
        cout << safeSeq[i] << " ";
    cout << endl;

    return true;
}

#endif // BANKERS_ALGORITHM_H