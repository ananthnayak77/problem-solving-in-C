#include <stdio.h>
#include <math.h>

int main() {
    int n, i, j;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int A[n][n];
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    int trace = 0;
    int sum = 0;

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i == j)
                trace += A[i][j];
            sum += A[i][j] * A[i][j];
        }
    }

    double norm = sqrt(sum);

    printf("Trace of the matrix = %d\n", trace);
    printf("Norm of the matrix = %.2f\n", norm);

    return 0;
}
