#include<stdio.h>
int primenumber(int n)  {
  int i,count=0;
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
  int i,start,end;
      printf("enter the starting number");
      scanf("%d",&start);
      printf("enter the ending number");
      scanf("%d",&end);
      printf("prime number between%d and %d\n",start,end);
  for(i=start;i<=end;i++) {
      if(primenumber(n))
      printf("%d",i);
  }
        return 0;
}