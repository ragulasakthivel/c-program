#include<stdio.h>
int main(void)
{
    int n,count=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       if(n%i==0)   
        count++;
    }
    if(count==2)
    printf("yes...prime number");
    else
    printf("no...not a prime number ");
}
