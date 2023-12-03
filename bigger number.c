#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    printf("enter three numbers:");
    scanf("%f%f%f",&a,&b,&c);
    if(a>b&&a>c){printf("the bigger number is=%.3f",a);}
    else if(b>a&&b>c) {printf("the bigger number is=%.3f",b);}
    else if(c>a&&c>b) {printf("the bigger number is=%.3f",c);}
    return 0;
}
