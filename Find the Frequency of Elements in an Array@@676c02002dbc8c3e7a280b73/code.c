#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int count[101] = {0}; // Assuming the elements are in the range 0-99

    // Read the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        count[arr[i]]++; // Increment the count for the element
    }

    // Print the count of each element
    for (int i = 0; i <=100; i++) {
        if (count[i] > 0) {
            printf("%d %d\n", i, count[i]);
        }
    }

    return 0;
}