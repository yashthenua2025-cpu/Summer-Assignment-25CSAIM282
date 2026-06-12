#include<stdio.h>
int fibonacci(int n) {
  int first =0, second =1, next;
       if(n==1)
       return first;
       if(n==2)
       return second;
       for(int i=3;i<=n;i++) {
          next= first+second;
          first=second;
          second=next;
       }
   return second;
}
int main() {
  int n;
  printf("enter the number");
  scanf("%d",&n);
  printf("%dth fibonacci term=%d\n",n,fibonacci(n));
  return 0;
}