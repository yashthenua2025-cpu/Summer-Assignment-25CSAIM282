#include <stdio.h>
int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        if (n % 2 == 1)
            count++;
        n = n / 2;
    }
    return count;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Number of set bits = %d", countSetBits(num));
    return 0;
}