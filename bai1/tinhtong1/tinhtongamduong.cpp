#include <stdio.h>
int main()
{
    int i,n,a,am,duong;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        am=0;duong=0;
        a=1;
        while (a!=0)
        {
            scanf("%d",&a);
            if (a<0) am+=a;
            else duong+=a;
        }
        printf("NegativeSum = %6d;     PositiveSum = %6d\n",am,duong);
    }
}