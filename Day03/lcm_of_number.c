#include<stdio.h>
int gcd(int a ,int b) {
  while( b!=0) {
    int rem = a%b;
       a=b;
       b=rem;
  }
      return a;
}
 int lcm( int a, int b) {
   return (a*b)/gcd(a,b);
 }
 int main() {
   int n1,n2;
   printf("enter two numbers");
   scanf("%d%d",&n1,&n2);
   printf("lcm=%d", lcm(n1,n2));
    return 0;
 }
 