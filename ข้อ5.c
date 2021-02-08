#include<stdio.h>
int main()
{
    int max,i,N,x=1;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<N;i++)
        {
            if(a[i]>max)
            {
                max=a[i];
                x=x+1;
            }

        }
    printf("%d %d",x,max);
    return 0;
}
