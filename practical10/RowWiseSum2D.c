#include <stdio.h>

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int rows =3, cols =3;

    for (int i=0;i<rows;i++) {
        int sum = 0;
        for (int j=0;j<cols;j++) {
            sum += arr[i][j];
        }
        printf("Sum of row %d = %d\n",i+1,sum);
    }
    return 0;
}
// ANISHA SAHU
// ERP-10201
// Sum of row 1 = 6
// Sum of row 2 = 15
//Sum of row 3 = 24