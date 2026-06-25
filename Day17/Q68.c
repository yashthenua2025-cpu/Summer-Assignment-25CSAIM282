#include <stdio.h>
int main() {
    int a[100], b[100], c[100];
    int n1, n2, i, j, k = 0, flag;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter elements:\n");
    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter elements:\n");
    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);
    for(i = 0; i < n1; i++) {
        for(j = 0; j < n2; j++) {
            if(a[i] == b[j]) {
                flag = 0;
                for(int x = 0; x < k; x++) {
                    if(c[x] == a[i]) {
                        flag = 1;
                        break;
                    }
                }
                if(flag == 0)
                    c[k++] = a[i];
            }
        }
    }
    printf("Common Elements:\n");
    for(i = 0; i < k; i++)
        printf("%d ", c[i]);
    return 0;
}