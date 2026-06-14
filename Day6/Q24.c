#include <stdio.h>
int power(int x, int n) {
    int result = 1;
    while (n > 0) {
        result = result * x;
        n--;
    }
    return result;
}
int main() {
    int x, n;
    printf("Enter base and exponent: ");
    scanf("%d %d", &x, &n);
    printf("%d^%d = %d", x, n, power(x, n));
    return 0;
}