#include<stdio.h>
int armstrong(int n) {
  int original,remainder,sum=0;
  original= n;
  while(n!=0) {
    remainder=n%10;
    sum=sum+remainder*remainder*remainder;
    n=n/10;
  }
  if(sum==original)
  return 1;
  else 
  return 0;
}
int main() {
  int start,end,i;
  printf("enter the starting number");
  scanf("%d",&start);
  printf("enter the ending number");
  scanf("%d",&end);
  printf("armstrong numbers between %d and %d are \n",start,end);
  for(i=start;i<=end;i++) {
    if(armstrong(i))
    printf("%d ",i);
  }
  return 0;
}