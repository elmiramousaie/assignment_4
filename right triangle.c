#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main(){

    unsigned int x,y,z,t,r,i;
    printf("enter 3 numbers from the smaller one to bigger to see if they can make a right triangle or not:");
    scanf("%d%d%d",&x,&y,&z);
    i=x*x;
    r=y*y;
    t=z*z;
    printf("x=%d,y=%d,z=%d\n",x,y,z);
    if(i+r==t){printf("yes");}
    else {printf("no");}

    return 0;
}
