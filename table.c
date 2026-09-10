#include <stdio.h>

int main() {
    int N, i;

    printf("Enter number of students: ");
    scanf("%d", &N);

    int STUDENTS[N], MARKS[N];
    int STUDENTS_MARK[2][N];

   
    printf("Enter roll numbers:\n");
    for(i = 0; i < N; i++) {
        scanf("%d", &STUDENTS[i]);
    }

   
    printf("Enter marks:\n");
    for(i = 0; i < N; i++) {
        scanf("%d", &MARKS[i]);
    }

    
    for(i = 0; i < N; i++) {
        STUDENTS_MARK[0][i] = STUDENTS[i];  
        STUDENTS_MARK[1][i] = MARKS[i];     
    }

    
    printf("\nSTUDENTS_MARK (Roll No and Marks):\n");
    for(i = 0; i < N; i++) {
        printf("%d\n%d\n", STUDENTS_MARK[0][i], STUDENTS_MARK[1][i]);
    }

    return 0;
}
