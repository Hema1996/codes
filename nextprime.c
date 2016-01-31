#include<stdio.h>
int prime(int n)
{ 
    int i,flag=0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        return n;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num,k;
    scanf("%d",&num);
    for(k=num;;k++)
    {
        if(prime(k))
        {
            printf("%d",k);
            break;
        }
    }
    return 0;
}
