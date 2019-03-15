#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    int i,l;
    printf("enter s");
    scanf("%s",s);
    l=strlen(s);
    for(i=1;i>=0;i--)
    {
        printf("%c",s[i]);

    }
    return 0;
}
