#ifndef POTENTIAL_METHOD_H
#define POTENTIAL_METHOD_H

#include <iostream>
#include <vector>

void potentialMethod() {
    std::vector<std::vector<int>> grid = { {3, 1, 7, 4}, {2, 6, 5, 9}, {8, 3, 3, 2} };
    std::vector<int> supply = { 300, 400, 500 };
    std::vector<int> demand = { 250, 350, 400, 200 };

    int startR = 0;
    int startC = 0;
    int ans = 0;

    while (startR != grid.size() && startC != grid[0].size()) {
        if (supply[startR] <= demand[startC]) {
            ans += supply[startR] * grid[startR][startC];
            demand[startC] -= supply[startR];
            startR += 1;
        }
        else {
            ans += demand[startC] * grid[startR][startC];
            supply[startR] -= demand[startC];
            startC += 1;
        }
    }

    std::cout << "The initial feasible basic solution is " << ans << std::endl;
}

#endif // POTENTIAL_METHOD_H