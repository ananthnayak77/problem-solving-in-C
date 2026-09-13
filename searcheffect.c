#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};


int linearSearch(struct Student s[], int n, int key, int *comparisons) {
    for(int i = 0; i < n; i++) {
        (*comparisons)++;
        if(s[i].roll == key) {
            return i;
        }
    }
    return -1;
}


int binarySearch(struct Student s[], int n, int key, int *comparisons) {
    int low = 0, high = n - 1;
    while(low <= high) {
        int mid = (low + high) / 2;
        (*comparisons)++;
        if(s[mid].roll == key) {
            return mid;
        } else if(s[mid].roll < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n, searchRoll, index, linComp = 0, binComp = 0;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    printf("\nEnter student details in ascending order of roll number:\n");
    for(int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i+1);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nEnter roll number to search: ");
    scanf("%d", &searchRoll);

    
    index = linearSearch(s, n, searchRoll, &linComp);
    if(index != -1) {
        printf("\n[Linear Search] Record Found!\n");
        printf("Roll: %d\nName: %s\nMarks: %.2f\n", s[index].roll, s[index].name, s[index].marks);
    } else {
        printf("\n[Linear Search] Record not found.\n");
    }
    printf("Comparisons in Linear Search: %d\n", linComp);

    
    index = binarySearch(s, n, searchRoll, &binComp);
    if(index != -1) {
        printf("\n[Binary Search] Record Found!\n");
        printf("Roll: %d\nName: %s\nMarks: %.2f\n", s[index].roll, s[index].name, s[index].marks);
    } else {
        printf("\n[Binary Search] Record not found.\n");
    }
    printf("Comparisons in Binary Search: %d\n", binComp);

    
    printf("\n--- Comparison ---\n");
    if(linComp > binComp) {
        printf("Binary Search is more efficient.\n");
    } else if(linComp < binComp) {
        printf("Linear Search is more efficient.\n");
    } else {
        printf("Both searches are equally efficient.\n");
    }return 0;  }