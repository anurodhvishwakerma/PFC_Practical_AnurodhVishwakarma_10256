#include <stdio.h>

int main() {
     // ANURODH VISHWAKARM
    // 10256
    // output:
    // Enter PIN: 2566
    //  Incorrect PIN.
    // Enter PIN: 1234
    // Access Granted!
    int pin, attempts = 0;
    const int correctPin = 1234;
    while(attempts < 3) {
        printf("Enter PIN: ");
        scanf("%d", &pin);
        if(pin == correctPin) {
        printf("Access Granted!\n");
        return 0;
        } else {
        printf("Incorrect PIN.\n");
        attempts++;
        }
    }
    printf("Card Blocked. Too many attempts.\n");
    return 0;
}