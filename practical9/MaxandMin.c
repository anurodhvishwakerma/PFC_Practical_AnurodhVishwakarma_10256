#include <stdio.h>

int main() {
    int arr[5], n, i;
    int min, max;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    min = max = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] < min)
            min = arr[i];
        if(arr[i] > max)
            max = arr[i];
    }

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);

    return 0;
}
// ANISHA SAHU
// ERP-10201
// Enter number of elements: 4
// Enter elements:
// 2
// 3
// 4
// 1
// Minimum = 1
//Maximum = 4