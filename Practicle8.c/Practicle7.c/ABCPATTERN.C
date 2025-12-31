#include <stdio.h>
int main() {
// ANURODH VISHWAKARMA
// 10256
// output:
// Enter height: 3
// A
// AB
// ABC
int n;
printf("Enter height: ");
scanf("%d", &n);
for(int i = 1; i <= n; i++) {
for(int j = 0; j < i; j++) {
printf("%c", 'A' + j); 
}
printf("\n");
}
return 0;
}