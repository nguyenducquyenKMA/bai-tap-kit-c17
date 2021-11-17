#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    while (n--!=0)
    {
        int a,b,abandau,bbandau,ucln;
        scanf("%d%d",&a,&b);
        abandau=a;
        bbandau=b;
        while(a!=b)

        {
            if (a<b)
                b=b-a;
            else 
                a=a-b;
        }
        ucln=abandau/a;
        ucln*=bbandau;
        printf("LCM(%5d,%5d) =%5d\n",abandau,bbandau,ucln);
    }
    return 0;
}