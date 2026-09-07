#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    int n, i, searchRoll, found = 0;
    
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    struct Student s[n];
    
    for(i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i+1);
        printf("Roll number: ");
        scanf("%d", &s[i].roll);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
    
    printf("\nEnter roll number to search: ");
    scanf("%d", &searchRoll);
    
    for(i = 0; i < n; i++) {
        if(s[i].roll == searchRoll) {
            printf("\nRecord Found!\n");
            printf("Roll: %d\nName: %s\nMarks: %.2f\n", s[i].roll, s[i].name, s[i].marks);
            found = 1;
            break;
        }
    }
    
    if(!found) {
        printf("\nRecord not found.\n");
    }
    
    return 0;
}
