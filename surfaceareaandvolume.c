#include<stdio.h>
int main()
{
    int l,b,h,sa,v;
    printf("enter the length");
    scanf("%d",&l);


    printf("enter the breadth");
    scanf("%d",&b);

    printf("enter the hieght");
    scanf("%d",&h);

    sa=2*l*b+l*h+b*h;
    v=l*b*h;

    printf("the sarface area is %d",sa);
    printf("the volume is %d",v);

    return 0;
}



    
}