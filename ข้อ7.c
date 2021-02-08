#include<stdio.h>
#include<math.h>
int main()
{
    float t;
    int b=0,c=0,a=0;
    scanf("%f",&t);
    if(t>=0&&t<12)
    {
        b=t;
        a=t%10;
        printf("%d",a);
        printf("%d:%f a.m.",b,a);
    }else if(t>=12&&t<24)
    {
        printf("%.2f p.m.",t);
    }
    return 0;
}
