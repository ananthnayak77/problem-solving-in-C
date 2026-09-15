#include <stdio.h>
#include <string.h>

#define MAX 50

int main() {
    int productID[MAX];
    char productName[MAX][30];
    float productPrice[MAX];
    int count = 0, choice, i;
    char searchName[30];
    int searchID;
    float minPrice, maxPrice;

    // Sample data for demonstration
    productID[count] = 101; strcpy(productName[count], "Laptop"); productPrice[count] = 55000; count++;
    productID[count] = 102; strcpy(productName[count], "Mouse"); productPrice[count] = 500; count++;
    productID[count] = 103; strcpy(productName[count], "Keyboard"); productPrice[count] = 1500; count++;
    productID[count] = 104; strcpy(productName[count], "Monitor"); productPrice[count] = 12000; count++;

    while (1) {
        printf("\n--- Product Search Menu ---\n");
        printf("1. Search by Product ID\n");
        printf("2. Search by Product Name\n");
        printf("3. Search by Price Range\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Product ID: ");
                scanf("%d", &searchID);
                for (i = 0; i < count; i++) {
                    if (productID[i] == searchID) {
                        printf("Found: ID=%d, Name=%s, Price=%.2f\n",
                               productID[i], productName[i], productPrice[i]);
                        break;
                    }
                }
                if (i == count) printf("Product not found!\n");
                break;

            case 2:
                printf("Enter Product Name: ");
                scanf("%s", searchName);
                for (i = 0; i < count; i++) {
                    if (strcmp(productName[i], searchName) == 0) {
                        printf("Found: ID=%d, Name=%s, Price=%.2f\n",
                               productID[i], productName[i], productPrice[i]);
                        break;
                    }
                }
                if (i == count) printf("Product not found!\n");
                break;

            case 3:
                printf("Enter minimum price: ");
                scanf("%f", &minPrice);
                printf("Enter maximum price: ");
                scanf("%f", &maxPrice);
                printf("Products in range %.2f - %.2f:\n", minPrice, maxPrice);
                int found = 0;
                for (i = 0; i < count; i++) {
                    if (productPrice[i] >= minPrice && productPrice[i] <= maxPrice) {
                        printf("ID=%d, Name=%s, Price=%.2f\n",
                               productID[i], productName[i], productPrice[i]);
                        found = 1;
                    }
                }
                if (!found) printf("No products found in this range!\n");
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
}
