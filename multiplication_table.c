#include<stdio.h>
int main() {
  int i, num ;
  printf("enter the value of number");
  scanf("%d",&num);
  printf("multiplication of taboe of %d\n",num);
  for(i=1;i<=10;i++) {
    printf("%d\n",num*i);
  }
  return 0;
}