#include <stdio.h>
void decimalToBinary(int n) {
    int binary = 0, place = 1, rem;
    while (n > 0) {
        rem = n % 2;
        binary = binary + rem * place;
        place = place * 10;
        n = n / 2;
    }
    printf("Binary number = %d", binary);
}
int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    decimalToBinary(num);
  return 0;
}