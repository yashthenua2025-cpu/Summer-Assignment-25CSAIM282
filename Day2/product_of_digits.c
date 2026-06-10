#include<stdio.h>
void productdigit(int n) {
  int product= 1,digit;
  while(n!=0) {
       digit=n%10;
       product=product*digit;
       n=n/10;
  }
  printf("product of digit is=%d\n",product);
}
int main() {
  int n;
  printf("enter the number");
  scanf("%d",&n);
  productdigit(n);
  return 0;
}