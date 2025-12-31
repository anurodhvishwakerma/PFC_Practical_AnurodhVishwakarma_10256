
#include <stdio.h>

int main() {
    int arr[3][3] ={
        {5, 12, 7},
        {9, 3, 15},
        {8, 6, 2}
    };
    int rows = 3, cols = 3;
    int max = arr[0][0];
    int min = arr[0][0];
    for (int i=0;i<rows;i++) {
        for (int j=0;j<cols;j++) {
            if (arr[i][j]>max) {
                max = arr[i][j];
            }
            if (arr[i][j] < min) {
                min = arr[i][j];
            }
        }
    }
    printf("Maximum element = %d\n",max);
    printf("Minimum element = %d\n",min);
    return 0;
}
// ANISHA SAHU
// ERP-10201
// Maximum element = 15
// Minimum element = 2