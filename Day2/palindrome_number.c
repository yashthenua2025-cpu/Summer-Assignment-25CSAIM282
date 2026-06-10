#include<stdio.h>
int palindrome(int n) {
  int original,reverse=0,digit;
  original= n;
  while(n!=0) {
    digit= n%10;
    reverse= reverse*10+digit;
    n=n/10;
  }
  if(original==reverse)
  return 1;
  else
  return 0;
}
int main() {
  int n;
  printf("enter the number");
  scanf("%d",&n);
  if(palindrome(n))
     printf("%d is a palindrome number\n",n);
  else
     printf("%d is not a palindrome number\n",n);
     return 0;
}