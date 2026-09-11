#include <stdio.h>

int main() {
    int N, i;

    printf("Enter number of students: ");
    scanf("%d", &N);

    int STUDENTS[N], MARKS1[N], MARKS2[N], MARKS3[N];
    int STUDENTS_MARKS[4][N];

    
    printf("Enter roll numbers:\n");
    for(i = 0; i < N; i++) {
        scanf("%d", &STUDENTS[i]);
    }

    
    printf("Enter marks of Subject 1:\n");
    for(i = 0; i < N; i++) {
        scanf("%d", &MARKS1[i]);
    }

    printf("Enter marks of Subject 2:\n");
    for(i = 0; i < N; i++) {
        scanf("%d", &MARKS2[i]);
    }

    printf("Enter marks of Subject 3:\n");
    for(i = 0; i < N; i++) {
        scanf("%d", &MARKS3[i]);
    }

    
    for(i = 0; i < N; i++) {
        STUDENTS_MARKS[0][i] = STUDENTS[i];   
        STUDENTS_MARKS[1][i] = MARKS1[i];     
        STUDENTS_MARKS[2][i] = MARKS2[i];     
        STUDENTS_MARKS[3][i] = MARKS3[i];     
    }

    
    printf("\nSTUDENTS_MARKS (Roll No and Marks in 3 Subjects):\n");
    for(i = 0; i < N; i++) {
        printf("%d\n%d\n%d\n%d\n", STUDENTS_MARKS[0][i],
                                   STUDENTS_MARKS[1][i],
                                   STUDENTS_MARKS[2][i],
                                   STUDENTS_MARKS[3][i]);
    }

    return 0;
}
