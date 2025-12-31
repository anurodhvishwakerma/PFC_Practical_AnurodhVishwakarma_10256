#include <stdio.h>
int main() {
     // ANURODH VISHWAKARMA
    // 10256
    // output:
// Enter height: 5
// * 
// * * 
// * * * 
// * * * * 
// * * * * *
    int n;
    printf("Enter height: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= i; j++) {
    printf("* ");
    }
    printf("\n");
    }
    return 0;
}