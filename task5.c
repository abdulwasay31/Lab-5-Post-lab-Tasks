// Task 5 (26K-3076)
#include <stdio.h>
int main() {
int operation, accountType;
printf("ATM Menu:\n");
printf("1. Balance Inquiry\n");
printf("2. Cash Withdrawal\n");
printf("3. Cash Deposit\n");
printf("4. PIN Change\n");
printf("Select operation (1-4) ");
scanf("%d", &operation);

switch (operation) {
case 1:
printf("Selected: Balance Inquiry\n");
printf("Select Account Type:\n");
printf("1. Savings Account\n");
printf("2. Current Account\n");
printf("Enter choice");
scanf("%d", &accountType);
    switch (accountType) {
case 1:
printf("Balance Inquiry for Savings Account selected.\n");
break;
case 2:
printf("Balance Inquiry for Current Account selected.\n");
break;
default:
printf("Invalid account type.\n");
}
break;

case 2:
printf("Selected: Cash Withdrawal\n");
printf("Select Account Type:\n");
printf("1. Savings Account\n");
 printf("2. Current Account\n");
printf("Enter choice: ");
scanf("%d", &accountType);
    switch (accountType) {
case 1:
printf("Cash Withdrawal from Savings Account selected.\n");
break;
case 2:
printf("Cash Withdrawal from Current Account selected.\n");
break;
default:
printf("Invalid account type.\n");
}
break;

case 3:
printf("Selected: Cash Deposit\n");
printf("Select Account Type:\n");
printf("1. Savings Account\n");
printf("2. Current Account\n");
printf("Enter choice: ");
scanf("%d", &accountType);
    switch (accountType) {
case 1:
printf("Cash Deposit to Savings Account selected.\n");
break;
case 2:
printf("Cash Deposit to Current Account selected.\n");
break;
default:
printf("Invalid account type.\n");
}
break;

case 4:
printf("Selected: PIN Change\n");
printf("Select Account Type:\n");
printf("1. Savings Account\n");
printf("2. Current Account\n");
printf("Enter choice: ");
scanf("%d", &accountType);
switch (accountType) {
case 1:
printf("PIN Change for Savings Account selected.\n");
break;
case 2:
printf("PIN Change for Current Account selected.\n");
break;
default:
printf("Invalid account type.\n");
}
break;
default:
printf("Invalid operation selected.\n");
}
}
