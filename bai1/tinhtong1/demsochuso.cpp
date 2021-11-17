#include<stdio.h>
#include<math.h>
int main()
{
    long themang, n;
    int sochuso;

    do
    {
    scanf("%ld", &n);
    }while(n < 0);
    sochuso = 0;
    themang = n;

    if(n == 0)
            sochuso = 1;
    while(themang != 0)
    {
        sochuso = sochuso + 1;
        themang = themang / 10;
    }
    printf("%d",sochuso);
    return 0;
}