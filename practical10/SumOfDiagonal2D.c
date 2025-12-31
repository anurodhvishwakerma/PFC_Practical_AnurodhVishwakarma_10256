#include <stdio.h>

int main() {
    int arr[3][3] ={
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int n = 3;
    int sumPrimary = 0,sumSecondary = 0;
    for (int i=0;i<n;i++) {
        sumPrimary += arr[i][i];               
        sumSecondary += arr[i][n-i-1];     
    }
    printf("Sum of primary diagonal = %d\n",sumPrimary);
    printf("Sum of secondary diagonal = %d\n",sumSecondary);
    printf("Total sum of both diagonals = %d\n",sumPrimary+sumSecondary);
    return 0;
}
// ANISHA SAHU
// ERP-10201
// Sum of primary diagonal = 15
// Sum of secondary diagonal = 15
// Total sum of both diagonals = 30