// Task 4 (26K-3076)
#include <stdio.h>
int main() {
int restaurantOpen, itemAvailable, balanceSufficient;
printf("Enter restaurantOpen (1=yes, 0=no)");
scanf("%d", &restaurantOpen);
printf("Enter itemAvailable (1=yes, 0=no)");
scanf("%d", &itemAvailable);
printf("Enter balanceSufficient (1=yes, 0=no)");
scanf("%d", &balanceSufficient);

if (restaurantOpen == 1) {
    if (itemAvailable == 1) {
        if (balanceSufficient == 1) {
            printf("Order placed successfully.\n");
        } else {
            printf("Insufficient balance. Order cannot be placed.\n");
        }
    } else {
        printf("Selected item is not available. Order cannot be placed.\n");
    }
} else {
    printf("Restaurant is closed. Order cannot be placed.\n");
}
return 0;
}
