#include <stdio.h>
#include <string.h>

#define MAX 50

int main() {
    char name[MAX][30];
    int stock[MAX];
    float price[MAX];
    int count = 0, choice, i;
    char search[30];

    while (1) {
        printf("\n--- Inventory Menu ---\n");
        printf("1. Add Product\n2. Display Inventory\n3. Update Stock\n4. Search Product\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count < MAX) {
                    printf("Enter product name: ");
                    scanf("%s", name[count]);
                    printf("Enter stock: ");
                    scanf("%d", &stock[count]);
                    printf("Enter price: ");
                    scanf("%f", &price[count]);
                    count++;
                } else {
                    printf("Inventory full!\n");
                }
                break;

            case 2:
                printf("\n--- Product Inventory ---\n");
                for (i = 0; i < count; i++) {
                    printf("%s\t%d\t%.2f\n", name[i], stock[i], price[i]);
                }
                break;

            case 3:
                printf("Enter product name to update: ");
                scanf("%s", search);
                for (i = 0; i < count; i++) {
                    if (strcmp(name[i], search) == 0) {
                        printf("Enter new stock: ");
                        scanf("%d", &stock[i]);
                        printf("Enter new price: ");
                        scanf("%f", &price[i]);
                        break;
                    }
                }
                break;

            case 4:
                printf("Enter product name to search: ");
                scanf("%s", search);
                for (i = 0; i < count; i++) {
                    if (strcmp(name[i], search) == 0) {
                        printf("Product found: %s\tStock: %d\tPrice: %.2f\n", name[i], stock[i], price[i]);
                        break;
                    }
                }
                break;

            case 5:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}