#include<stdio.h>
int reversedigit(int number) {
  int reverse=0,digit;
 while(number!=0) {
     digit=number%10;
     reverse=reverse*10+digit;
     number= number/10;
 }
  return reverse;
}
int main() {
    int number;
    printf("enter the number");
    scanf("%d",&number);
    printf("Reversed Digit is=%d\n",reversedigit(number));
    return 0;
}