#include<stdio.h>
int sumofdigit(int n) {
  int sum =0,digit;
  while(n!=0) {
    digit=n%10;
    sum=sum+digit;
    n=n/10;
  }
  return sum;
}
int main() {
  int n;
  printf("enter the number:");
  scanf("%d",&n);
  printf("sum of digit is= %d",sumofdigit(n));
  return 0;
}