#include <stdio.h>
int isPrime(int n) {
    int i;
   if (n < 2)
   return 0;
   for (i = 2; i <= n / 2; i++) {
      if (n % i == 0)
   return 0;
    }
    return 1;
}
int main() {
    int n, i, largestPrimeFactor = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (n % i == 0 && isPrime(i)) {
            largestPrimeFactor = i;
        }
    }
   printf("Largest prime factor of %d is %d", n, largestPrimeFactor);
    return 0;
}