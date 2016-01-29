#include <stdio.h>
void display(int);
unsigned char set_1(int ,int);
unsigned char set_0(int ,int);
unsigned char toggle(int ,int );
unsigned char toggle_except(int ,int );
unsigned char rotate_left(int);
unsigned char rotate_right(int);
unsigned char swap(int);
int main() 
{
   int n,i,r;
   printf("Enter number and index:");
   scanf("%d",&n);
   scanf("%d",&i);
   
   printf("\n Given number");
   display(n);
   printf("\t Decimal Equivalant: %d",n);
   
   printf("\n Bit %d set to 1:",i);
   r=set_1(n,i);
   display(r);
   printf("\t Decimal Equivalant: %d",r);
   
   printf("\n Bit %d set to 0:",i);
   r=set_0(n,i);
   display(r);
   printf("\t Decimal Equivalant: %d",r);
   
   printf("\n Toggled Bit %d:",i);
   r=toggle(n,i);
   display(r);
   printf("\t Decimal Equivalant: %d",r);
   
   printf("\n Toggled Except Bit %d:",i);
   r=toggle_except(n,i);
   display(r);
   printf("\t Decimal Equivalant: %d",r);
   
   printf("\n Right Rotate:");
   r=rotate_right(n);
   display(r);
   printf("\t Decimal Equivalant: %d",r);
   
   printf("\n Left Rotate:");
   r=rotate_left(n);
   display(r);
   printf("\t Decimal Equivalant: %d",r);
   
   printf("\n Swap Nibble: ");
   r=swap(n);
   display(r);
   printf("\t Decimal Equivalant: %d",r);
   
   return 0;
}
void display(int num)
{
    int i,a=128;
    for(i=0;i<8;i++)
    {
    	if(a>num)
    	{
    	    printf("0");
	}
	else
        {
            printf("1");
	    num=num%a;
        }
        if(i==3)
            printf(" ");
        a=a/2;
    }
}
unsigned char set_1(int num,int i)
{
    num|=1<<i;
    return(num);
}
unsigned char set_0(int num,int i)
{
    num = num &(~(1<<i));
    return(num);
}
unsigned char toggle(int num,int i)
{
    num^=(1<<i); 
    return(num);
}
unsigned char toggle_except(int num,int i)
{
    num=(~num)^(1<<i);
    return(num);
}
unsigned char rotate_right(int num)
{
    num=(num>>1)|(num<<7);
    return(num);
}
unsigned char rotate_left(int num)
{
    num=(num<<1)|(num>>7); 
    return(num);
}
unsigned char swap(int num)
{
    num=(num<<4)|(num>>4);
    return(num);
}
