#include<stdio.h>
int sumNaturalnumber(int n)
{
  int sum=0;
  for( int i=1;i<=n;i++){
    sum=sum+i;
  }
  return sum;
}
int main() 
{
  int n, result;
  printf("enter the value of N");
  scanf("%d",&n);
  result= sumNaturalnumber(n);
  printf("sum of first %d natural number is = %d",n,result);
  return 0;
}