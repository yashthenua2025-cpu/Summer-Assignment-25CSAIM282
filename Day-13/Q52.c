#include <stdio.h>
int main() {
    int arr[10], i;
    int even = 0, odd = 0;
    printf("Enter 10 elements:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < 10; i++) {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Number of even elements = %d\n", even);
    printf("Number of odd elements = %d\n", odd);
    return 0;
}