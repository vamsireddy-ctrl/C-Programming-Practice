#include <stdio.h>

int main() {
    int arr[100], n, i, largest;

    printf("Enter size: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    largest = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] > largest)
            largest = arr[i];
    }

    printf("Largest = %d", largest);

    return 0;
}
