#include <stdio.h>

int main() {
    int m, n;
    printf("Enter rows and columns of Matrix: ");
    scanf("%d %d", &m, &n);

    int A[m][n];

    // Input Matrix
    printf("Enter elements of Matrix:\n");
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            scanf("%d", &A[i][j]);

    // Interchange Rows
    int r1, r2;
    printf("Enter two rows to interchange (0-based index): ");
    scanf("%d %d", &r1, &r2);

    for(int j=0; j<n; j++) {
        int temp = A[r1][j];
        A[r1][j] = A[r2][j];
        A[r2][j] = temp;
    }

    // Interchange Columns
    int c1, c2;
    printf("Enter two columns to interchange (0-based index): ");
    scanf("%d %d", &c1, &c2);

    for(int i=0; i<m; i++) {
        int temp = A[i][c1];
        A[i][c1] = A[i][c2];
        A[i][c2] = temp;
    }

    // Display Resultant Matrix
    printf("Resultant Matrix:\n");
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
