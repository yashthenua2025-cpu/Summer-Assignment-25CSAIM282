#include<stdio.h>
int countdigit(int n){
  int count=0;
  if(n==0)
  return 1;
   while(n!=0) {
    count++;
    n= n/10;
  }
  return count;
}
int main() {
  int n;
  printf("enter the value of number");
  scanf("%d",&n);
  printf("number of digit is=%d\n",countdigit(n));
  return 0;
}