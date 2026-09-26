// Task 2 (26K-3076)
#include <stdio.h>
int main() {
int balance;
printf("Enter remaining balance: ");
scanf("%d", &balance);
if (balance < 500) {
printf("Low Balance\n");
} else if (balance >= 500 && balance <= 2000) {
printf("Sufficent Balance\n");
} else {
printf("Premium Balance\n");
}
return 0;
}
