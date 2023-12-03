#include <stdio.h>
#include <stdlib.h>

int main()
{
    char z='+' , t='-' , r='*' , i='/' ,j;
    int x,y;
    printf("enter an operation:\n");
    j=getchar();
    printf("enter two integer numbers:");
    scanf("%d%d",&x,&y);
    if (j==z){
    printf("%d",x+y);}
    else if (j==t){
    printf("%d",x-y);}
    else if(j==r){
    printf("%d",x*y);}
    else if (j==i) {printf("%d",x/y);}
    return 0;
}
