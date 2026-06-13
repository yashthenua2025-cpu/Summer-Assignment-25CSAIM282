#include<stdio.h>
int factorial(int n)  {
  int i,fact=1;
  for(i=1;i<=n;i++) {
    fact=fact*i;
    }
  return fact;
  }
  int strong(int n) {
    int digit,sum=0,temp;
    temp=n;
    while(temp!=0) {
      digit=temp%10;
      sum=sum+factorial(digit);
      temp=temp/10;
    }
    if(sum==n)
    return 1;
    else
    return 0;
  }
  int main() {
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    if(strong(n))
    printf("%d is a strong number",n);
    else
    printf("%d is not a strong number",n);
    return 0;
  }