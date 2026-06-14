#include <stdio.h>
int binaryToDecimal(int n) {
    int decimal = 0, base = 1, rem;
    while (n > 0) {
        rem = n % 10;
        decimal = decimal + rem * base;
        base = base * 2;
        n = n / 10;
    }
    return decimal;
}
int main() {
    int binary;
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    printf("Decimal number = %d", binaryToDecimal(binary));
    return 0;
}