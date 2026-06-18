#include<stdio.h>
int armstrong(int n) {
  int original,sum=0,remainder;
   original = n;
  while(n!=0) {
    remainder = n%10;
    sum=sum+remainder*remainder*remainder;
    n=n/10;
  }
       if(sum==original)
        return 1;
       else
        return 0;
}
int main() {
  int num;
  printf("enter the number");
  scanf("%d",&num);
  if(armstrong(num))
  printf("%d is an armstrong number\n",num);
  else
  printf("%d is not armstrong number\n",num);
  return 0;
}