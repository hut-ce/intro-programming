#include<iostream>
#include<cmath>

using namespace std;


float determinant( float matrix[10][10], int n) {
    float det = 0;
    float submatrix[10][10];
    if (n == 2)
    return ((matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]));
    else {
        for (int x = 0; x < n; x++) {
            int subi = 0;
            for (int i = 1; i < n; i++) {
                int subj = 0;
                    for (int j = 0; j < n; j++) {
                    if (j == x)
                        continue;
                    submatrix[subi][subj] = matrix[i][j];
                    subj++;
                }
                subi++;
            }
            det = det + (pow(-1, x) * matrix[0][x] * determinant( submatrix, n - 1 ));
        }
   }
   return det;
}

int main() {
   int n, i, j;
   float matrix[10][10];

   cin >> n;

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            cin >> matrix[i][j];
    
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(2);
    cout << determinant(matrix, n);

   return 0;
}