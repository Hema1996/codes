#include<stdio.h>
unsigned int squareRoot(int n)
{
  int a=n;
  int b=1;
  while(a>b)
  {
    a=(a+b)/2;
    b=n/a;
  }
  return a;
}
int main()
{
  int num;
  scanf("%d",&num);
  printf("%d",squareRoot(num));
  return 0;
}
