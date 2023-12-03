#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int r,c;
    printf("enter your chair number between 1 to 20 and row number between 1 to 10:");
    scanf("%d%d",&c,&r);
    if(c>10){
            printf("left\t"); printf("%d\t",c-10);
    }
    else if(c<=10 && c>0) {
            printf("right\t");printf("%d\t",((c-11)*-1));
    }
    printf("%d",((r-11)*-1));
    return 0;
}
