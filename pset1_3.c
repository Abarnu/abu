#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r,s=0;
    printf("enter the value");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n=n/10;
       // printf("%d",n);
    
        s=s*10+r;
    }
    printf("%d",s);
        getch();
}
    
