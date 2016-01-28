#include<stdio.h>
int main()
{ 
  int num,base,op[16],l,rem,i;
  l=0;
  scanf("%d%d",&num,&base);
  while(num>0)
  {
    rem=num%base;
    if(rem<10)
      {
        op[l++]=rem+48;
      }
    else
      {
        op[l++]=rem+55;
      }
    num=num/base;
  }
  for(i=l-1;i>=0;i--)
  {
    printf("%c",op[i]);
  }
  return 0;
}
