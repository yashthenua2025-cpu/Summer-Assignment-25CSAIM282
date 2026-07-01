#include <stdio.h>
int main() {
    char str[100];
    int freq[256] = {0};
    char maxChar;
    int max = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;
    }
    for (int i = 0; i < 256; i++) {
        if (freq[i] > max) {
            max = freq[i];
            maxChar = i;
        }
    }
    printf("Maximum occurring character: %c\n", maxChar);
    printf("Occurrences: %d", max);
    return 0;
}