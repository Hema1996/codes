#include<stdio.h>
int main()
{
  int num,op[16],l;
  l=0;
  scanf("%d",&num);
  while(num>0)
  {
    op[l++]=num%2;
    num=num/2;
  }
  printf("%d",l);
  return 0;
}
