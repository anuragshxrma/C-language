#include<stdio.h>
void main()
{
     int i,n,fac=1;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fac=fac*i;
        if(i==n)
        {
          printf("%d=",i);
        }else{
        printf("%d*",i);
        }

    }
    printf("%d",fac);
}
