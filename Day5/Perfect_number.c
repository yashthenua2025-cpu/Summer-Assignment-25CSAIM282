#include<stdio.h>
int perfectnumber(int n) {
  int i,sum=0;
  for (i=1;i<n;i++) {
     if(n%i==0){
       sum=sum+i;
     }
  }
  if(sum==n)
  return 1;
  else
  return 0;
}
int main() {
  int n;
  printf("enter the number :");
  scanf("%d",&n);
  if(perfectnumber(n))
  printf("%d is a perfect number",n);
  else
  printf("%d is not a perfect number",n);
  return 0;
}