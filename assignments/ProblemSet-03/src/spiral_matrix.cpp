#include <iostream>
#include <cmath>

using namespace std;

#define SIZE 5

enum DIRECTION {
    LEFT_TO_RIGHT,
    TOP_TO_BOTTOM,
    RIGHT_TO_LEFT,
    BOTTOM_TO_TOP
};

bool isPerfectSquare(int n){

    int sq;
    sq = sqrt(n);
    if(sq * sq == n)
        return true;
    return false;
}

long int spiralMatrixPrint(int rows, int cols, int mat[SIZE][SIZE])  {

    long int sum=0;
    int perfects = 0;

    int top = 0;
    int left = 0;
    int bottom = rows - 1;
    int right = cols - 1;


    DIRECTION direction = LEFT_TO_RIGHT;

    while (top <= bottom && left <= right) {

        if (direction == LEFT_TO_RIGHT) {
            for (int i = left; i <= right; ++i) {
                sum += mat[top][i];
                perfects += isPerfectSquare(sum)?1:0;
            }
            ++top;
            direction = TOP_TO_BOTTOM;
        }
        else if (direction == TOP_TO_BOTTOM) {
            for (int i = top; i <= bottom; ++i) {
                sum += mat[i][right];
                perfects += isPerfectSquare(sum)?1:0;
            }
            --right;
            direction = RIGHT_TO_LEFT;
        }
        else if (direction == RIGHT_TO_LEFT) {
            for (int i = right; i >= left; --i) {
                sum += mat[bottom][i];
                perfects += isPerfectSquare(sum)?1:0;
            }
            --bottom;
            direction = BOTTOM_TO_TOP;
        }
        else if (direction == BOTTOM_TO_TOP) {
            for (int i = bottom; i >= top; --i) {
                sum += mat[i][left];
                perfects += isPerfectSquare(sum)?1:0;
            }
      
            ++left;
            direction = LEFT_TO_RIGHT;
        }
    }

    return perfects;
    
}

int main()

{   int n;
    int matrix[SIZE][SIZE];
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];
    cout << spiralMatrixPrint(n, n, matrix);;
    return 0;
}
