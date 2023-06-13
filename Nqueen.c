#include <stdbool.h>
#include <stdio.h>

#define N_MAX 4

// Class definition
typedef struct {
    int N;
} N_queen;

// Method to print the solution
void printSolution(int board[N_MAX][N_MAX]) {
    for (int i = 0; i < N_MAX; i++) {
        for (int j = 0; j < N_MAX; j++) {
            printf(" %d ", board[i][j]);
        }
        printf("\n");
    }
}

// Method to check if it is safe to place a queen at a given position
bool isSafe(int grid[N_MAX][N_MAX], int row, int col) {
    // Check if there is a queen in the same row
    for (int i = 0; i < col; i++) {
        if (grid[row][i] == 1) {
            return false;
        }
    }
    system ("COLOR 0A");

    // Check if there is a queen in the upper left diagonal
    int i = row;
    int j = col;
    while (i >= 0 && j >= 0) {
        if (grid[i][j] == 1) {
            return false;
        }
        i--;
        j--;
    }

    // Check if there is a queen in the lower left diagonal
    i = row;
    j = col;
    while (j >= 0 && i < N_MAX) {
        if (grid[i][j] == 1) {
            return false;
        }
        i++;
        j--;
    }

    return true;
}

// Recursive method to solve the N-Queens problem
bool solveNQUtil(int grid[N_MAX][N_MAX], int col) {
    // Base case: All queens are placed
    if (col >= N_MAX) {
        return true;
    }

    // Try placing a queen in each row of the current column
    for (int i = 0; i < N_MAX; i++) {
        if (isSafe(grid, i, col)) {
            // Place the queen
            grid[i][col] = 1;

            // Recur to place queens in the remaining columns
            if (solveNQUtil(grid, col + 1) == true) {
                return true;
            }

            // Backtrack if the solution was not found
            grid[i][col] = 0;
        }
    }

    // If no queen can be placed in the current column, return false
    return false;
}

// Method to solve the N-Queens problem and print the solution
bool solveNQ(int n) {
    // Create the chessboard grid
    int grid[N_MAX][N_MAX] = {0};

    // Set the size of the chessboard
    int N = n;
    if (N > N_MAX) {
        printf("Invalid input: Maximum board size is %d\n", N_MAX);
        return false;
    }

    // Solve the N-Queens problem
    if (solveNQUtil(grid, 0) == false) {
        printf("Solution does not exist for %d queens\n", N);
        return false;
    }

    printf("Solution found for %d queens:\n", N);
    printSolution(grid);
    return true;
}

int main() {
    int n;
    printf("Number of queens to place: ");
    scanf("%d", &n);

    // Create an instance of the N_queen class
    N_queen Queen;
    Queen.N = n;

    // Solve the N-Queens problem
    solveNQ(Queen.N);

    return 0;
}
