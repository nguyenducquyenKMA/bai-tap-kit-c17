#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c,r,i,j,t;
    scanf("%d",&t);
    while (t--!=0)
    {
        scanf("%d%d",&c,&r);
        for (i=1;i<=c;i++)
            {
                for (j=1;j<=r;j++)
                {
                    if (i==1||j==1||i==c||j==r)
                    printf("*");
                    else printf(" ");
                }
                printf("\n");
            }


    }
}