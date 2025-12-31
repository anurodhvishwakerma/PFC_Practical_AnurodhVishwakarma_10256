#include <stdio.h>
int main() {
     // ANURODH VISHWAKARMA
    // 10256
    // output:
    // Enter start (a): 1
    // Enter end (b): 5
    // 1 2 3 4 5 
    int a, b;
    printf("Enter start (a): ");
    scanf("%d", &a);
    printf("Enter end (b): ");
    scanf("%d", &b);
    for(int i = a; i <= b; i++) {
        printf("%d ", i);
    }
    return 0;
}