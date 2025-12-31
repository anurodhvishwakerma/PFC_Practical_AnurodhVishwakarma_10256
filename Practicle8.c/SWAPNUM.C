#include <stdio.h>
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main() {
    // ANURODH VISHWAKARMA
    // 10256
    // output:
    // Enter two numbers : 5 6
    // Before swap: a = 5, b = 6
    // After swap:  a = 6, b = 5
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b); 
    printf("After swap:  a = %d, b = %d\n", a, b);
    return 0;
}