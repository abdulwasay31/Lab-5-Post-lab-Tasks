// Task 3 (26K-3076)
#include <stdio.h>
int main() {
int appointment, doctorAvailable, registrationCompleted;
printf("Enter appointment (1=yes, 0=no)");
scanf("%d", &appointment);
printf("Enter doctorAvailable (1=yes, 0=no)");
scanf("%d", &doctorAvailable);
printf("Enter registrationCompleted (1=yes, 0=no)");
scanf("%d", &registrationCompleted);

if (appointment == 1) {
    if (doctorAvailable == 1) {
        if (registrationCompleted == 1) {
            printf("Patient can meet the doctor.\n");
        } else {
            printf("Registration not completed. Cannot meet the doctor.\n");
        }
    } else {
        printf("Doctor is not available. Cannot meet the doctor.\n");
    }
} else {
    printf("No appointment. Cannot meet the doctor.\n");
}
return 0;
}
