#include<stdio.h>
int primenumber(int n) {
  int i,count= 0;
  for(i=1;i<=n;i++) {
    if(n%i==0)
       count++;
  }
  if(count==2)
  return 1;
  else 
  return 0;
}
int main() {
  int n;
  printf("enter the number");
  scanf("%d",&n);
  if(primenumber(n))
  printf("%d is prime number\n",n);
  else
  printf("%d is not prime number\n",n);
  return 0;
}